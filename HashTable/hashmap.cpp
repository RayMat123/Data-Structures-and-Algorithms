#include "hashmap.h"

Contact::Contact(const std::string &key, const std::string &value)
{
    this->name = key;
    this->phone = value;
    this->next = nullptr;
}

const std::string &Contact::getName() const { return this->name; }

const std::string &Contact::getPhone() const { return this->phone; }

HashMap::HashMap()
{
    hashTable = new Contact *[TABLE_SIZE];

    for (int i = 0; i < TABLE_SIZE; ++i)
    {
        hashTable[i] = nullptr;
    }
}

HashMap::~HashMap()
{
    for (int i = 0; i < TABLE_SIZE; ++i)
    {
        Contact *entry = hashTable[i];
        while (entry)
        {
            Contact *prev = entry;
            entry = entry->next;
            delete prev;
        }
    }

    delete[] hashTable;
}

int HashMap::hash_func(const std::string &key)
{
    int sum{0};
    
    for (int i = 0; i < key.size(); ++i)
    {
        char c = key[i];
        if (c == ' ')
            continue;

        int ascVal = static_cast<int>(c);
        sum += ascVal;
    }

    return sum % TABLE_SIZE;
}

void HashMap::add(const std::string &key, const std::string &val)
{
    int hashVal = hash_func(key);

    Contact *prev = nullptr;
    Contact *entry = hashTable[hashVal];

    while (entry)
    {
        prev = entry;
        entry = entry->next;
    }
    if (!entry)
    {
        entry = new Contact(key, val);
        if (!prev)
            hashTable[hashVal] = entry;

        else
            prev->next = entry;
    }

    else
    {
        entry->name = key;
        entry->phone = val;
    }
}

int HashMap::search(const std::string &key)
{
    bool flag = false;

    int hash_val = hash_func(key);
    Contact* entry = hashTable[hash_val];
    while (entry != NULL)
    {
        if (entry->name == key)
        {
            std::cout  << "Name: " << entry->name << "\n";
            std::cout << "Phone: " << entry->phone << "\n";
            flag = true;
            break;
        }
        entry = entry->next;
    }
    if (!flag)
        return -1;
    
    return 0;
}

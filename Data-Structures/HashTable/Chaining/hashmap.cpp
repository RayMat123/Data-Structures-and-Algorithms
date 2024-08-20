#include "hashmap.h"

HashNode::HashNode(const std::string &key, const std::string &value)
{
    this->name = key;
    this->phone = value;
    this->next = nullptr;
}

const std::string &HashNode::getName() const { return this->name; }

const std::string &HashNode::getPhone() const { return this->phone; }

HashMap::HashMap()
{
    hashTable = new HashNode *[TABLE_SIZE];

    for (int i = 0; i < TABLE_SIZE; ++i)
    {
        hashTable[i] = nullptr;
    }
}

HashMap::~HashMap()
{
    for (int i = 0; i < TABLE_SIZE; ++i)
    {
        HashNode *entry = hashTable[i];
        while (entry)
        {
            HashNode *prev = entry;
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

    HashNode *prev = nullptr;
    HashNode *entry = hashTable[hashVal];

    while (entry)
    {
        prev = entry;
        entry = entry->next;
    }
    if (!entry)
    {
        entry = new HashNode(key, val);
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
    HashNode* entry = hashTable[hash_val];
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

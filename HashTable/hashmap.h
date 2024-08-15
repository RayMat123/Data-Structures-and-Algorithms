#include<iostream>

const int TABLE_SIZE = 128;

class HashMap;

class Contact{
public:
    Contact(const std::string&, const std::string&);

    const std::string& getName() const;

    const std::string& getPhone() const;
    
private:
    std::string name;
    std::string phone;

    Contact* next;

    friend class HashMap;
};

class HashMap{
public:
    HashMap();

    ~HashMap();

    int hash_func(const std::string&);

    void add(const std::string&, const std::string&);

    int search(const std::string&);

private:
    Contact** hashTable;
};
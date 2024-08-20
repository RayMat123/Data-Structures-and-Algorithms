#include<iostream>

const int TABLE_SIZE = 128;

class HashMap;

class HashNode{
public:
    HashNode(const std::string&, const std::string&);

    const std::string& getName() const;

    const std::string& getPhone() const;
    
private:
    std::string name;
    std::string phone;

    HashNode* next;

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
    HashNode** hashTable;
};
#pragma once

#include<iostream>
#include<string>
#include<vector>

class Contact{

public:
    Contact(const std::string&, const std::string&);

    Contact operator=(const Contact&);

    const std::string& getName();
    const std::string& getPhone();

private:
    std::string name;
    std::string phone;

    Contact* next;

    friend class ContactList;
};

class ContactList{

public:
    ContactList(const std::vector<Contact*>&);

private:
    Contact* head;
    Contact* tail;  

    friend class Contact;
};

class HashTable{

public:
    HashTable(const Contact&);

    int hash(const Contact&);

private:
    std::vector<Contact*> hashTable;

    friend class Contact;
};




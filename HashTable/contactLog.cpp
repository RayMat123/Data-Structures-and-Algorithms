#include "contactLog.h"

Contact::Contact(const std::string& _name, const std::string& _phone){
    this->name = _name;
    this->phone = _phone;
}

Contact Contact::operator=(const Contact& contact){
    this->phone = contact.phone;
}

const std::string& Contact::getName(){
    return this->name;
}

const std::string& Contact::getPhone(){
    return this->phone;
}

ContactList::ContactList(const std::vector<Contact*>& list)
    : head(nullptr), tail(nullptr)  {

    for(int i = 0; i < list.size(); ++i){
        Contact* newContact = list[i];
        if(!head) head = tail = newContact;
        else{
            tail->next = newContact;
            tail = newContact;
        }
    }
}


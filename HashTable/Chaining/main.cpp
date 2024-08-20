#include <iostream>
#include "hashmap.h"

int main()
{
    HashMap hash;
    std::string key, val;

    for (int i = 0; i < 3; ++i)
    {
        std::cout << "Enter name: ";
        std::getline(std::cin, key);
        std::cout << "Enter phone: ";
        std::getline(std::cin, val);

        hash.add(key, val);
    }

    std::cout << "Enter name to search: ";
    std::getline(std::cin, key);

    if (hash.search(key) == -1)
    {
        std::cout << "No element found at key " << key << std::endl;
    }

    return 0;
}
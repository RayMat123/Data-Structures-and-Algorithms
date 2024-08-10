#include <iostream>
#include "Node.h"

void dataType();
void menu();
template <typename T>
void input(List<T> &);

int main()
{
    int choice{-1};
    int dataChoice{-1};
    int size{0};

    do
    {
        menu();
        std::cin >> choice;
        dataType();
        std::cin >> dataChoice;

        switch (choice)
        {
        case 0:
        {
            std::cout << "Exiting the program." << std::endl;

            break;
        }

        case 1:
        {
            // Singly Linked List with Head only

            if (dataChoice == 1)
            {
                List<int> list(false);
                std::cout << "Enter size of array: ";
                std::cin >> size;
                std::cout << "Enter elements: ";
                int val;
                for (int i = 0; i < size; i++)
                {
                    std::cin >> val;
                    list.push_back(val, 1, 0, 0, 0);
                }
                list.singly_print();
            }
            if (dataChoice == 2)
            {
                List<double> list(false);
                std::cout << "Enter size of array: ";
                std::cin >> size;
                std::cout << "Enter elements: ";
                double val;
                for (int i = 0; i < size; i++)
                {
                    std::cin >> val;
                    list.push_back(val, 1, 0, 0, 0);
                }
                list.singly_print();
            }
            if (dataChoice == 3)
            {
                List<std::string> list(false);
                std::cout << "Enter size of array: ";
                std::cin >> size;
                std::cout << "Enter elements: ";
                std::string val;
                for (int i = 0; i < size; i++)
                {
                    std::cin >> val;
                    list.push_back(val, 1, 0, 0, 0);
                }
                list.singly_print();
            }

            break;
        }

        case 2:
        {
            if (dataChoice == 1)
            {
                List<int> list(false);
                std::cout << "Enter size of array: ";
                std::cin >> size;
                std::cout << "Enter elements: ";
                int val;
                for (int i = 0; i < size; i++)
                {
                    std::cin >> val;
                    list.push_back(val, 0, 1, 0, 0);
                }
            }
            if (dataChoice == 2)
            {
                List<double> list(false);
                std::cout << "Enter size of array: ";
                std::cin >> size;
                std::cout << "Enter elements: ";
                double val;
                for (int i = 0; i < size; i++)
                {
                    std::cin >> val;
                    list.push_back(val, 0, 1, 0, 0);
                }
            }
            if (dataChoice == 3)
            {
                List<std::string> list(false);
                std::cout << "Enter size of array: ";
                std::cin >> size;
                std::cout << "Enter elements: ";
                std::string val;
                for (int i = 0; i < size; i++)
                {
                    std::cin >> val;
                    list.push_back(val, 0, 1, 0, 0);
                }
            }

            break;
        }

        case 3:
        {
            if (dataChoice == 1)
            {
                List<int> list(false);
                std::cout << "Enter size of array: ";
                std::cin >> size;
                std::cout << "Enter elements: ";
                int val;
                for (int i = 0; i < size; i++)
                {
                    std::cin >> val;
                    list.push_back(val, 0, 0, 1, 0);
                }
                list.singly_print();
            }
            if (dataChoice == 2)
            {
                List<double> list(false);
                std::cout << "Enter size of array: ";
                std::cin >> size;
                std::cout << "Enter elements: ";
                double val;
                for (int i = 0; i < size; i++)
                {
                    std::cin >> val;
                    list.push_back(val, 0, 0, 1, 0);
                }
            }
            if (dataChoice == 3)
            {
                List<std::string> list(false);
                std::cout << "Enter size of array: ";
                std::cin >> size;
                std::cout << "Enter elements: ";
                std::string val;
                for (int i = 0; i < size; i++)
                {
                    std::cin >> val;
                    list.push_back(val, 0, 0, 1, 0);
                }
            }

            break;
        }

        case 4:{
            if (dataChoice == 1)
            {
                List<int> list(false);
                std::cout << "Enter size of array: ";
                std::cin >> size;
                std::cout << "Enter elements: ";
                int val;
                for (int i = 0; i < size; i++)
                {
                    std::cin >> val;
                    list.push_back(val, 0, 0, 0, 1);
                }
            }
            if (dataChoice == 2)
            {
                List<double> list(false);
                std::cout << "Enter size of array: ";
                std::cin >> size;
                std::cout << "Enter elements: ";
                double val;
                for (int i = 0; i < size; i++)
                {
                    std::cin >> val;
                    list.push_back(val, 0, 0, 0, 1);
                }
            }
            if (dataChoice == 3)
            {
                List<std::string> list(false);
                std::cout << "Enter size of array: ";
                std::cin >> size;
                std::cout << "Enter elements: ";
                std::string val;
                for (int i = 0; i < size; i++)
                {
                    std::cin >> val;
                    list.push_back(val, 0, 0, 0, 1);
                }
            }


            break;
        }

        default:
            std::cout << "Invalid choice." << std::endl;
            break;
        }

    } while (choice != 0);

    return 0;
}

void dataType()
{
    std::cout << "Choose the data type of the list." << std::endl;

    std::cout << "1. Integer" << std::endl;
    std::cout << "2. Double" << std::endl;
    std::cout << "3. String" << std::endl;
}

void menu()
{
    std::cout << "Choose from the following." << std::endl;

    std::cout << "1. Singly Linked List" << std::endl;
    std::cout << "2. Doubly Linked List" << std::endl;
    std::cout << "3. Circular Singly Linked List." << std::endl;
    std::cout << "4. Circular Doubly Linked List." << std::endl;

    std::cout << "0. Exit" << std::endl;
}

template <typename T>
void input(List<T> &node)
{
}
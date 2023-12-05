#include <iostream>
#include <string>

#include "SmartPointers/SharedPtr/SharedPtr.hpp"
#include "SmartPointers/UniquePtr/UniquePtr.hpp"

int main() {
    while (true) {
        std::cout << "Choose the type (1: int, 2: char, 3: string, 0: exit): ";
        int typeChoice;
        std::cin >> typeChoice;

        if (typeChoice == 0) {
            std::cout << "Exiting the program." << std::endl;
            break;
        }

        std::cout << "Choose the pointer type (1: unique_ptr, 2: shared_ptr): ";
        int ptrChoice;
        std::cin >> ptrChoice;

        switch (typeChoice) {
            case 1: {
                if (ptrChoice == 1) {
                    int value;
                    std::cout << "Enter an integer value: ";
                    std::cin >> value;
                    auto a = make_my_unique_personal<int>(value);
                    std::cout << "Created unique_ptr with value: " << *(a.get()) << std::endl;
                } else if (ptrChoice == 2) {
                    int value;
                    std::cout << "Enter an integer value: ";
                    std::cin >> value;
                    auto a = make_shared_personal<int>(value);
                    std::cout << "Created shared_ptr with value: " << *(a.get()) << std::endl;
                } else {
                    std::cout << "Invalid pointer type choice." << std::endl;
                }
                break;
            }
            case 2: {
                if (ptrChoice == 1) {
                    char value;
                    std::cout << "Enter a character value: ";
                    std::cin >> value;
                    auto a = make_my_unique_personal<char>(value);
                    std::cout << "Created unique_ptr with value: " << *(a.get()) << std::endl;
                } else if (ptrChoice == 2) {
                    char value;
                    std::cout << "Enter a character value: ";
                    std::cin >> value;
                    auto a = make_shared_personal<char>(value);
                    std::cout << "Created shared_ptr with value: " << *(a.get()) << std::endl;
                } else {
                    std::cout << "Invalid pointer type choice." << std::endl;
                }
                break;
            }
            case 3: {
                if (ptrChoice == 1) {
                    std::string value;
                    std::cout << "Enter a string: ";
                    std::cin >> value;
                    auto a = make_my_unique_personal<std::string>(value);
                    std::cout << "Created unique_ptr with value: " << *(a.get()) << std::endl;
                } else if (ptrChoice == 2) {
                    std::string value;
                    std::cout << "Enter a string: ";
                    std::cin >> value;
                    auto a = make_shared_personal<std::string>(value);
                    std::cout << "Created shared_ptr with value: " << *(a.get()) << std::endl;
                } else {
                    std::cout << "Invalid pointer type choice." << std::endl;
                }
                break;
            }
            default:
                std::cout << "Invalid type choice." << std::endl;
        }
    }

    return 0;
}

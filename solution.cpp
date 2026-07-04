#include <iostream>
#include <string>

int main() {
    std::string name;
    int problems_solved;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "How many DSA problems have you solved today? ";
    std::cin >> problems_solved;

    std::cout << "\n--- Result ---" << std::endl;
    std::cout << "Keep grinding, " << name << "! Adding " << problems_solved 
              << " problems to the books." << std::endl;

    return 0;
}
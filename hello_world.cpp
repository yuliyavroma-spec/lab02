#include <iostream>  // for std::cout, std::cin
#include <string>    // for std::string

// Main function
int main() {
    std::string name;  // variable to store the name
    std::cout << "Enter your name: ";  // prompt for name
    std::cin >> name;  // read the name
    std::cout << "Hello world from @" << name << std::endl;  // print greeting
    return 0;  // successful completion
}

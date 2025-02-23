// The getline() function is used to read a line of text from an input stream
// and store it in a string. Here's a basic example:


#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::cout << "Enter your name: ";
    std::getline(std::cin, input);
    std::cout << "Hello, " << input << "!" << std::endl;
    return 0;
}

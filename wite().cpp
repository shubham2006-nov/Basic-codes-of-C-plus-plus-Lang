
// The write() function is commonly used in low-level I/O operations, such as writing to files or sockets.
//  In C++, you can use write() to write binary data directly to a file. Here's an example:#include <iostream>
#include <iostream>
#include <fstream>

int main() {
    std::ofstream outFile("example.bin", std::ios::binary);
    if (!outFile) {
        std::cerr << "Error opening file for writing" << std::endl;
        return 1;
    }

    int number = 42;
    outFile.write(reinterpret_cast<char*>(&number), sizeof(number));
    outFile.close();
    
    std::cout << "Number written to file successfully!" << std::endl;
    return 0;
}



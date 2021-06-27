#include <iostream>
#include <fstream>
#include <string>

int main()
{
    int counter = 0;

    const std::string filename = "words.txt";

    std::ifstream inFile;
    char ch;
    inFile.open(filename);
    inFile >> ch;
    while(!inFile.eof())
    {
        ++counter;
        inFile >> ch;
        std::cout << ch << std::endl;
    }
    if (inFile.eof())
    {
        std::cout << "End of file reached." << std::endl;
    }

    std::cout << counter << std::endl;
    inFile.close();

    return 0;
}

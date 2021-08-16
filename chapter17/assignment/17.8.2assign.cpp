#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char *argv[])
{
    if(argc == 1)
    {
        std::cerr << "Usage: " << argv[0] << " filename" << std::endl;
        exit(EXIT_FAILURE);
    }

    std::ofstream fout;
    // std::string input;
    char input;

    for(int file = 1; file < argc; file++)
    {
        fout.open(argv[file]);
        if(!fout.is_open())
        {
            std::cerr << "Could not open " << argv[file] << std::endl;
            fout.clear();
            continue;
        }
        std::cout << "Enter characters for the file: " << std::endl;

        while(std::cin.get(input) && !std::cin.eof())
        {
            fout << input;
        }
        fout.clear();
        fout.close();


    }

    return 0;

}
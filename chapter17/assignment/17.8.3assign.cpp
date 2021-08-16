#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        std::cerr << "Usage: " << argv[0] << " input file output file" << std::endl;
        exit(EXIT_FAILURE);
    }

    std::ifstream fin;
    std::ofstream fout;

    fin.open(argv[1]);
    if(!fin.is_open())
    {
        std::cerr << "Could not open " << argv[1] << std::endl;
        fin.clear();
    }

    fout.open(argv[2]);
    if(!fout.is_open())
    {
        std::cerr << "Could not open " << argv[2] << std::endl;
        fout.clear();
    }
    
    char ch;
    while(fin.get(ch))
        fout << ch;

    fin.clear();
    fin.close();

    fout.close();

    std::cout << "Copied Done! " << std::endl;

    return 0;

}
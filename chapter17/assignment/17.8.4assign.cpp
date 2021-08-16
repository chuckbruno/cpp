#include <iostream>
#include <fstream>
#include <string>


int main()
{

    std::string input_file1 = "17.8.4file1.txt";
    std::string input_file2 = "17.8.4file2.txt";

    std::string output = "17.8.4merge.txt";

    std::ifstream fin1, fin2;
    std::ofstream fout;

    fin1.open(input_file1.c_str());
    if(!fin1.is_open())
    {
        std::cerr << "Could open file " << input_file1 << std::endl;
        exit(EXIT_FAILURE);
    }
    fin2.open(input_file2.c_str());
    if(!fin2.is_open())
    {
        std::cerr << "Could open file " << input_file2 << std::endl;
        exit(EXIT_FAILURE);
    }

    fout.open(output);
    if(!fout.is_open())
    {
        std::cerr << "Could open file " << output << std::endl;
        exit(EXIT_FAILURE);
    }

    std::string line1, line2, temp;
    decltype(line1.size()) length1 = 0, length2 = 0;
    while(std::getline(fin1, line1) && std::getline(fin2, line2))
    {
        temp = line1 + " " + line2;
        length1 += line1.size();
        length2 += line2.size();
        fout << temp << std::endl;
    }

    if (fin1.peek() != -1)
    {
        while(std::getline(fin1, line1))
        {
            fout << line1 << std::endl;
        }
    }
    else
    {
        while (std::getline(fin2, line2))
        {
            fout << line2 << std::endl;;
        }
        
    }

    fin1.clear();
    fin1.close();
    fin2.clear();
    fin2.close();
    fout.close();

}
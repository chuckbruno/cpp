#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

struct patron
{
    std::string name;
    double donation;
};


const int Maxnum = 5;


int main()
{
    const std::string filename = "patrons.txt";
    std::fstream inFile;

    inFile.open(filename);
    if(!inFile.is_open())
    {
        std::cout << "Could not open the file" << std::endl;
        std::cout << "Program terminating" << std::endl;

        std::exit(EXIT_FAILURE);
    }

    char line[100];
    inFile.getline(line, 100);
    const int num = atoi(line);
    patron** parPtr = new patron*[num];
    std::string lines[num * 2];

    int index = 0;

    while(inFile.good())
    {
        inFile.getline(line, 100);
        lines[index] = line;
        index++;
        // std::cout << line << std::endl;
    }

    if (inFile.eof())
    {
        std::cout << "End of file reached. " << std::endl;

    }
    inFile.close();

    for(int i = 0; i < index - 1; i += 2)
    {
        patron* paPtr = new patron();
        paPtr->name = lines[i];
        paPtr->donation = atoi(lines[i + 1].c_str());
        parPtr[i / 2] = paPtr;
    }

    std::cout << "Grand Patrons: " << std::endl;
    int check = 0;
    for(int i =0; i < num; i++)
    {
        if (parPtr[i]->donation > 10000){
            std::cout << parPtr[i]->name << ": " << parPtr[i]->donation << std::endl;
            check += 1;
        }
    }

    if (check == 0)
    {
        std::cout << "None" << std::endl;
    }

    check = 0;
    std::cout << "Patrons: " << std::endl;
    for(int i=0; i < num; i++)
    {
        if(parPtr[i]->donation < 10000)
        {
            std::cout << parPtr[i]->name << ": " << parPtr[i]->donation << std::endl;
            check += 1;
        }
    }
    if (check == 0)
        std::cout << "None" << std::endl;

    for(int i = 0; i < num; i++)
    {
        delete parPtr[i];
    }

    delete[] parPtr;

    return 0;
}

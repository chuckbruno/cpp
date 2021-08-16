#include "17.8.6employ.h"

const int MAX = 5;

int main()
{
    abstr_emp * pc[MAX];
    int indexs = 0;
    const char * fileName = "17.8.6data.dat";

    int i;

    int classtype;
    for(i = 0; i < MAX; i++)
    {
        std::cout << "Enter e, m, f, h to create class, q to quit ";
        char ch;
        std::cin >> ch;
        switch(ch)
        {
            case 'e':
                pc[indexs] = new employee;
                pc[indexs]->SetAll();
                break;
            case 'm':
                pc[indexs] = new manager;
                pc[indexs]->SetAll();

                break;
            case 'f':
                pc[indexs] = new fink;
                pc[indexs]->SetAll();

                break;
            case 'h':
                pc[indexs] = new highfink;
                pc[indexs]->SetAll();
                break;
            case 'q':
                std::cout << "Bye!";
                break;

        }
        indexs++;
    }

    std::ofstream fout(fileName, std::ios_base::out|std::ios_base::app);
    if(!fout.is_open())
    {
        std::cerr << "Could open " << fileName << std::endl;
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < indexs; i++)
    {
        pc[i]->WriteAll(fout);
    }

    fout.close();
    std::cout << "Written data! " << std::endl;

    std::ifstream fin(fileName);
    char ch;
    i = 0;
    if(fin.is_open())
    {
        while((fin >> classtype).get(ch))
        switch(classtype)
        {
            case Employee:
                pc[i] = new employee;
                break;
            case Manager:
                pc[i] = new manager;
                break;
            case Fink:
                pc[i] = new fink;
                break;
            case HighFink:
                pc[i] = new highfink;
                break;
        }

        pc[i]->setall(fin);
        pc[i]->ShowAll();
    }    

    return 0;

}
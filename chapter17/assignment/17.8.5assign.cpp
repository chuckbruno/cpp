#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>


int main()
{

    std::vector<std::string> matNames, patNames;
    std::string matname, patname;

    std::ifstream matfin("17.8.5mat.dat");
    std::ifstream patfin("17.8.5pat.dat");

    std::ofstream matnpatfout("17.8.5matnpat.dat");
    if(!matfin.is_open())
    {
        std::cerr << "Could open: " << "17.8.5mat.dat" << std::endl;
        exit(EXIT_FAILURE);
    }

    while(std::getline(matfin, matname))
    {
        matNames.push_back(matname);
    }

    std::cout << "Mat friends list: " << std::endl;
    for(auto name: matNames)
    {
        std::cout << name << std::endl;
    }

    matfin.close();

    if(!patfin.is_open())
    {
        std::cerr << "Could open: " << "17.8.5pat.dat" << std::endl;
        exit(EXIT_FAILURE);
    }

    while(std::getline(patfin, patname))
    {
        patNames.push_back(patname);
    }
    
    std::cout << "Pat friends list: " << std::endl;
    for(auto name: patNames)
    {
        std::cout << name << std::endl;
    }
    patfin.close();

    std::vector<std::string> vect1(matNames.size() + patNames.size());

    auto loc = std::set_union(matNames.begin(), matNames.end(), patNames.begin(), patNames.end(), vect1.begin());
    vect1.resize(loc - vect1.begin());

    for(auto name: vect1)
    {
        matnpatfout << name << std::endl;
    }

    matnpatfout.close();

    return 0;
}
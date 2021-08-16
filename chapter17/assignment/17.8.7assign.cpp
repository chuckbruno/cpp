#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

void ShowStr(const std::string & name)
{
    std::cout << name << std::endl;
}


void GetStrs(std::ifstream& is, std::vector<std::string>& ivstr)
{
    std::string temp;
    size_t len;

    while(is.read((char *)&len, sizeof(size_t)) && len > 0)
    {
        char * c = new char[len];
        is.read(c, len);

        temp = c;
        ivstr.push_back(temp);

        delete [] c;

    }
}

class Store
{
    public:
        std::ofstream& os;

    public:
        Store(std::ofstream& o): os(o) {};
        void operator()(const std::string & name);
        
};



void Store::operator()(const std::string & name)
{
    size_t len = name.size();
    os.write((char *)&len, sizeof(size_t));
    os.write(name.data(), len);
}


int main()
{
    using namespace std;
    vector<string> vostr;
    string temp;

    cout << "Enter strings (empty line to quit):\n";
    while(getline(cin, temp) && temp[0] != '\0')
    {
        vostr.push_back(temp);
    }
    cout << "Here is your input.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);

    ofstream fout("strings.dat", ios_base::out|ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

    vector<string> vistr;
    ifstream fin("strings.dat", ios_base::in|ios_base::binary);
    if(!fin.is_open())
    {
        cerr << "Could not open file for input.\n";
        exit(EXIT_FAILURE);
    }

    GetStrs(fin, vistr);
    cout << "\nHere are the strings read from the file:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);

}
#include <iostream>
#include <cstring>


struct stringy
{
    char * str;
    int ct;
};


void set(stringy& strgy, const char * strPtr);
void show(const stringy& strgy, int num = 1);
void show(const char * str, int num = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what is used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';

    show(testing);
    show(testing, 3);
    show("Done");

    delete beany.str;

    return 0;
}


void set(stringy& strgy, const char * strPtr)
{
    strgy.str = new char[strlen(strPtr) + 1];
    strcpy(strgy.str, strPtr);
    strgy.ct = strlen(strPtr);
}


void show(const stringy& strgy, int num)
{

    for(int i = 0; i < num; i++)
    {
        std::cout << "str is: " << strgy.str << "; length is: " << strgy.ct << std::endl;
    }
}


void show(const char * str, int num)
{
    
    for(int i = 0; i < num; i++)
    {
        std::cout << str << std::endl;
    }
}



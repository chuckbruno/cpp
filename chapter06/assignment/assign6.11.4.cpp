#include <iostream>
#include <string>


const int strsize = 50;
void showmenu();


struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};


int main()
{
    bop bopArr[5];

    bop wimp = bop();
    strcpy(wimp.fullname, "Wimp Macho");
    strcpy(wimp.title, "Manager" );
    strcpy(wimp.bopname, "WM");
    wimp.preference = 0;

    bop raki = bop();
    strcpy(raki.fullname, "Raki Rhodes");
    strcpy(raki.title, "Junior Programmer");
    strcpy(raki.bopname, "RR");
    raki.preference = 1;

    bop celia = bop();
    strcpy(celia.fullname, "Celia Laiter");
    strcpy(celia.title, "Worker");
    strcpy(celia.bopname, "MIPS");
    celia.preference = 2;

    bop hoppy = bop();
    strcpy(hoppy.fullname, "Hoppy Hipman");
    strcpy(hoppy.title, "Analyst Trainee");
    strcpy(hoppy.bopname, "HH");
    hoppy.preference = 1;

    bop pat = bop();
    strcpy(pat.fullname, "Pat Hand");
    strcpy(pat.title, "Teacher");
    strcpy(pat.bopname, "LOOPY");
    pat.preference = 2;

    bopArr[0] = wimp;
    bopArr[1] = raki;
    bopArr[2] = celia;
    bopArr[3] = hoppy;
    bopArr[4] = pat;

    showmenu();
    char choice;

    while(choice != 'q')
    {
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch(choice)
        {
            case 'a':
                for (int i = 0; i < 5; i++)
                {
                    std::cout << bopArr[i].fullname << std::endl;
                }
                break;

            case 'b':
                    for (int i = 0; i < 5; i ++)
                    {
                        std::cout << bopArr[i].title << std::endl;
                    }
                    break;
            case 'c':
                    for (int i = 0; i < 5; i++)
                    {
                        std::cout << bopArr[i].bopname << std::endl;
                    }
                    break;
            case 'd':
                    for (int i = 0; i < 5; i++)
                    {
                        if (bopArr[i].preference == 0)
                            std::cout << bopArr[i].fullname << std::endl;
                        else if (bopArr[i].preference == 1)
                            std::cout << bopArr[i].title << std::endl;
                        else if (bopArr[i].preference == 2)
                        {
                            std::cout << bopArr[i].bopname << std::endl;
                        }
                    }
                    break;
        }

    }

    std::cout << "Bye!" << std::endl;

    return 0;

}


void showmenu()
{
    std::cout << "Benevolent Order of Programmers Report\n"
        "a. display by name         b. display by title\n"
        "c. display by bopname      d. display by preference\n"
        "q. quit\n";

}

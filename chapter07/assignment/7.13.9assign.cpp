#include <iostream>


using namespace std;

const int SLEN = 30;

struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};


int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for(int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;
}


int getinfo(student pa[], int n)
{

    char tempChar[SLEN];
    int temp;
    int i;
    for(i = 0; i < n; i++)
    {
        std::cout << "Enter student #" << (i + 1) << " name: ";
        std::cin.getline(tempChar, SLEN);
        if (*tempChar == '\0')
        {
            break;
        }

        strcpy(pa[i].fullname, tempChar);

        std::cout << "Enter student #" << (i + 1) << " hobby: ";
        std::cin >> pa[i].hobby;

        std::cout << "Enter student #" << (i + 1) << " ooplevel: ";

        while (!(std::cin >> temp))
        {

            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Bad Input; input process terminated";
            break;
        }

        pa[i].ooplevel = temp;

        std::cin.get();

    }
    return i;
}

void display1(student st)
{
    std::cout << " Display1 " << std::endl;
    std::cout << st.fullname << std::endl;
    std::cout << st.hobby << std::endl;
    std::cout << st.ooplevel << std::endl;

}

void display2(const student * ps)
{
    std::cout << " Display2 " << std::endl;
    std::cout << ps->fullname << std::endl;
    std::cout << ps->hobby << std::endl;
    std::cout << ps->ooplevel << std::endl;

}

void display3(const student pa[], int n)
{
    std::cout << " Display3 " << std::endl;

    for(int i=0; i < n; i++)
    {
        std::cout << pa[i].fullname << std::endl;
        std::cout << pa[i].hobby << std::endl;
        std::cout << pa[i].ooplevel << std::endl;
    }
}

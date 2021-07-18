#include "10.10.2assign.h"


int main()
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");

    one.Show();
    std::cout << std::endl;

    one.FormalShow();

    two.Show();
    two.FormalShow();

    three.Show();
    three.FormalShow();

    return 0;
}

#include <iostream>
#include "golf.h"


int main()
{

    golf ann;
    setgolf(ann, "Ann Birdfree", 24);

    handicap(ann, 35);

    golf andy;
    int result = setgolf(andy);

    showgolf(ann);
    if (result == 0)
    {
        std::cout << "Did not enter name" << std::endl;
    }
    else
    {
        showgolf(andy);

    }

    int golf_num = 5;
    int rember = 0;
    golf golf_arr[golf_num];
    for (int i = 0; i < golf_num; i++)
    {
        golf temp_golf;
        rember++;
        int re = setgolf(temp_golf);
        if (re != 0)
            golf_arr[i] = temp_golf;
        else
            break;
    }

    for (int i = 0; i < rember; i++)
    {
        showgolf(golf_arr[i]);
    }

    return 0;

}

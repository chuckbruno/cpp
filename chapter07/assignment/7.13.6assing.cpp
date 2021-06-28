#include <iostream>


int fill_array(double ar[], int num);
void show_array(const double ar[], int num);
void reverse_array(double ar[], int num);

const int Maxsize = 10;

int main()
{
    double ar[Maxsize];
    int size = fill_array(ar, Maxsize);
    show_array(ar, size);
    reverse_array(ar, size);
    show_array(ar, size);

    return 0;

}


int fill_array(double ar[], int num)
{
    std::cout << "Enter a number: ";

    double temp;
    int i = 0;
    while(std::cin >> temp && i < Maxsize)
    {
        ar[i] = temp;

        i++;
        std::cout << "Enter a number: ";
    }
    std::cout << i << " numbers " << std::endl;
    return i;

}

void show_array(const double ar[], int num)
{
    for(int i=0; i < num; i++)
    {
        std::cout << ar[i] << " ";
    }

    std::cout << std::endl;
}

void reverse_array(double ar[], int num)
{
    double temp;;
    int mid = num / 2;
    for(int i=1; i< mid; i++)
    {
        temp = *(ar + i);
        *(ar + i) = *(ar + num - i -1);
        *(ar + num - i - 1) = temp;
    }
}

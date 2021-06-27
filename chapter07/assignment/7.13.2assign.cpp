#include <iostream>


const int Max = 10;

int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
double get_average(const double ar[], int n);


int main()
{
    double golf_scores[Max];
    int size = fill_array(golf_scores, Max);
    show_array(golf_scores, size);

    double average = get_average(golf_scores, size);

    std::cout << "Average value: " << average << std::endl;

    std::cout << "Done " << std::endl;


    return 0;
}


int fill_array(double ar[], int limit)
{
    double temp;
    int i;
    for(i = 0; i < limit; i++)
    {
        std::cout << "Enter golf score #" << (i + 1) << ": ";
        std::cin >> temp;
        if (!std::cin)
        {
            std::cin.clear();
            while(std::cin.get() != '\n')
                continue;
            std::cout << "Bad input: input process terminated. \n";
            break;
        }
        else if(temp < 0)
            break;
        ar[i] = temp;
    }

    return i;
}


void show_array(const double ar[], int size)
{
    for (int i=0; i < size; i++)
    {
        std::cout << "golf score #" << (i + 1) << ": ";
        std::cout << ar[i] << std::endl;
    }
}


double get_average(const double ar[], int size)
{
    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += ar[i];
    }

    double ave = sum / size;

    return ave;
}

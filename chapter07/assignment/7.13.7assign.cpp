#include <iostream>


const int Max = 5;

double* fill_array(double* ar, int num);
void show_array(const double* begin, const double* end);
void revalue(double r, double* begin, double* end);


int main()
{
    double properties[Max];
    double* endPtr = fill_array(properties, Max);
    show_array(properties, endPtr);
    if (endPtr > properties)
    {
        std::cout << "Enter revaluation factor: ";
        double factor;
        while(!(std::cin >> factor))
        {
            std::cin.clear();
            while(std::cin.get() != '\n')
                continue;
            std::cout << "Bad input; Please enter number: ";

        }
        revalue(factor, properties, endPtr);
        show_array(properties, endPtr);
    }
    std::cout << "Done\n";
    std::cin.get();
    std::cin.get();

    return 0;

}


double*  fill_array(double* ar, int num)
{
    double temp;
    int i = 0;
    for (i=0; i < num; i++)
    {
        std::cout << "Enter value #" << (i + 1) << ": ";
        std::cin >> temp;

        if(!std::cin)
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;

            std::cout << "Bad input: input process terminated.\n";
            break;
        }

        else if(temp < 0)
            break;
        *(ar + i) = temp;
    }

    return (ar + i);
}

void show_array(const double* begin, const double* end)
{
    const double* ptr;
    int i=0;
    for(ptr = begin; ptr != end; ptr++)
    {
        std::cout << "Property #" << (i + 1) << ": $";
        std::cout << *ptr << std::endl;
        i++;
    }
}


void revalue(double r, double* begin, double* end)
{
    double * ptr;
    for(ptr=begin; ptr != end; ptr++)
        (*ptr) *= r;
}

#include <iostream>

double add(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

typedef double (*pfun)(double, double);

double calculate(double x, double y, pfun funPtr);

int main()
{

    double a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    typedef pfun funPtr;
    funPtr addPtr = add;
    funPtr multiPtr = multiply;
    funPtr dividePtr = divide;

    double addResult = calculate(a, b, addPtr);

    std::cout << "add Result: " << addResult << std::endl;
    double multiResult = calculate(a, b, multiPtr);
    std::cout << "Multi Result: " << multiResult << std::endl;

    double (*pf[3])(double, double) = {addPtr, multiPtr, dividePtr};

    for(int i = 0; i < 3; i++)
    {
        double tempResult = calculate(a, b, pf[i]);
        std::cout << "TempResult: " << tempResult << std::endl;
    }

    return 0;

}


double add(double x, double y)
{
    double result = x + y;
    return result;
}


double multiply(double x, double y)
{
    double result = x * y;
    return result;
}

double divide(double x, double y)
{
    double result = x / y;
    return result;
}


double calculate(double x, double y, pfun funPtr)
{
    double result = funPtr(x, y);
    return result;
}

#include <iostream>


int main()
{
    int originDeposit = 100;
    float DaphneRate = 0.1f;
    float CleoRate = 0.05f;

    int years = 0;

    float DaphneBenifits=100;
    float CleoBenifits=100;

    while (CleoBenifits <= DaphneBenifits)
    {
        DaphneBenifits += originDeposit * DaphneRate;
        CleoBenifits *= (1 + CleoRate);
        years += 1;
    }

    std::cout << "DaphneBenifits is " << DaphneBenifits << std::endl;
    std::cout << "CleoBenifits is " << CleoBenifits << std::endl;
    std::cout << "It costs: " << years << " years" << std::endl;

    return 0;
}

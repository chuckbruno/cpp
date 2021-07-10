#include <iostream>
#include <new>

struct chaff
{
    char dross[20];
    int slag;
};

const int BUF = 512;
char buffer[BUF];

int main()
{
    chaff *chPtr = new (buffer) chaff[2];
    strcpy(chPtr[0].dross, "placement");
    chPtr[0].slag = 100;

    strcpy(chPtr[1].dross, "helloworld");
    chPtr[1].slag = 900;

    for(int i = 0; i < 2; i++)
    {
        std::cout << chPtr[i].dross << " , " << chPtr[i].slag << std::endl;
    }

    char * chPtr1 = new char[BUF];
    chaff* chaffPtr1 = new (chPtr1) chaff[2];

    strcpy(chaffPtr1[0].dross, "Jiaoyu");
    chaffPtr1[0].slag = 890;

    strcpy(chaffPtr1[1].dross, "Tianzhen");
    chaffPtr1[1].slag = 359;

    for(int i = 0; i < 2; i++)
    {
        std::cout << chaffPtr1[i].dross << " , " << chaffPtr1[i].slag << std::endl;
    }

    delete[] chPtr1;
    return 0;
}

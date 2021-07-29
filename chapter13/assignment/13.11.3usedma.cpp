#include <iostream>
#include "13.11.3dma.h"

const int CLIENTS = 3;


int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    dmaABC * p_clients[CLIENTS];
    char tempLable[100];
    int tempRate;
    char * tempColor;
    char * tempStyle;
    char kind;

    for (int i = 0; i < CLIENTS; i++)
    {
        cout << "Enter DMA's label: ";
        cin.getline(tempLable, 100);
        cout << "Enter DMA's rating: ";
        cin >> tempRate;
        cout << "Enter 1 for baseDMA or 2 for lacksDMA or 3 for hasDMA: ";
        while(cin >> kind && (kind != '1' && kind != '2' && kind != '3'))
        {
            cout << "Enter either 1, 2 or 3";
        }

        if(kind == '1')
            p_clients[i] = new baseDMA(tempLable, tempRate);
        else if(kind == '2')
        {
            char tempColor[40];
            cin.clear();
            cout << "Enter the color of lacksDMA: ";
            cin >> tempColor;
            p_clients[i] = new lacksDMA(tempColor, tempLable, tempRate);
        }
        else if(kind == '3')
        {
            char style[100];
            cin.clear();
            cout << "Enter the tyle of hasDMA: ";
            cin >> style;
            p_clients[i] = new hasDMA(style, tempLable, tempRate);
        }

        while (cin.get() != '\n')
        {
            continue;
        }
        
    }

    cout << endl;
    for(int i = 0; i < CLIENTS; i++)
    {
        p_clients[i]->View();
        cout << endl;
    }

    for(int i = 0; i < CLIENTS; i++)
    {
        delete p_clients[i];
    }

    cout << "Done.\n";
    return 0;
}

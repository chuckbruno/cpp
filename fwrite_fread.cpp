#include <stdio.h>


int main()
{

    FILE* f = fopen("data.db", "wb");
    // FILE* f = fopen("data.txt", "rb");

    int d = 100;
    fwrite(&d, sizeof(int), 1, f);
    // int c;
    // fread(&c, sizeof(int), 1, f);
    // printf("%d", c);
    return 0;
}
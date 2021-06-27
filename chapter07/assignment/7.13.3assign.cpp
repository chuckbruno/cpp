#include <iostream>


struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};


void show_box(const box b);
void set_volume(box* b);


int main()
{
    box bb;
    strcpy(bb.maker, "BBOx");
    bb.height = 10;
    bb.width = 20;
    bb.length = 30;
    set_volume(&bb);
    show_box(bb);

    return 0;
}


void show_box(const box b)
{
    std::cout << "maker: " <<  b.maker << std::endl;
    std::cout << "height: " << b.height << std::endl;
    std::cout << "width: " << b.width << std::endl;
    std::cout << "length: " << b.length << std::endl;
    std::cout << "volume: " << b.volume << std::endl;


}


void set_volume(box* b)
{
    b->volume = b->height * b->width * b->length;
}

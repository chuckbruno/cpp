#include <iostream>
#include <cstring>

class Frabjous
{
    private:
        char fab[20];
    public:
        Frabjous(const char * s = "C++");
        virtual void tell() {std::cout << fab;}

};


class Gloam
{
    private:
        int glip;
        Frabjous fb;
    public:
        Gloam(int g = 0, const char * s = "C++"):
        glip(g), fb(s) {};
        Gloam(int g, const Frabjous & f)
        :glip(g), fb(f) {};
        void tell();
};


Frabjous::Frabjous(const char * s)
{
    int n = strlen(s);
    int len = n > 20 ? 20 : n;
    strncpy(fab, s, len);
    std::cout << len << std::endl;
    fab[len + 1] = '\0';
}


void Gloam::tell()
{
    std::cout << "Glob: " << glip << std::endl;
    fb.tell();
}


int main()
{
    Gloam b(10, "Worldjio");
    b.tell();
}

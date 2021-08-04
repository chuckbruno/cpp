#include <iostream>


class Frabjous
{
    private:
        char fab[20];
    public:
        Frabjous(const char * s = "C++");
        virtual void tell() {std::cout << fab; }

};


class Gloam: private Frabjous
{
    private:
        int glip;
    public:
        Gloam(int g = 0, const char * s = "C++");
        Gloam(int g, const Frabjous & f);
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


Gloam::Gloam(int g, const char * s):
    Frabjous(s), glip(g)
{

}

Gloam::Gloam(int g, const Frabjous & f)
    :Frabjous(f), glip(g)
{

}

void Gloam::tell()
{
    std::cout << glip << std::endl;
    Frabjous::tell();
}


int main()
{
    Gloam c(20, "Python");
    c.tell();

    return 0;
}
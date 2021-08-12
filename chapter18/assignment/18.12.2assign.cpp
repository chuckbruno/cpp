#include <iostream>


class Cpmv
{
    public:
        struct Info
        {
            std::string qcode;
            std::string zcode;
        };
    private:
        Info * pi;
        static int ct;
    public:
        Cpmv();
        Cpmv(std::string q, std::string z);
        Cpmv(const Cpmv & cp);
        Cpmv(Cpmv && mv);
        ~Cpmv();
        Cpmv & operator=(const Cpmv & cp);
        Cpmv & operator=(Cpmv && mv);
        Cpmv operator+(const Cpmv & obj) const;
        void Display() const;
};


int Cpmv::ct = 0;

Cpmv::Cpmv()
{
    ++ct;
    pi = nullptr;
    std::cout << "default constructor called; " << std::endl;
}


Cpmv::Cpmv(std::string q, std::string z)
{
    ++ct;
    pi = new Info();
    pi->qcode = q;
    pi->zcode = z;
    std::cout << "q, z constructor called; " << std::endl;
}


Cpmv::Cpmv(const Cpmv & cp)
{
    ++ct;
    pi = new Info();
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
    std::cout << "copy const called; " << std::endl;
}


Cpmv::~Cpmv()
{
    delete pi;
    std::cout << "destructor called; object left: " << --ct << std::endl;
    std::cout << "deleted object;" << std::endl;
}


Cpmv & Cpmv::operator=(const Cpmv & cp)
{
    if(this == &cp)
    {
        return *this;
    }
    delete pi;
    pi = new Info();
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
    std::cout << "assign function called; " << std::endl;

    return *this;
}


Cpmv & Cpmv::operator=(Cpmv && mv)
{
    if(this == &mv)
    {
        return *this;
    }
    delete pi;
    std::cout << "move assign function called; " << std::endl;
    pi = mv.pi;
    mv.pi = nullptr;

    return *this;
}


Cpmv Cpmv::operator+(const Cpmv & obj) const
{
    std::cout << "Entering operator+()" << std::endl;
    Cpmv temp;
    temp.pi = new Info;
    temp.pi->qcode = pi->qcode + obj.pi->qcode;
    temp.pi->zcode = pi->zcode + obj.pi->zcode;
    std::cout << "Leaving operator+()" << std::endl;

    return temp;
}


void Cpmv::Display() const
{
    if (pi != nullptr)
    {
        std::cout << "qcode is: " << pi->qcode << "; zcode is: " << pi->zcode << std::endl;
    }
    else
    {
        std::cout << "Info data is Null" << std::endl;
    }
}


struct Data
{
    private:
        std::string d1;
    /* data */

    public:
        void Show()
        {
            std::cout << d1 << std::endl;
        }

        void SetS(std::string v)
        {
            d1 = v;
        }
};



int main()
{
    
    {
        Cpmv one("chuck", "bruno");
        Cpmv two = one;
        Cpmv three("jay", "chou");
        Cpmv four(one + three);
        Cpmv five = one + three;

        std::cout << "object one: " << std::endl;
        one.Display();

        std::cout << "object two: " << std::endl;
        two.Display();

        std::cout << "object three: " << std::endl;
        three.Display();

        std::cout << "object four: " << std::endl;
        four.Display();

        std::cout << "object five: " << std::endl;
        five.Display();
    }

    return 0;
}



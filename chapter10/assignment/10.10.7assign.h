#ifndef PLORG_H
#define PLORG_H

class Plorg
{
private:
    char m_name[20];
    int m_rate;
public:
    Plorg(const char * nptr = "Plorga", int rate = 50);
    void setRate(int rate);
    void showPlorg() const;

};


#endif

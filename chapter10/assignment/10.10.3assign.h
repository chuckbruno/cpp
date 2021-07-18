#ifndef GOLF_H_
#define GOLF_H_


class Golf
{

private:
    char fullname[40];
    int handicap;
public:
    Golf();
    Golf(const char * name, int hc);
    void Setgolf();
    void Handicap(int hc);
    void Showgolf();

};


#endif


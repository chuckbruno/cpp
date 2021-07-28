#ifndef CD_H_
#define CD_H_

class Cd
{
    private:
        char * performers;
        char * label;
        int selections;
        double playtime;
    public:
        Cd(const char * s1, const char * s2, int n, double x);
        Cd(const Cd & d);
        Cd();
        virtual ~Cd();
        virtual void Report() const;
        Cd & operator=(const Cd & d);
};


class Classic: public Cd
{
    private:
        char * title;
    public:
        Classic(const char * t1, const char * s1, const char * s2, int n, double x);
        Classic(const char *  t1, const Cd & c);
        Classic(const Classic & cc);
        Classic();
        virtual ~Classic();
        virtual void Report() const;
        Classic & operator=(const Classic & cc);


};

#endif //#define CD_H_
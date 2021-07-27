class Cd
{
    private:
        char performers[50];
        char lable[20];
        int selections;
        double playtime;
    public:
        Cd(char * s1, char * s2, int n, double x);
        Cd(const Cd & d);
        Cd();
        ~Cd();
        void Report() const;
        Cd & operator=(const Cd & d);
};



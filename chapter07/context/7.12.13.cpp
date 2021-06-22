#include <isotream>


struct applicant{
    char name[10];
    int credit_ratings[3];
};

int main()
{
    void f1(applicant * a);
    const char * f2(const applicant * a1, const applicant * a2);

    typedef void (*p1_fun) (applicant * a);
    typedef const char * (*p2_fun) (const applicant * a1, const applicant * a2);

    p1_fun p1 = f1;
    p2_fun p2 = f2;

    p1_fun ap[5];

    p2_fun (*pa)[10];

    return 0;

}

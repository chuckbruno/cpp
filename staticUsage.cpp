class Account{
public:
    int age;
    static double m_rate;
    static void set_rate(const double& x) {m_rate = x;}
};

double Account::m_rate = 8.0;

int main(){
    Account::set_rate(5.0);
    Account a;
    a.set_rate(9.0);
    a.m_rate = 90;
}
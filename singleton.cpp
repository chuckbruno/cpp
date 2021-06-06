class A{
    
public:
    static A& getInstance(){return a;}
    int setup(){return 5;}

private:
    A();
    A(const A& rhs);
    static A a;
};


int main(){

    A::getInstance().setup();
    return 0;

}
template<typename T>

class complex{
public:
    complex (T r=0, T i=0): re(r), im(i){}

    T real() const {return re;}
    T imag() const {return im;}

private:
    T re, im;


};

int main(){

    complex<int> a(3, 5);
    complex<double> d(89.0, 23.5);
}
#include <iostream>

class stone{
public:
    stone(int w, int h, int we)
    : _w(w), _h(h), _we(we)
    {}

    bool operator< (const stone& rhs) const {
        return _we < rhs._we;
        }

    int GetW() const{ return _w;}

    private:
        int _w, _h, _we;
};


template<class T>
inline const T& min(const T& a, const T& b){
    return b < a ? b : a;
}


int main(){
    stone r1(2, 3, 9), r2(3, 4, 10);
    stone d = min(r1, r2);

    std::cout << d.GetW() << std::endl;

}
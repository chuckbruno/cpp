#include <vector>
#include <iostream>
#include <stdexcept>


class iterator_overflow{
public:
    iterator_overflow(int index, int max)
    :_index(index), _max(max) {}
    int index() {return _index;}
    int max() {return _max;}

    void what_happened(std::ostream& os = std::cerr){
        os << "Internal error: current index " << _index << " exceeds maximum bound: " << _max;
    }

    private:
    int _index;
    int _max;

};



class Triangular_iterator
{
    public:
        friend class Triangular;
        Triangular_iterator(int index) : _index(index - 1) {}
        bool operator==(const Triangular_iterator&) const;
        bool operator!=(const Triangular_iterator&) const;
        int operator* () const;
        Triangular_iterator& operator++();
        Triangular_iterator operator++(int);

    private:
        void check_integrity() const;
        int _index;

};

class Triangular
{
    public:
        friend class Triangular_iterator;
        typedef Triangular_iterator iterator;
        Triangular_iterator begin() const {return Triangular_iterator(_beg_pos);}
        Triangular_iterator end() const {return Triangular_iterator(_beg_pos + _length);}

        friend int Triangular_iterator::operator*() const;
        friend void Triangular_iterator::check_integrity() const;

        Triangular(){
            _length = 1;
            _beg_pos = 1;
            _next = 0;
        };

        Triangular(int len)
        {
            _length = len;
            _beg_pos = 1;
            _next = 0;
        }

        Triangular(int len, int beg_pos)
        {
            _length = len > 0 ? len : 1;
            _beg_pos = beg_pos > 0 ? beg_pos : 1;
            _next = _beg_pos - 1;
        }
        int length() const {return _length;}
        int beg_pos() const {return _beg_pos;}
        int elem(int pos) const;
        bool next(int& value);
        void next_reset(){_next = _beg_pos - 1;}
        static int gen_element(int index)
        {
            return _elems[index];
        }

    private:
        int _length;
        int _beg_pos;
        int _next;
        static int _max_elements;
        static std::vector<int> _elems;
};

int Triangular::_max_elements = 1024; //

inline bool Triangular_iterator::operator==(const Triangular_iterator& rhs) const
{
    return _index == rhs._index;
}

inline bool Triangular_iterator::operator!=(const Triangular_iterator& rhs) const
{
    return !(*this == rhs);
}


inline int Triangular_iterator::operator* () const
{
    check_integrity();
    return Triangular::_elems[_index];
}

inline void Triangular_iterator::check_integrity () const
{
    if(_index >= Triangular::_max_elements)
        throw iterator_overflow(_index, Triangular::_max_elements);

    if(_index >= Triangular::_elems.size())
    {
        Triangular::gen_element(_index + 1);
    }
}

inline Triangular_iterator& Triangular_iterator::operator++ ()
{
    ++_index;
    check_integrity();
    return *this;
}

inline Triangular_iterator Triangular_iterator::operator++ (int)
{
    Triangular_iterator tmp = *this;
    ++_index;
    check_integrity();
    return tmp;
}

std::vector<int> Triangular::_elems = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190, 210};

bool Triangular::next(int& value){
    if(_next < _beg_pos + _length - 1)
    {
        value = _elems[_next++];
        return true;
    }
    else{
        return false;
    }
}

int sum(Triangular& trian)
{
    if(!trian.length())
        return 0;

    int val, sum = 0;
    trian.next_reset();
    while(trian.next(val))
    {
        std::cout << val << " ";
        sum += val;

    }
    return sum;
}

std::ostream& operator<<(std::ostream& os, const Triangular &tri)
{
    os << "(" << tri.beg_pos() << ", " << tri.length() << ")";
    return os;
}

int main()
{
    Triangular tri(4, 1);
    std::cout << tri << " -- sum of elements: " << sum(tri) << std::endl;

    Triangular tri2(4, 3);
    std::cout << tri2 << " -- sum of elements: " << sum(tri2) << std::endl;

    Triangular tri3(7, 8);
    std::cout << tri3 << " -- sum of elements: " << sum(tri3) << std::endl;

    Triangular::iterator it = tri3.begin();
    Triangular::iterator end = tri3.end();

    while(it != end)
    {
        std::cout << *it << ' ';
        ++it;
    }

    return 0;
}



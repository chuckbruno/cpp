#include "10.10.5assign.h"


int main()
{
    Stack st;

    customer a = {"google", 120};
    customer b = {"jiao", 7896};
    customer c = {"baidu", 8907};

    st.push(a);
    st.push(b);
    st.push(c);

    st.pop();
    st.pop();
    st.pop();

    return 0;
}
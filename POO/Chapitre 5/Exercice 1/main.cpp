#include <iostream>

using namespace std;

template <class T> T max3(T a, T b, T c)
{
    if(a > b && a > c)
        return a;
    else if(b > c)
        return b;
    else
        return c;
}

int main()
{
    cout << max3(1.5,0.5,3.0);
    return 0;
}
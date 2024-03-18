#include <iostream>
#include <vector>

using namespace std;

template <class T>
T somme(const T* start, const T* end)
{
    T total = T();
    while(start != end)
    {
        total += *(start++);
    }
    return total;
}

int main()
{
    const int i[3] = { 1, 2, 3 };
    const double d[3] = { 1.2, 5.0, 3.0 };
    cout << somme(i, i+3) << endl;
    cout << somme(d, d+3) << endl;
    return 0;
}
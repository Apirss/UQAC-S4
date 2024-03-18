//
// Created by Apirss on 17/03/2024.
//

#ifndef EXERCICE_3_ARRAY_H
#define EXERCICE_3_ARRAY_H

#include <iostream>
#include <initializer_list>
using namespace std;

template <class T, int n>
class Array
{
private:
    T data[n];
public:
    Array()
    {
        remplir(T());
    }
    Array(initializer_list<T> init)
    {
        int taille = min(init.size(), size_t(n));
        copy(init.begin(), init.begin() + taille, data);
        if(taille < n)
        {
            fill(data + taille, data + n, T());
        }
    }
    Array(const Array& a)
    {
        copy(a.data, a.data + n, data);
    }
    Array(Array&& a)
    {
        move(a.data, a.data + n, data);
    }
    Array& operator=(Array& a)
    {
        copy(a.data, a.data + n, data);
        return *this;
    }
    Array& operator=(Array&& a)
    {
        move(a.data, a.data + n, data);
        return *this;
    }

    T operator[](int index)
    {
        return data[index];
    }

    void remplir(const T& value)
    {
        fill(data, data+n, value);
    }
    friend ostream& operator<<(ostream& out, const Array& arr)
    {
        for (int i = 0; i < n; ++i)
        {
            out << arr.data[i] << " ";
        }
        return out;
    }
};

#endif //EXERCICE_3_ARRAY_H

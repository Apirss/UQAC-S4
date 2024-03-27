#include <iostream>

using namespace std;

class E;
class A
{
private:
    int x1;
    E* e;
public:
    void faireX(){};
};

class B : public A
{
private:
    int y1;
public:
    void faireY(){};
};

class C : public A
{
public:
    void faireZ(){};
};

class F;
class D : public A
{
private:
    double z1, z2;
    F* f;
};

class E
{
private:
    double x1;
public:
    void faireE(){};
};

class F
{
private:
    double f1;
public:
    void faireF(){}
};

int main()
{
    return 0;
}
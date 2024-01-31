//
// Created by Apirss on 26/01/2024.
//

#include <string>
#include <iostream>
#include "rational.h"
#include <numeric>
using namespace std;

Rational::Rational(int num, int deno) : numerateur(num), denominateur(deno){
    simplify();
}

Rational::Rational(Rational &other) : numerateur(other.numerateur), denominateur(other.denominateur){}

Rational::Rational(Rational &&other) : numerateur(other.numerateur), denominateur(other.denominateur){
    other.numerateur = 0;
    other.denominateur = 1;
}

Rational::~Rational() {}

void Rational::simplify() {
    int gcd = std::gcd(numerateur, denominateur);
    if (gcd != 0){
        numerateur /= gcd;
        denominateur /= gcd;
    }
}

Rational &Rational::operator*=(const Rational &other) {
    this->denominateur *= other.denominateur;
    this->numerateur *= other.numerateur;
    simplify();
    return *this;
}

Rational &Rational::operator/=(const Rational &other) {
    this->denominateur *= other.numerateur;
    this->numerateur *= other.denominateur;
    simplify();
    return *this;
}

double Rational::toDouble() const {
    return (double)(numerateur)/denominateur;
}

ostream &operator<<(ostream &out, const Rational &r) {
    out << r.numerateur << "/" << r.denominateur;
    return out;
}

Rational Rational::operator+(const Rational &other) const {
    return Rational(numerateur * other.denominateur + other.numerateur * denominateur, denominateur * other.denominateur);
}

Rational Rational::operator-(const Rational &other) const {
    return Rational(numerateur * other.denominateur - other.numerateur * denominateur, denominateur * other.denominateur);
}

Rational Rational::operator*(const Rational &other) const {
    return Rational(numerateur * other.numerateur, denominateur * other.denominateur);
}

Rational Rational::operator/(const Rational &other) const {
    return Rational(numerateur * other.denominateur, denominateur * other.numerateur);
}

int main()
{
    Rational r1(3, 4); // 3/4
    Rational r2(5, 8); // 5/8
    cout << "r1: " << r1 << endl;
    cout << "r2: " << r2 << endl;
    cout << "Valeur de r1 : " << r1.toDouble() << endl ;
    Rational r3 = r1 + r2;
    cout << "r1 + r2 : " << r3 << endl;
    Rational r4 = r1 / r2;
    cout << "r1 / r2 : " << r4 << endl;
    r1 /= r2;
    cout << "r1 /= r2 : " << r1 << endl;
    r1 *= r2;
    cout << "r1 *= r2 : " << r1 << endl;
    return 0;
}

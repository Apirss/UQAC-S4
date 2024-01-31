//
// Created by Apirss on 26/01/2024.
//

using namespace std;

#ifndef TD2_RATIONAL_H
#define TD2_RATIONAL_H

class Rational
{
private:
    int numerateur;
    int denominateur;
public:
    Rational(int num = 0, int deno = 1);
    Rational(Rational& other);
    Rational(Rational&& other);
    ~Rational();
    void simplify();
    Rational operator+(const Rational& other) const;
    Rational operator-(const Rational& other) const;
    Rational operator*(const Rational& other) const;
    Rational operator/(const Rational& other) const;
    Rational& operator*=(const Rational& other);
    Rational& operator/=(const Rational& other);
    double toDouble() const;
    friend ostream& operator<<(ostream& out, const Rational& r);
};

#endif //TD2_RATIONAL_H

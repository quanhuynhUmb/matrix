#ifndef _Fraction_h
#define _Fraction_h

#include <iostream>
#include <math.h>
#include <fstream>
#include <vector>
#include <iomanip> 
#include <string>
#define FLT_EPSILON (float)1.19209e-07
#define ulong long
using namespace std;
class Fraction
{
private:
    ulong numerator;
    ulong denominator;
public:
    Fraction();
    Fraction(ulong, ulong);
    float getF() const
    {
        return ((float)numerator/denominator);
    }
    void compact();
    const Fraction operator+(const Fraction&) const;
    const Fraction operator*(const Fraction&) const;
    bool operator==(const Fraction&) const;

// operator overloading <<
friend ostream& operator<<(ostream &out, const Fraction& src);
// friend ostream& operator<<(ostream &out, const float);

friend istream& operator>> (istream &is, Fraction& src);
};
#endif

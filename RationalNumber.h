//
// Created by Jonathan on 9/16/2015.
//

#ifndef HW_01_RATIONALNUMBER_H
#define HW_01_RATIONALNUMBER_H

#include <string>

using namespace std;

class RationalNumber {
private:
    int numerator, denominator;
public:
    RationalNumber(int , int);

    RationalNumber(const RationalNumber&);

    int getNumerator() const;

    int getDenominator() const;

    RationalNumber reciprocal() const;

    RationalNumber add(const RationalNumber&);

    RationalNumber subtract(const RationalNumber&);

    RationalNumber multiply(const RationalNumber&);

    RationalNumber divide(const RationalNumber&);

    bool isLike(const RationalNumber&) const;

    string toString();

    void reduce();

    int gcd(int, int);
};


#endif //HW_01_RATIONALNUMBER_H

//
//  polinom.cpp
//  lab1
//
//  Created by MacBook Pro on 2/22/19.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#include "polinom.h"
#include "cmath"
TPolinom::TPolinom(number x,number y,number z)
{
    a = x;
    b = y;
    c = z;
}

number TPolinom::value(number x)
{
    return (a*x*x+b*x+c);
}


int TPolinom::roots (number* x)
{
    number determ = b*b - a*c*4;
    auto sqrt = determ.sqrt();
    x[0] = (b*(-1) + sqrt[0])/(a*2);
    x[1] = (b*(-1) + sqrt[1])/(a*2);
    return 2;
}

std::ostream& operator<<(std::ostream& os, TPolinom& p)
{
    os << "p(x) = " << p.a << "x^2 + " << p.b << "x + " << p.c;
    return os;
}

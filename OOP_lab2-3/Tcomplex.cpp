//
//  Tcomplex.cpp
//  OOP_lab2
//
//  Created by MacBook Pro on 3/3/19.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//




#include "Tcomplex.h"
#include "cmath"
#include <iostream>

    Tcomplex::Tcomplex(double r, double i)
    {
        Re = r;
        Im = i;
    }

    Tcomplex::Tcomplex()
    {
    };

std::vector<Tcomplex> Tcomplex::sqrt()
{
    
    double Mod = (std::sqrt(Im*Im+Re*Re));
    double Arg = atan2(Im,Re);
    double Phis[2];
    for (int i = 0; i < 2; ++i){
        Phis[i] = (Arg + 2 * 3.14159265358979323846 * i) / 2;
    }
    return {Tcomplex(cos(Phis[0]), sin(Phis[0])) * std::sqrt(Mod), Tcomplex(cos(Phis[1]), sin(Phis[1])) * std::sqrt(Mod)};
};
    
    // оператор присваивания
Tcomplex& Tcomplex::operator = (const Tcomplex &c)
    {
        Re = c.Re;
        Im = c.Im;
        
        return (*this);
    }


    // оператор +=
Tcomplex& Tcomplex::operator += (Tcomplex &c)
    {
        Re += c.Re;
        Im += c.Im;
        return *this;
    }
    
    // оператор сложения
    Tcomplex Tcomplex::operator + (const Tcomplex &c)
    {
        return Tcomplex (Re + c.Re, Im + c.Im);
    }

    
    // оператор вычитания
    Tcomplex Tcomplex::operator - (const Tcomplex &c)
    {
        return Tcomplex(Re - c.Re, Im - c.Im);
    }



    // оператор умножения
    Tcomplex Tcomplex::operator * (const Tcomplex &c)
    {
        return Tcomplex(Re * c.Re - Im * c.Im, Re * c.Im + Im * c.Re);
    }

    Tcomplex Tcomplex::operator * (const double & num){
        return (*this) * Tcomplex(num, 0);
    }
    // оператор деления
    Tcomplex Tcomplex::operator / (const Tcomplex &c)
    {
        Tcomplex temp;
        
        double r = c.Re * c.Re + c.Im * c.Im;
        temp.Re = (Re * c.Re + Im * c.Im) / r;
        temp.Im = (Im * c.Re - Re * c.Im) / r;
        
        return temp;
    }

    


// перегрузка оператора <<
std::ostream& operator<< (std::ostream &out, const Tcomplex &c)
{
    out << "(" << c.Re << ", " << c.Im << ")";
    return out;
}

// перегрузка оператора >>
std::istream& operator>> (std::istream &in, Tcomplex &c)
{
    in >> c.Re >> c.Im;
    return in;
}

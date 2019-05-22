//
//  Tcomplex.h
//  OOP_lab2
//
//  Created by MacBook Pro on 3/3/19.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#ifndef Tcomplex_h
#define Tcomplex_h

//include "number.h"
#include <iostream>
#include <vector>

class Tcomplex
{
   
    double Re,Im;

public:
    
    double RetRe(){return Re;}
    double RetIm(){return Im;}
 

    Tcomplex(double,double);
    Tcomplex ();
    
    std::vector<Tcomplex> sqrt();
    
    Tcomplex& operator = (const Tcomplex&);
    Tcomplex& operator += (Tcomplex&);
    Tcomplex operator + (const Tcomplex &);
    Tcomplex operator - (const Tcomplex &);
    Tcomplex operator * (const Tcomplex &);
    Tcomplex operator * (const double &);
    Tcomplex operator / (const Tcomplex &);
    
  
    friend std::ostream & operator<< (std::ostream &, const Tcomplex &);
    friend std::istream & operator>> (std::istream &, Tcomplex &);
    
   
    
};

#endif /* Tcomplex_h */

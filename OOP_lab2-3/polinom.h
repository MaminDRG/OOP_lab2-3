//
//  polinom.h
//  lab1
//
//  Created by MacBook Pro on 2/22/19.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#ifndef polinom_h
#define polinom_h

#include "number.h"
#include <iostream>

class TPolinom 
{
    number a,b,c;
public:
    TPolinom(number,number,number);
    number& operator = (Tcomplex &);
    number value(number);
    int roots(number*);
    
    friend std::ostream& operator<<(std::ostream&,TPolinom&);
    
};

#endif /* polinom_h */

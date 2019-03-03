//
//  application.cpp
//  lab1
//
//  Created by MacBook Pro on 2/22/19.
//  Copyright © 2019 MacBook Pro. All rights reserved.
//

#include <stdio.h>

#include "application.h"

#include <iostream>
#include "polinom.h"




int TApplication::run()
{
    int ch;
    number a;
    number b;
    number c;
    
    std::cout<<"Input data"<<std::endl;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << std::endl;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << std::endl;
    std::cout << "c = ";
    std::cin >> c;
    std::cout << std::endl;
    
    while (true)
    {
        std::cout << std::endl;
        std::cout<<"1 - input data"<<std::endl;
        std::cout<<"2 - roots"<<std::endl;
        std::cout<<"3 - value"<<std::endl;
        std::cout<<"4 - output"<<std::endl;
        std::cout<<"0 - exit"<<std::endl;
        std::cout<<"> ";
        std::cin>>ch;
        switch (ch)
        {
            case 1:
            {
                std::cout << "a = ";
                std::cin >> a;
                std::cout << std::endl;
                std::cout << "b = ";
                std::cin >> b;
                std::cout << std::endl;
                std::cout << "c = ";
                std::cin >> c;
                std::cout << std::endl;
                break;
            }
            
            case 2:
            {
                TPolinom p(a,b,c);
                number* rootsMas = new number [2];
                int tempsize = p.roots(rootsMas);
                if (tempsize == 0) std::cout << "There are no roots" << std::endl;
                else
                {
                    std::cout << "Number of roots is : "<< tempsize << std::endl;
                for (int i = 0; i <= tempsize - 1; i++)
                {
                    std::cout << rootsMas[i] << " ";
                }
                    
                }
                std::cout << std::endl;
                break;
            }
                
            case 3:
            {
                TPolinom p(a,b,c);
                number x;
                std::cout << "x = ";
                std::cin >> x;
                std::cout<<std::endl<<"Value = " << p.value(x)<<std::endl;
                break;

            }
            
            case 4:
            {
                TPolinom p(a,b,c);
               std::cout<<p<<std::endl;
                break;

            }
                            default: break;
        }
        if (ch == 0) break;
    }
    
    return 0;
    
}


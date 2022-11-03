//
// Created by Kareem Magdy on 17/06/2022.
//
#include <iostream>
int main(){
    short int p, q, r;
    std::cin >> p >> q >> r ;

    if(p + q <= p + r && p + q <= q + r )
        std::cout << p + q ;
    else if(p + r <= p + q && p + r <= q + r)
        std::cout<< p + r ;
    else
        std::cout << q + r ;
}

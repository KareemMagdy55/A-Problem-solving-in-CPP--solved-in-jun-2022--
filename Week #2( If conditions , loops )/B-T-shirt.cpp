//
// Created by Kareem Magdy on 15/06/2022.
//
#include <iostream>
int main(){
    double a, b, c, x ;
    std::cin >> a >> b >> c >> x;
    std::cout.precision(12);
    if ( x <= a)
        std::cout << std::fixed<< 1.0 ;
    else if (b < x)
       std::cout << std::fixed << 0.0 ;
    else
        std::cout <<std::fixed <<  c / (b-a);
}
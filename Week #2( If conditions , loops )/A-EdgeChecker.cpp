//
// Created by Kareem Magdy on 15/06/2022.
//
#include <iostream>
int main(){
    short a, b;
    std::cin >> a >> b ;
    // EX. 1 & 2 , 2 & 3 || for special case (1 & 10) >> 1 + 10 = 11
    if (b - a == 1 || b + a == 11)
        std::cout << "Yes";
    else std::cout << "No";
}

//
// Created by Kareem Magdy on 09/06/2022.
//
#include <iostream>
#include <cmath>

int main(){
    int h;

    std::cin >> h ;

    std::cout << std::fixed << sqrt(h) * sqrt(12800000 +h) ;

    return 0;
}
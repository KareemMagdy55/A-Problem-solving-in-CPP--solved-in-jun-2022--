//
// Created by Kareem Magdy on 17/06/2022.
//
#include <iostream>
int main(){
    int r, d, x;
    std::cin >> r >>d >> x ;
    for (int i = 0; i < 10; ++i) {
        x = r * x - d;
        std::cout << x <<'\n';
    }
}

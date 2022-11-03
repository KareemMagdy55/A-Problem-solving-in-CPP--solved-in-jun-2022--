//
// Created by Kareem Magdy on 18/06/2022.
//

#include <iostream>
int main(){
    short int a, b;
    std::cin >> a >> b ;
    if (a+b >= a - b && a + b >= a * b)
        std::cout << a + b ;
    else if (a * b >= a-b && a * b >= a + b)
        std::cout << a * b;
    else
        std::cout << a - b ;
}
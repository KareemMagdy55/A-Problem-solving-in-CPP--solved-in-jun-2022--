//
// Created by Kareem Magdy on 16/06/2022.
//
#include <iostream>

int main(){
    int_fast64_t n ;
    std::cin >> n ;
    std::cout << (n <= 2147483647 && n >= -2147483648 ? "Yes" : "No");
}

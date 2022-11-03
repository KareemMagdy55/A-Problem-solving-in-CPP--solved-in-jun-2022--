//
// Created by Kareem Magdy on 26/06/2022.
//

#include <iostream>
int main(){
    int sum = 0 ;
    std::string  x ;
    std::cin >> x ;
    for (int n : x) { // implicit casting from char to int
        sum += n - 48; // Get the number by subtract 48 from its ASCII code
    }
    std::cout << (std::stoi(x) % sum == 0 ? "Yes" : "No");
}
// x is harshad number if it is divisible by f(x)
// f(x) is sum of digits of x
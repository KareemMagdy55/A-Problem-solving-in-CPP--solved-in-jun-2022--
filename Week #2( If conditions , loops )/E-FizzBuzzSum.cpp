//
// Created by Kareem Magdy on 16/06/2022.
//
#include <iostream>
int main(){
    int n;
    int_fast64_t sum = 0; // same as long long
    std::cin >> n ;
    n ++ ; // to include the number itself into the itration stage >> if n = 15 + 1 >> 15, 14, 13,...... and so on
    while (n--) {
        if (n % 3 != 0 && n % 5 != 0 )
           sum += n;
    }
    std::cout << sum;
}
//
// Created by Kareem Magdy on 22/06/2022.
//
#include <iostream>
int main() {
    short  d , sum = 0 ;
    int n, temp ;
    std::cin >> d >> n;
    temp = n ;
    while(1) {
        while (temp % 100 == 0 ) {
            sum++;
            temp /= 100;
        }
        if (sum < d) {
            n *= 10;
            temp = n;
            sum = 0;
        }

        else if (sum > d) {
            n /= 10;
            temp = n;
            sum = 0;
        }
        else break;
    }

    std::cout << n;
}
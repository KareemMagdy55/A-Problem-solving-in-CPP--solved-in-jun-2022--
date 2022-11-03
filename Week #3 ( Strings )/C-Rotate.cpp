//
// Created by Kareem Magdy on 06/07/2022.
//

#include <iostream>
int main() {
    int a[3], sum = 0, counter = 0;
    std::cin >> sum;

    for (int i = 1; i <= 100; i *= 10) {
        a[counter] = sum / i % 10;
        counter++;
    }
    sum = 0 ;
    for (int& i : a)
        sum += i * 111 ;

    std::cout << sum ;
}
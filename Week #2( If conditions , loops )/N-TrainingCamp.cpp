//
// Created by Kareem Magdy on 19/06/2022.
//

#include <iostream>
int main(){
    int n;
    int_fast64_t totalPower = 1;
    std::cin >> n ;
    n ++ ;
    while (n-- && n != 0)
        totalPower = (totalPower * n) % 1000000007  ;
    std::cout << totalPower  ;
}
// n times excrsice
// power = 1 >>> power = i time * power
// answer % 10 ^ 9 + 7
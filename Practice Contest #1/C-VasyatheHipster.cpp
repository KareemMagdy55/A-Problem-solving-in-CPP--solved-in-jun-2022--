//
// Created by Kareem Magdy on 03/07/2022.
//

#include <iostream>
int main(){
    short a, b, sameDaySocks = 0;
    std::cin >> a >> b ;

    while (a > 0 && b > 0 ){
        a -- ;
        b -- ;
        sameDaySocks ++ ;
    }

    std::cout << sameDaySocks << ' ' << std::max(a, b) / 2;
}
// a red , b blue
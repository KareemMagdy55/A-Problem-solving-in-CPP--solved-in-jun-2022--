//
// Created by Kareem Magdy on 19/06/2022.
//
#include <iostream>
int main(){
    short n;
    std::cin >> n ;

    std::cout << (n < 15 ? n * 800 : n * 800 -  200 *( n/15 ) );
//    if (n < 15 )
//        std::cout << n * 800;
//    else
//        std::cout << n * 800 -  200 *( n/15 )  ;
}
// any meal >>> 800 yen
// 15 or more meal >>>> 800 * 15 - 200 * n /15
// x yen paid , y
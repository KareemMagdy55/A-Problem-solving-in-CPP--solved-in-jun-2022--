//
// Created by Kareem Magdy on 15/06/2022.
//
#include <iostream>
int main(){
    int x = 0 ;
    std::string s ;

    std::cin >> s ;

    for (char &c: s) {
        if (c == '+') x++ ;
        else x-- ;
    }
    std::cout << x;

}


//
// Created by Kareem Magdy on 18/06/2022.
//
#include<iostream>
int main(){
    short n, a, b;
    std::cin >> n >> a >> b ;

    std::cout << ( n * a > b  ? b : n * a );
}
//
// Created by Kareem Magdy on 03/07/2022.
//

#include <iostream>
int main(){
    int n;
    std::cin >> n ;

    for (int i = n; i > 0; --i)
        if ( n / i > 2) {
            std::cout << i;
            exit(0);
        }

    std::cout << 0 ;
}
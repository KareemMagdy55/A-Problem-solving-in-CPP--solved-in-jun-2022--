//
// Created by Kareem Magdy on 01/07/2022.
//

#include <iostream>
int main(){
    int n ;
    std::cin >> n ;

    int a[n];
    for (int& i:a) {
        std::cin >> i ;
        if ( i % 2 == 0 && !( i % 3 == 0 || i % 5 == 0)) {
            std::cout << "DENIED";
            exit(0);
        }
    }
    std::cout << "APPROVED";

}
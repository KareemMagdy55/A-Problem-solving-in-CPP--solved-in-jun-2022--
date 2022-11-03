//
// Created by Kareem Magdy on 01/07/2022.
//
#include <iostream>

int main (){
    int n, k, m, sum = 0;
    std::cin >> n >> k >> m ;

    int a[n - 1];

    for (int& i:a) {
        std::cin >> i;
        sum += i ;
    }
    if (  m * n - sum < 0 )
        std::cout << 0 ;

    else if ( m * n - sum <= k && m * n - sum >= 0 )
        std::cout <<  m * n - sum;

    else std::cout << -1 ;


}

// exam in each sub >> 0 < score <= k
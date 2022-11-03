//
// Created by Kareem Magdy on 30/06/2022.
//
#include <iostream>
int main(){
    int n, k, sum = 0 ;
    std::cin >> n >> k ;
    int h [n] ;

    for(int& i : h) std::cin >> i ;

    for(int& i : h)
        if (i >= k)
            sum ++ ;

    std::cout << sum ;
}
// n friends
// k cm to ride eoller coster
//


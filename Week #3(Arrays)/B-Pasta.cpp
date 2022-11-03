//
// Created by Kareem Magdy on 28/06/2022.
//

#include <iostream>
int main(){
    int n, m, plan = 0;
    std::cin >> n >> m  ;
    int a[n], b[m];

    for (int &i: a) std::cin >> i;
    for (int &i: b) std::cin >> i;

    for ( int& i : b)
        for (int& j : a)
            if (j == i) {
                plan ++;
                j = 0 ;
                break;
            }

    std::cout << (m == plan ? "Yes" : "No");
}
// n noodles in pasta
// length of i-th noodle is Ai
// m days plan
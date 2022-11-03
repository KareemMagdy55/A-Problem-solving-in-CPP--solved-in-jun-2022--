//
// Created by Kareem Magdy on 01/07/2022.
//

#include <iostream>
int main(){
    int t, sum = 0;
    int a[3];
    std::cin >> t ;
    while (t--) {
        for (int &i: a)
            std::cin >> i;

        if (a[0] + a[1] + a[2] >= 2)
            sum += 1;
    }

    std::cout << sum ;
}
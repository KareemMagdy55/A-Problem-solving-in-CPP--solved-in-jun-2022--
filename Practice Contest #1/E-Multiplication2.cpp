//
// Created by Kareem Magdy on 04/07/2022.
//

#include<iostream>
#include <algorithm>
using namespace std ;
int main(){
    int n;
    cin >> n ;

    long double a[n], product = 1;
    for(long double & i : a)
        cin >> i;

    sort(a, a+n);

    if(a[0] == 0) product = 0 ;

    else {
        for(long double & i : a) {
            product *= i ;
            if (product > 1e18) {
                cout << -1;
                exit(0);
            }
        }
    }

    cout << fixed << (long long) product;

}
//
// Created by Kareem Magdy on 06/07/2022.
// 3 minutes of thinking and brainstorming
// 7 minutes of coding
// Done in 11 minutes

#include<iostream>

using namespace std;

int main(){
    short n, x;

    cin >> n >> x ;
    int a[n], sum = 0;

    for (int& i : a)
        cin >> i ;

    for (int i = 0 ; i < n ; ++i) {
        if (i % 2 == 0)
            a[i + 1]--;  // because the first element is 0-th in array
        sum += a[i] ;
    }

    cout << (sum > x ? "No" : "Yes");

}
// n products
// even products one yen discount otherwise same price
// with x can you buy all of this products ?
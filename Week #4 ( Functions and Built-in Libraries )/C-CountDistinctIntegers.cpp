//
// Created by Kareem Magdy on 16/07/2022.
//


#include<iostream>
#include <algorithm>

using namespace std;
int main(){
    int n, index = 0, counter = 1  ;
    cin >> n ;
    int a[n];

    for(auto& i : a) cin >> i ;
    sort(a, a+n);

    for (int i = 0; i < n; ++i) {
        if (a[index] != a[i]){
            index = i ;
            counter ++ ;
        }
    }
    cout << counter ;

}
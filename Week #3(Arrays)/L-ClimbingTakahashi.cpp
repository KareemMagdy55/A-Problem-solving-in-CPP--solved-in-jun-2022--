//
// Created by Kareem Magdy on 02/07/2022.
//
#include <iostream>

using namespace std;
int main(){
    int n , lastPlat;
    cin >> n ;

    int h[n];
    for(int& i : h) cin >> i ;

    lastPlat = h[0];
    for(int i = 1 ; i < n ; ++i) {
        if( h[i] > lastPlat)
            lastPlat = h[i];
        else break;
    }
    cout << lastPlat;

}

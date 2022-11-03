//
// Created by Kareem Magdy on 07/08/2022.
//

#include <iostream>

using namespace std;

int main(){
    int_fast64_t n;
    short  k , counter = 0;

    cin >> n >> k ;

    while (n / k){
        n = n/k;
        counter ++ ;
    }
    cout << ++ counter  ;


}
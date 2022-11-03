//
// Created by Kareem Magdy on 13/07/2022.
//

#include <iostream>

using namespace std;
int main(){
    short n;
    cin >> n ;

    cout << (n / 100 % 10 == n % 10 ? "Yes" : "No");
}
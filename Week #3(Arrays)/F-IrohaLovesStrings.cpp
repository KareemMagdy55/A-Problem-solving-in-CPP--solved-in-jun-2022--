//
// Created by Kareem Magdy on 30/06/2022.
//
#include <iostream>
#include <algorithm>
using namespace std;

int main (){
    short  n, l ;
    cin >> n  >> l ;
    string str[n];

    for (string& s:str) cin >> s ;

    sort(str, str + n);

    for (string& s:str) cout << s ;


}



//
// Created by Kareem Magdy on 08/07/2022.
//
#include <iostream>
using namespace std ;

int main(){
    string s, t ;
    cin >> s >> t;

    cout <<  (s == t.substr(0, s.size()) ? "Yes" : "No");
}

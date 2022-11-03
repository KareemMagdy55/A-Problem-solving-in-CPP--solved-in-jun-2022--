//
// Created by Kareem Magdy on 13/07/2022.
//

#include <iostream>

using namespace std;
int main(){
    short n = 0 ;
    string s, t;
    cin >> s >> t ;

    for (int i = 0; i < 3; ++i)
        n += (s[i] == t[i] ? 1 : 0);

    cout << n ;
}
// 3 chars represent forecast
//
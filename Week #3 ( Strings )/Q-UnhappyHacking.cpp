//
// Created by Kareem Magdy on 14/07/2022.
//

#include <iostream>

using namespace std;


int main(){
    string s, t ;
    cin >> s;


    for (char& ch : s) {
        if (ch == 'B' and t.size() != 0)
            t.pop_back();
        else if ( ch == '0' or ch == '1')
            t += ch;
    }
    cout << t;
}
//
// Created by Kareem Magdy on 06/07/2022.
//

#include <iostream>

using namespace std;
int main() {
    int l, r;
    string s;
    cin >> l >> r >> s;

    l--;
    r--;
    while (l <= r ){
        swap(s[r], s[l]);
        l++;
        r--;
    }
    cout << s ;
}
//
// Created by Kareem Magdy on 07/07/2022.
//
// solution based on editorial solution
//  https://atcoder.jp/contests/abc232/editorial/3150
#include <iostream>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;

    int k = (t[0]-s[0]+26) % 26;
    string s2 = s;
    for (int i = 0; i < s.size(); i++)
        s2[i] = ((s2[i] - 'a') + k) % 26 + 'a';

    cout << (s2 == t ? "Yes" : "No");
}
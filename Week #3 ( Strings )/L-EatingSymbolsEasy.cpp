//
// Created by Kareem Magdy on 13/07/2022.
//

#include <iostream>

using namespace std;
int main(){
    string s ;
    short counter = 0;

    cin >> s ;
    for (char ch:s)
        counter += (ch == '+' ? 1 : -1);

    cout << counter ;
}
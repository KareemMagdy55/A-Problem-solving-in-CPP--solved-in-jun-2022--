//
// Created by Kareem Magdy on 05/08/2022.
//
#include <iostream>

using namespace std;
int main(){
    short a, b;
    cin >> a >> b;

    string str1(b, a + '0');
    string str2(a, b + '0');

    cout << min(str1, str2);
}
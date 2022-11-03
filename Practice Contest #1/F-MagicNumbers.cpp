//
// Created by Kareem Magdy on 05/07/2022.
//
#include <iostream>
using namespace std;
int main() {
    string n;
    cin >> n;
    bool chk;

    for (int i = 0; i < n.length(); ++i) {
        if(n[i] == '1')
           chk = true;
        else if (n[i] == '4' && n[i-1] == '1' )
            chk = true;
        else if (n[i] == '4' && n[i-1] == '4' && n[i-2] == '1')
            chk = true;
        else{
            chk = false;
            break;
        }
    }

    cout << (chk ? "YES" : "NO");
}

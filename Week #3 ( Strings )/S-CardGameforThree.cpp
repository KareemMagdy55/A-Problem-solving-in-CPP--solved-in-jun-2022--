//
// Created by Kareem Magdy on 15/07/2022.
//

#include <iostream>
using namespace std;


int main() {

    string strS[3];
    string charS = "abc";

    cin >> strS[0] >> strS[1] >> strS[2];
    int i = 0 ;
    while (true) {
     if ( strS[i][0] == charS[i] and strS[i].size() == 1){
            cout << char(toupper(charS[i]));
            return 0;
     }
     else if (strS[i][0] != charS[i]) {
         strS[i].erase(strS[i].begin());
         i = charS.find(strS[i][0]);
     }
     else {
         strS[i].erase(strS[i].begin());
     }
    }
}
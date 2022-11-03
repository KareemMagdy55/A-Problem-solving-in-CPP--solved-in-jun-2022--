//
// Created by Kareem Magdy on 16/06/2022.
//
#include <iostream>

using namespace std;
int main(){
    int a, b, c, d ;
    std::cin >> a >>  b >> c >> d ;

    while(1){
        // Takashi's turn
        c -= b ;
        if (c <= 0) {
            cout << "Yes";
            break;
        }
        // Akoi's turn
        a -= d ;
        if (a <= 0) {
            cout << "No";
            break;
        }
    }

    }

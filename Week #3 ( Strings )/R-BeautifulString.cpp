//
// Created by Kareem Magdy on 15/07/2022.
//

#include <iostream>
using namespace std;

int main(){
    string w, s ="";
    short counter = 0;
    cin >> w;

    for(char& ch : w)
        if(s.find(ch) > s.size())
            s += ch ;

    for(char& ch1 : s) {
        counter = 0 ;
        for (char &ch2: w)
            if (ch1 == ch2) counter++;

        if ( counter % 2 != 0){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes" ;
}
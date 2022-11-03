//
// Created by Kareem Magdy on 16/07/2022.
//

#include<iostream>
using namespace std;
int main(){
    short t, n ;
    string str ;
    cin >> t ;
    while (t--){
        cin >> n ;
        str +=( n < 10 ?  "Thanks for helping Chef!\n" : "-1\n" );
    }
    cout << str ;
}
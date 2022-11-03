//
// Created by Kareem Magdy on 13/07/2022.
//

#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    long long k;
    string str ;
    cin >> k ;

    while(k > 0 ){
      str += (k % 2 == 0 ? '0' : '1');
      k /= 2;
    }
    reverse(str.begin(), str.end());
    for (auto ch:str) {
        cout << (ch  == '1' ? 2 : 0);
    }

}

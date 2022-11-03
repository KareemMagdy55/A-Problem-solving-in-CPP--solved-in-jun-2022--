//
// Created by Kareem Magdy on 08/07/2022.
//

#include <iostream>

using namespace std;
void solution(){
    string str ;
    cin >> str ;

    if (str.length() > 10 )
        cout << str[0] << str.size() - 2 << str[str.size() - 1] << '\n';
    else
        cout << str << '\n' ;

}
int main(){
    int t ;
    cin >> t ;
    while (t--) solution();
}
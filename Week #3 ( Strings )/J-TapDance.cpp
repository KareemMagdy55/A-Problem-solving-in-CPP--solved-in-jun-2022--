//
// Created by Kareem Magdy on 13/07/2022.
//

#include <iostream>
using namespace std;

bool contains(string& str, char& ch){
    for (char &ch1:str)
        if (ch1 == ch )
            return true;
    return false;
}
int main(){
    string s, t ="LUD", k = "RUD";

    cin >> s;
    for (int i = 0; i < s.size(); ++i)
        if (!contains(t, s[i]) && (i + 1) % 2 == 0){
            cout << "No";
            return 0;
        }
        else if (!contains(k, s[i]) && (i + 1) % 2 != 0){
            cout << "No";
            return 0;
        }

    cout << "Yes";

}
//
// Created by Kareem Magdy on 13/07/2022.
//

#include <iostream>

using namespace std;


int main() {
    int n;
    bool chk = true;
    string s;

    cin >> s;
    cin >> n;
    string book[n];

    for (auto &word: book) cin >> word;

    for (auto &word: book){
        for (auto &ch: word) {
            chk = true;
            if (s.find(ch) > s.length()) {
                chk = false;
                break;
            }
        }
        cout << (chk ? "Yes\n" : "No\n");
    }
}

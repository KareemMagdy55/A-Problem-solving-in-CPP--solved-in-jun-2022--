//
// Created by Kareem Magdy on 13/07/2022.
//


#include <iostream>

using namespace std;
int main(){
    string str ;

    std::cin >> str ;
    std::cout << (str.find('9') < str.length() ? "Yes" : "No");
}
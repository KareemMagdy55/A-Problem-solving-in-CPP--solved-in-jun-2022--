//
// Created by Kareem Magdy on 20/06/2022.
//

#include <iostream>
int main(){
    char a, b;
    std::cin >> a >> b ;             // D >>> 68
    std::cout << (a < b || a > b ? 'D':'H');  // H >>> 72
}

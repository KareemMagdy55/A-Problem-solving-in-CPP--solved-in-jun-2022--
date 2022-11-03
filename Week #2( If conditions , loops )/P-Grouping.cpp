//
// Created by Kareem Magdy on 20/06/2022.
//

#include <iostream>
int main(){
    short x, y;
    short arr[13]= {'A',0,'B',0,1,0,1,0,0,1,0,1,0};
    std::cin >> x >> y ;
    std::cout << (arr[x] == arr[y] ? "Yes":"No");
}




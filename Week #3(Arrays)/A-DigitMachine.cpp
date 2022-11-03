//
// Created by Kareem Magdy on 28/06/2022.
//

#include <iostream>
int main (){
    int array[10];
    for (int & i : array)
        std::cin >> i;
    std::cout << array[array[array[0]]];
}
// device with a button and screen show single digit
// k = number , when we press this number once we go to array[k]
// if screen shows 1 and i press the button we go to array[1]
// if screen shows 0 and i press the button we go to array[0]
//
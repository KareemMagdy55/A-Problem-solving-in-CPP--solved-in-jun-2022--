#include <iostream>
using namespace std ;

int main(){

    int coordinates[6];
    int counter = 0 ;

    for(int i = 0; i < 6; ++i) {
        cin >> coordinates[i];
    }

    for (int i = 0; i < 6; i+=2) {
        for (int j = 0; j < 6; j+=2) {
                if (coordinates[i] == coordinates[j]) counter ++;
            }
        if(counter == 1) cout << coordinates[i] <<' ';
        counter = 0 ;
    }

    for (int i = 1; i < 6; i+=2) {
        for (int j = 1; j < 6; j+=2) {
            if (coordinates[i] == coordinates[j]) counter ++;
        }
        if(counter == 1) cout << coordinates[i];
        counter = 0 ;
    }




    return 0;

}


//
// Created by Kareem Magdy on 30/06/2022.
//

#include <iostream>
int main(){
    int n, x,  sumAlcohol = 0;
    std::cin >> n >> x ;
    int a[n][2];

    for (int i = 0 ; i < n ; i++ )
        for (int j = 0; j < 2; ++j)
            std::cin >> a[i][j];

    for (int i = 0; i < n ; ++i) {
        sumAlcohol += (a[i][0] * a[i][1]);
        if (sumAlcohol > x * 100 ){
            std::cout << i + 1;
            exit(0);
        }
    }

    std::cout << -1 ;
}
// n glasses of liq
// i-th liq have vi millilitres and Pi percent by volume
// tak gets drunk if exceeeds x milliltres

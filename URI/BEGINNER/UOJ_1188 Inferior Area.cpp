#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    char t;
    double N[12][12];
    double soma = 0.0;

    cin >> t;

    for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                   cin >> N[i][j];
                   int temp = 11-i;
                   if(j>temp && j<11-temp){
                        soma += N[i][j];
                   }
            }
   }

   if(t == 'S')
         printf("%.1f\n", soma);
    else
         printf("%.1f\n", soma/30.0);
    return 0;
}







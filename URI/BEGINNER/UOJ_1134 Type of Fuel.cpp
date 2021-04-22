#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x,a=0,g=0,d=0;


    while(x!=4){
        while(1){
            cin>>x;
        switch (x) {
            case 1:
                a++;
            break;
            case 2:
                g++;
            break;
            case 3:
                d++;
            break;
            case 4:
                break;
            default:
                break;
        }
        break;

    }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", a, g, d);
    return 0;
}

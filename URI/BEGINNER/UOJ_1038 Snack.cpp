#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main (void)
{
    int x, y;

    while(cin>>x>>y)
    {
        switch (x) {
            case 1:
            cout<<"Total: R$ ";
            printf("%.2lf\n",y*4.00);
            break;
            case 2:
            cout<<"Total: R$ ";
            printf("%.2lf\n",y*4.50);
            break;

            case 3:
            cout<<"Total: R$ ";
            printf("%.2lf\n",y*5.00);
            break;

            case 4:
            cout<<"Total: R$ ";
            printf("%.2lf\n",y*2.00);
            break;

            case 5:
            cout<<"Total: R$ ";
            printf("%.2lf\n",y*1.50);
            break;

        }
    }
    return 0;
}


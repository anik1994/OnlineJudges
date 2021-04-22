#include<stdio.h>
#include<iostream>
using namespace std;

int main ()
{
    int n, c=0, r=0, s=0;
    double A, total;
    char ch;
    cin>>n;

    while(n--){
        cin >>A >>ch;
        switch (ch) {
            case 'C':
                c=c+A;
            break;
            case 'R':
                r=r+A;
            break;
            default:
                s=s+A;
            break;
        }
    }
    total=c+r+s;
    printf("Total: %.0lf cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", total, c, r,s);
    printf("Percentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n", (((double)c/total)*100.00), (((double)r/total)*100.00), (((double)s/total)*100.00));
    return 0;
}



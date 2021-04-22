#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))
#define PI acos(-1)
int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int x0,y0,x1,y1,cx,cy,r;
        scanf("%d %d %d %d %d %d %d", &x0, &y0, &x1, &y1, &cx, &cy, &r);

        cx -= x0;
        x1 -= x0;
        x0 -= x0;

        cy -= y0;
        y1 -= y0;
        y0 -= y0;

        if(r*5==x1 && x1*6==y1*10 && 2*cy==y1 && 20*cx==9*x1)
            printf("YES\n");
        else
            printf("NO\n");


    }

    //system("notepad.exe out.txt");
    return 0;
}

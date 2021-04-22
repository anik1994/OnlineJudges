#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int n;
    scanf("%d", &n);

    while(n--)
    {
        int e, f, c;
        scanf("%d %d %d", &e, &f, &c);
        int sum = e+f;
        int soda = 0;
        while(sum>=c)
        {
            soda += sum/c;
            sum = (sum/c)+(sum%c);
        }
        printf("%d\n",soda);
    }

    //system("notepad.exe out.txt");
    return 0;
}

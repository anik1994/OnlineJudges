#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        int res = (z*(x+(x-y)))/(x+y);

        if(res>0)
            printf("%d\n",res);
        else
           printf("0\n");
    }
    //system("notepad.exe out.txt");
    return 0;
}

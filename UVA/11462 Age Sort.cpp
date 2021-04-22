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

    int n, temp;
    multiset<int> ms;
    while(scanf("%d", &n) && n)
    {
        while(n--)
        {
            scanf("%d", &temp);
            ms.insert(temp);
        }
        multiset<int>::iterator it;
        for(it = ms.begin();it!=ms.end();it++)
        {
            printf("%d", *it);
            if(it!=(prev(ms.end())))
                printf(" ");
        }
        printf("\n");
        ms.clear();
    }

    //system("notepad.exe out.txt");
    return 0;
}

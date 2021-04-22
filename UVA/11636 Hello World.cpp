#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int n, caseCounter = 1;
    while(scanf("%d",&n)==1 && n>0)
    {
        printf("Case %d: %d\n", caseCounter, (int)ceil(log2(n)));
        caseCounter++;
    }

    //system("notepad.exe out.txt");
    return 0;
}

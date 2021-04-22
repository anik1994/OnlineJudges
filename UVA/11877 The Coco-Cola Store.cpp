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

    while(scanf("%d", &t) && t)
    {
        int counter = 0;
        while(t>2)
        {
            counter += t/3;
            t = (t/3)+(t%3);
        }
        if(t==2)
            counter++;
        printf("%d\n",counter);
    }


    //system("notepad.exe out.txt");
    return 0;
}

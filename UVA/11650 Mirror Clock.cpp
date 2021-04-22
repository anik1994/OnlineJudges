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
        int h, m, resH, resM;
        scanf("%d:%d", &h, &m);

        if(m ==0)
        {
            resH = 12-h;
            resM = m;

            if(!resH)
                resH = 12;
        }
        else
        {
            resH = 11-h;
            if(resH<=0)
                resH += 12;
            resM = 60-m;
        }
        printf("%02d:%02d\n",resH,resM);

    }

    //system("notepad.exe out.txt");
    return 0;
}

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
        int temp, side = 4;
        vector<int> vct;
        while(side--)
        {
            scanf("%d", &temp);
            // cout << temp << endl;
            vct.pb(temp);
        }
        sort(vct.begin(),vct.end());

        if(vct[0]==vct[1] && vct[1]==vct[2] && vct[2]==vct[3] && vct[3]==vct[1])
            printf("square\n");
        else if(vct[0]==vct[1] && vct[2]==vct[3])
            printf("rectangle\n");
        else if(vct[0]+vct[1]+vct[2]>vct[3])
            printf("quadrangle\n");
        else
            printf("banana\n");

        vct.clear();
    }

    //system("notepad.exe out.txt");
    return 0;
}

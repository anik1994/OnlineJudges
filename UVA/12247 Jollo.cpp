#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))

bool cmp(int a, int b)
{
    return a>b;
}

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int a,b,c,x,y;
    while(scanf("%d %d %d %d %d", &a, &b, &c, &x, &y)==5 && a && b && c && x && y)
    {
        vector<int> prince, princess;
        princess.pb(a);
        princess.pb(b);
        princess.pb(c);
        sort(princess.begin(), princess.end(), cmp);

        prince.pb(x);
        prince.pb(y);
        sort(prince.begin(),prince.end(), cmp);

        if(prince[1]>princess[0])
        {
            int temp = 1;
            while(temp==a || temp==b || temp==c || temp==x || temp==y)
                temp++;
            if(temp <53)
                printf("%d\n",temp);
            else
                printf("-1\n");
        }
            //printf("1\n");
        else if (prince[0]>princess[0])
        {
            if(prince[1]>princess[1])
            {
                int temp = princess[1]+1;
                while(temp==a || temp==b || temp==c || temp==x || temp==y)
                    temp++;
                if(temp <53)
                    printf("%d\n",temp);
                else
                    printf("-1\n");
            }
            else
            {
                int temp = princess[0]+1;
                while(temp==a || temp==b || temp==c || temp==x || temp==y)
                    temp++;
                if(temp <53)
                    printf("%d\n",temp);
                else
                    printf("-1\n");
            }

        }
        else if (prince[1]>princess[1])
        {
            int temp = princess[1]+1;
            while(temp==a || temp==b || temp==c || temp==x || temp==y)
                temp++;
            if(temp <53)
                printf("%d\n",temp);
            else
                printf("-1\n");
        }
        else
            printf("-1\n");

        prince.clear();
        princess.clear();
    }

    //system("notepad.exe out.txt");
    return 0;
}

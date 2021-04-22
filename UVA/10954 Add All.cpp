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
    multiset<int> ms;
    while(scanf("%d", &n)==1 && n)
    {
        int temp;
        while(n--)
        {
            scanf("%d", &temp);
            ms.insert(temp);
        }
        int sum = 0;

        while(!ms.empty())
        {
            multiset<int>::iterator it;
            it = ms.begin();
            if(next(it)!=ms.end())
            {
                temp = 0;
                temp += *it;
                ms.erase(it);
                it = ms.begin();
                temp += *it;
                ms.erase(it);
                sum += temp;
                ms.insert(temp);
            }
            else
            {
                printf("%d\n",sum);
                ms.erase(it);
            }
        }
        //ms.clear();
    }

    //system("notepad.exe out.txt");
    return 0;
}

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

    while(scanf("%d", &n)==1)
    {
        ms.insert(n);

        int len = ms.size();
        multiset<int> :: iterator it = ms.begin();
        int index = (int)(len/2);
        advance(it,index);

        if(len%2==1)
            printf("%d\n",*it);
        else
        {
            int temp = *it;
            it = prev(it);
            temp += *it;
            //cout << "temp : " << temp << endl;
            printf("%d\n",(int)(temp/2));
        }

    }
    //system("notepad.exe out.txt");
    return 0;
}

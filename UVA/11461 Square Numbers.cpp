#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int a, b, counter;

    while(scanf("%d %d", &a, &b), a||b)
    {
        counter = 0;
        for(int i=a; i<=b; i++)
        {
            int temp = (int)sqrt(i);
            if(temp*temp==i)
                counter++;
        }
        cout << counter << endl;
    }


    //system( "notepad.exe out.txt");
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int gen;
    while(scanf("%d", &gen) && gen)
    {
       ll prevMale, prevFemale, male = 0, female = 1;
       while(--gen)
       {
           prevFemale = female;
           prevMale = male;
           female += prevMale;
           male += (prevFemale-prevMale);
       }
       //cout << "Male: " << male << " Female: " << female << endl;
       printf("%lld\n", male+female);
    }

    //system("notepad.exe out.txt");
    return 0;
}

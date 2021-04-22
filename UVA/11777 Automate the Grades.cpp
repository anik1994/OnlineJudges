#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");
    int t, counter = 1;
    scanf("%d", &t);
    while(t--)
    {
        double t1, t2, fin, atn, ct1, ct2, ct3;
        scanf("%lf %lf %lf %lf %lf %lf %lf", &t1, &t2, &fin, &atn, &ct1, &ct2, &ct3);

        double ctRes;

        if(ct1>ct2)
        {
            if(ct2>ct3)
                ctRes = (ct1+ct2)/2.0;
            else
                ctRes = (ct1+ct3)/2.0;

        }
        else
        {
            if(ct3>ct1)
                ctRes = (ct2+ct3)/2.0;
            else
                ctRes = (ct1+ct2)/2.0;
        }

        /*if(ct1<ct2 && ct1<ct3)
            ctRes = (ct2+ct3)/2.0;
        else if(ct2<ct1 && ct2<ct3)
            ctRes = (ct1+ct3)/2.0;
        else
            ctRes = (ct1+ct2)/2.0;*/

        ctRes = ctRes+t1+t2+fin+atn;

        if(ctRes>=90)
            printf("Case %d: A\n",counter++);
        else if(ctRes>=80 && ctRes<90)
            printf("Case %d: B\n",counter++);
        else if(ctRes>=70 && ctRes<80)
            printf("Case %d: C\n",counter++);
        else if(ctRes>=60 && ctRes<70)
            printf("Case %d: D\n",counter++);
        else
            printf("Case %d: F\n",counter++);
    }
    //system("notepad.exe out.txt");
    return 0;
}

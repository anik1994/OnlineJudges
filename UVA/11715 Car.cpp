#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int n, caseCounter = 0;
    double u, v, t, s, a;

    while(scanf("%d", &n)==1 && n)
    {
        caseCounter++;
        switch(n)
        {
        case 1:
            scanf("%lf %lf %lf", &u, &v, &t);
            a = (v-u)/t;
            s = (u*t)+(0.5*a*t*t);
            printf("Case %d: %.03f %.03f\n", caseCounter, s, a);
            break;
        case 2:
            scanf("%lf %lf %lf", &u, &v, &a);
            t = (v-u)/a;
            s = (u*t)+(0.5*a*t*t);
            printf("Case %d: %.03f %.03f\n", caseCounter, s, t);
            break;
        case 3:
            scanf("%lf %lf %lf", &u, &a, &s);
            v = sqrt(u*u+2*a*s);
            t = (v-u)/a;
            printf("Case %d: %.03f %.03f\n", caseCounter, v, t);
            break;
        default:
            scanf("%lf %lf %lf", &v, &a, &s);
            u = sqrt(v*v-2*a*s);
            t = (v-u)/a;
            printf("Case %d: %.03f %.03f\n", caseCounter, u, t);
            break;
        }

    }

    //system("notepad.exe out.txt");
    return 0;
}

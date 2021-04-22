#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define PI acos(-1.0)

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int l, w, h, theta;

    while(scanf("%d %d %d %d", &l, &w, &h, &theta)==4)
    {
        double base = tan(theta*(PI/180))*l;
        double triVol;

        if(base>h)
        {
            base = tan((90-theta)*(PI/180))*h;
            triVol = 0.5*base*h*w;
            printf("%0.3f mL\n",triVol);
        }
        else
        {
            double totalVol = l*w*h*1.0;
            triVol = 0.5*base*l*w;
            printf("%0.3f mL\n",totalVol-triVol);
        }

    }
    //system("notepad.exe out.txt");
    return 0;
}

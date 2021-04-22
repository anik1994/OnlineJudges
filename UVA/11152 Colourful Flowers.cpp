#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define PI acos(-1)

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int a, b, c;
    while(cin >> a >> b >> c)
    {
        double s = (a+b+c)/(double)2;
        double areaT = sqrt(s*(s-a)*(s-b)*(s-c));
        double outerCircleRadius = (a*b*c)/(double)(4*areaT);
        double outerCircleArea = PI * outerCircleRadius * outerCircleRadius;
        double innerCircleRadius = areaT/(double)s;
        double innerCircleArea = PI * innerCircleRadius * innerCircleRadius;

        cout << fixed << setprecision(4) << (outerCircleArea-areaT) << " " << (areaT-innerCircleArea) << " " << innerCircleArea << endl;

    }
    //system( "notepad.exe out.txt");
    return 0;
}

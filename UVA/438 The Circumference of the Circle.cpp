#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))
#define PI 3.141592653589793


int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    double x1,x2,x3,y1,y2,y3;

    while(scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3)!=EOF)
    {
        //scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
        //cout <<"X1: "<< x1 << " Y1: " << y1 << " X2: " << x2 << " Y2: " << y2 << " X3: " << x3 << " Y3: " << y3 << endl;

        double a1, a2, b1, b2, c1, c2, h, k, r;
        a1 = (x2-x1);
        b1 = (y2-y1);
        c1 = ((x1*x1+y1*y1)-(x2*x2+y2*y2))/2.0;

        a2 = (x3-x2);
        b2 = (y3-y2);
        c2 = ((x2*x2+y2*y2)-(x3*x3+y3*y3))/2.0;

        //cout << "A1: " << a1 << " B1: " << b1 << " C1: " << c1 << endl;
        //cout << "A2: " << a2 << " B2: " << b2 << " C2: " << c2 << endl;

        h = (b1*c2 - b2*c1) / (a1*b2 - a2*b1);
        k = (c1*a2 - c2*a1) / (a1*b2 - a2*b1);

        r = sqrt((x1-h)*(x1-h)+(y1-k)*(y1-k));
        //cout << "r: " << r << endl;
        //printf("%.2f\n",(2*3.1416*r));
        cout << fixed << setprecision(2) << 2*PI*r << endl;
    }

    //system("notepad.exe out.txt");
    return 0;
}

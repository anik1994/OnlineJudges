#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


int main()
{
    double vol , dia;
    while(cin >> vol >> dia)
    {
        double height = (4*vol)/(dia*dia*3.14);
        double area = vol / height;

        printf("ALTURA = %.2f\n", height);
        printf("AREA = %.2f\n", area);
    }
    return 0;
}


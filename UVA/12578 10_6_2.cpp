#include<bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;

int main(void){
    int t;

    cin>>t;
    for(int i=1;i<=t;i++){
        double l;
        cin>>l;
        double y = (PI*(l/5)*(l/5));
        double x = (l*((3*l)/5))-y;
        printf("%.2lf %.2lf\n",y,x);
    }
 return 0;
}


#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<' '<<i*i<<' '<<i*i*i<<endl<<i<<' '<<(i*i)+1<<' '<<(i*i*i)+1<<endl;

    }
    return 0;
}

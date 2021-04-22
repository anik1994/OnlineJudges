#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x, y;
    long long sum=0;

    while(cin>>x>>y)
    {
            if(x<y){
                for(int i=x;i<=y;i++){
                    if(i%13!=0){
                        sum=sum+i;
                    }
                }
                cout<<sum<<endl;
            }
            else{
                for(int i=y;i<=x;i++){
                    if(i%13!=0){
                        sum=sum+i;
                    }
                }
                cout<<sum<<endl;
            }

    }

    return 0;
}


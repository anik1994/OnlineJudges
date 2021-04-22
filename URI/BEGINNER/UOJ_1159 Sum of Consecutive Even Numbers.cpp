#include<stdio.h>>
#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    int sum=0, c=0;
    cin>>t;

    while(t!=0){

        for(int i=t;;i++){
            if(i%2==0){
                sum=sum+i;
                c++;
            }
            if(c==5) break;
        }
    printf("%d\n",sum);
    sum=0;
    c=0;
    cin>>t;
    }


}

#include<stdio.h>>
#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;
    int sum=0;
    cin>>t;

    while(t--){
        int x, y,c=0;
        cin>>x>>y;
        for(int i=x;;i++){
            if(i%2!=0){sum=sum+i;
            c++;}
            if(c==y) break;
        }
    printf("%d\n", sum);
    sum=0;
    }


}

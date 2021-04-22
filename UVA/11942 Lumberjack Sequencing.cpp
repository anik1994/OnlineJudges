#include<bits/stdc++.h>
int ara[11];
using namespace std;


int main(void){
    int t;
    cin>>t;
    printf("Lumberjacks:\n");
    while(t--){
            int upper=1,lower=1;
        for(int i=0;i<10;i++){
            scanf("%d",&ara[i]);
        }
        for(int i=0;i<9;i++){
            if(ara[i]<ara[i+1]) continue;
            else{
                upper=0;
                break;
            }
        }
        for(int i=0;i<9;i++){
            if(ara[i]>ara[i+1]) continue;
            else{
                lower=0;
                break;
            }
        }
        if(upper==1 || lower==1) printf("Ordered\n");
        else printf("Unordered\n");
    }
 return 0;
}

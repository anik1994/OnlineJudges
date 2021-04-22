#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc,f,size,nofanimal,eco;
    cin>>tc;
    while(tc--){
        cin>>f;
        int sum=0;
        while(f--){
            cin>>size>>nofanimal>>eco;
            int result = (size*eco);
            sum+=result;
        }
        cout<<sum;
        cout<<"\n";
        sum=0;
    }
    return 0;
}

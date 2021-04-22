#include<bits/stdc++.h>
using namespace std;
int main(){
    int amp, fre,tc;
    cin>>tc;

    while(tc--){
            cin >> amp  >>fre;
        for(int i=1;i<=fre;i++){
            for(int j=1;j<=amp;j++){
                for(int k=1;k<=j;k++){
                    cout<<j;
                }
            cout<<"\n";
            }
            for(int j=amp-1;j>=1;j--){
                for(int k=1;k<=j;k++){
                    cout<<j;
                }
                cout<<"\n";
            }
            if(i<fre) cout<<"\n";
        }
        if (tc>=1) cout<<"\n";
    }
    return 0;
}

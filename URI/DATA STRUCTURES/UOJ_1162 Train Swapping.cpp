#include<bits/stdc++.h>
int arr[1000];
using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        int n,c,d,swap,counter=0;
        cin>>n;
        for (c = 0; c < n; c++)
            scanf("%d", &arr[c]);

    for (c = 0 ; c < ( n - 1 ); c++){
        for (d = 0 ; d < n - c - 1; d++){
            if (arr[d] > arr[d+1]){
                swap       = arr[d];
                arr[d]   = arr[d+1];
                arr[d+1] = swap;
                counter++;
            }
        }
    }
    printf("Optimal train swapping takes %d swaps.\n",counter);
    arr[1000]=0;
    }
 return 0;
}

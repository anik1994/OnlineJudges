#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int x, i, c=0;

    while(cin>>x){
       if(x%2==0){
            for(i=x+1;;i++){
            if(i%2==0) continue;
            else {
            printf("%d\n", i);
            c++;
            }
            if(c==6) break;
        }

       }

       else{
        printf("%d\n", x);
        c++;

        for(i=x+2;;i+=2){
            printf("%d\n", i);
            c++;
            if(c==6) break;

        }
      }
      c=0;
    }
    return 0;
}


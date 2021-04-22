#include<stdio.h>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main(void)
{
    char ch1[100], ch2[100], ch3[100], a[]="hematofago";

    while(gets(ch1)){
        if(ch1[0]=='v'){
                gets(ch2);
            if(ch2[0]=='a'){
                gets(ch3);
                if(ch3[0]=='c') printf("aguia\n");
                else printf("pomba\n");
            }
            else{
                gets(ch3);
                if(ch3[0]=='o') printf("homem\n");
                else printf("vaca\n");
            }
        }
        else{
            gets(ch2);
            if(ch2[0]=='i'){
                gets(ch3);
                if(strcmp(ch3,a)==0) printf("pulga\n");
                else printf("lagarta\n");
            }
            else{
                gets(ch3);
                if(ch3[0]=='h') printf("sanguessuga\n");
                else printf("minhoca\n");
            }
        }
    }
    return 0;
}

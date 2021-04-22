#include<stdio.h>
#include<iostream>
int abs(int,int);
using namespace std;
int main ()
{
    int A, B, C, D, E;
    cin>>A>>B>>C;
    D = ((A+B+ abs(A,B) ) /2);
    E = ((D+C+ abs(D,C))/2);
    cout<<E<<" eh o maior"<<endl;
}

int abs (int a, int b)
{
    if((a-b)>= 1) return a-b;
    else return (a-b)*(-1);
}

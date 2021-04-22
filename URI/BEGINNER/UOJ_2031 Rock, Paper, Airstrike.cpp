#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int result(string p1, string p2)
{
    if(p1 == "ataque" && p2 == "pedra" || p2 == "ataque" && p1 == "pedra")
    {
        if(p1 == "ataque" && p2 == "pedra")
            return 1;
        else
            return 2;
    }
    else if(p1 == "pedra" && p2 == "papel" || p2 == "pedra" && p1 == "papel")
    {
        if(p1 == "pedra" && p2 == "papel")
            return 1;
        else
            return 2;
    }
    else if(p1 == "papel" && p2 == "ataque" || p2 == "papel" && p1 == "ataque")
    {
        if(p1 == "papel" && p2 == "ataque")
            return 2;
        else
            return 1;
    }
    else if(p1 == "papel" && p2 == "papel")
    {
        return 3;
    }
    else if(p1 == "pedra" && p2 == "pedra")
    {
        return 4;
    }
    else
        return 5;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str1 , str2;
        cin >> str1 >> str2;

        int res = result(str1, str2);

        if(res == 1)
        {
            printf("Jogador 1 venceu\n"); //if Player 1 has won the game
        }
        else if(res == 2)
        {
            printf("Jogador 2 venceu\n"); //if Player 2 has won the game
        }
        else if(res == 3)
        {
            printf("Ambos venceram\n"); //if the both have won the game
        }
        else if(res == 4)
        {
            printf("Sem ganhador\n"); //if there is no winner
        }
        else
            printf("Aniquilacao mutua\n"); //if Mutual Annihilation occurs

    }
    return 0;
}



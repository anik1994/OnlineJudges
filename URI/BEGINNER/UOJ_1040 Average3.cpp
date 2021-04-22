#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main (void)
{
    double A, B, C, D, MEDIA;

    while(cin>>A>>B>>C>>D)
    {
         MEDIA =((A*2.0)+(B*3.0)+(C*4.0)+(D*1.0))/(2.0+3.0+4.0+1.0);
         if(MEDIA>=7.0) printf("Media: %.1lf\nAluno aprovado.\n",MEDIA);
         else if(MEDIA<5.0) printf("Media: %.1lf\nAluno reprovado.\n",MEDIA);
         else /*(MEDIA<=5.0 && MEDIA<=6.9)*/{
            double E, F;
            printf("Media: %.1lf\nAluno em exame.\n",MEDIA);
            cin>>E;
            F= (MEDIA+E)/2.0;
            printf("Nota do exame: %.1lf\n",E);
            if(F>=5.00) printf("Aluno aprovado.\nMedia final: %.1lf\n",F);
            else if (F<=4.9) printf("Aluno reprovado.\nMedia final: %.1lf\n",F);
         }
    }


    return 0;
}

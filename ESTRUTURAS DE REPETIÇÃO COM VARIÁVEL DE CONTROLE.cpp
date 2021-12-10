#include<stdio.h>
#include<stdio.h>
int main (void)
{
float nota1, nota2, nota3, nota4, nota5, media;
int cont, aluno=0;

for (cont=1;cont<=3;cont++){
aluno++;

printf("\n");
printf("\n");
printf("Aluno %d\n",aluno);

printf("\n");
printf("\n");

printf (" nota 1 = ");
scanf ("%f", &nota1);

printf (" nota 2 = ");
scanf ("%f", &nota2);

printf (" nota 3 = ");
scanf ("%f", &nota3);

printf (" nota 4 = ");
scanf ("%f", &nota4);

printf (" nota 5 = ");
scanf ("%f", &nota5);

media = (nota1+nota2+nota3+nota4+nota5)/5;
printf ("media = %f",media);

if (media>=5) printf (" , Aluno Aprovado");

else printf (" , Aluno Reprovado");
}

}

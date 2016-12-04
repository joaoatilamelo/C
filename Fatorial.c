#include <stdio.h>
#include <stdlib.h>
  
//Calcula qualquer fatorial
// Joao Atila Melo
  
int main ()
{

    int num =1;
    int fator;
    printf("Digite o numero que voce quer o fatorial:\n");
    scanf("%i", &fator);

    for (fator=fator ; fator >=1; --fator) {

        num *= fator;

    }

    printf("%i\n",num);


return 0;
}

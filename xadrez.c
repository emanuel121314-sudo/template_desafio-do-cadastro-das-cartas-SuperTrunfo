#include <stdio.h>



int main() {
  int numero;
  int cima;
  int casas, i;
  char sentido ;
  char direcao;
  int i2, casas2;


  // MOVIMENTOS DA TORRE// 
 printf("Movimento da torre\n");
 do 
 { printf("Digite quantas casas a torre deve ir para cima, no maximo 3 casas! \n");
   scanf("%d" , &cima);

   if (cima == 1)
   { printf("Uma casa para cima\n");
   
   } else if (cima == 2)
   { printf(" Duas casas para cima\n");}
   else if (cima == 3)
   { printf(" três casas para cima\n");
   }
   
} while (cima < 1 || cima > 3);
 
// Movimento da rainha //
printf("Movimento da rainha\n");
printf("Digite quantas casas a rainha deve se movimentar\n");
scanf("%d" , &casas);
printf("Digite em qual sentido, c para cima, b para baixo, e para esquerda, d para direita\n");
scanf(" %c" , &sentido);
 

for ( i = 1; i <= casas; i++)
{ 
if(sentido == 'c')
  { 
   printf("casas %d, cima\n" , i);
  } 
  else if (sentido == 'b')
  { 
   printf ("casas %d, baixo\n" ,i);
  } 
   else if (sentido == 'e')
   {
    printf ("casas %d , esquerda\n", i);
  }

else if (sentido == 'd')
{ 
 printf ("casas %d , direita\n", i );
}
 }

// movimento do bispo//

printf("Movimento do bispo\n");
printf("Digite o número de casas:\n");
scanf("%d" , &casas2);

printf("Digite a diagonal (d = direita cima, e = esquerda cima)\n");
scanf(" %c" , &direcao );

for ( i2 =1 ; i2<=casas2 ; i2++)
{ 
  if (direcao == 'd'){
    printf("casa %d :cima, direita\n" , i2);
  } 
  else if (direcao == 'e'){
    printf("casa %d:cima esquerda\n" , i2);
  }
}
  












return 0;
} 

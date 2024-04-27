 /*Crie uma matriz 10x10 e a preencha com números digitados pelo usuário. Depois que essa matriz for criada e preenchida com os números do usuário, deve aparecer para o usuário um menu em que ele pode: 


1) Imprimir na tela os valores em forma de matriz; Feito 
2) Procurar e imprimir o maior número digitado em cada linha da matriz.  feito
3) Calcular e imprimir as somas dos elementos de cada uma das colunas. feito se fazer duas vezes, a soma fica= soma inicial + soma de novo
4) Calcular e imprimir a soma de todos os elementos da matriz. feito
5) Armazenar e imprimir um vetor de 10 posições com os elementos da diagonal da matriz (a diagonal é dada quando linha=coluna)  feito
6) Calcular e imprimir quantos elementos digitados são negativos. contador não funciona
7) Encerrar o programa. não consigo encerrar o programa

Você deve fazer um programa visualmente agradável: use as bibliotecas para a língua portuguesa, de cores, limpar a tela, etc. Você deve entregar o arquivo.c e o arquivo executável no Moodle. Você pode conseguir de 0.5 até 1 ponto nesse trabalho extra!

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 2

int main()
{

setlocale(LC_ALL, "portuguese");
system("color 7d");

  int matriz[tam][tam],i, j,opcao,fim,diagonal[i],negativo=0;
  float maior,menor,n[tam],soma_total;


  printf ("\nDigite valor para os elementos da matriz\n\n");

  for ( i=0; i<tam; i++ )
    for ( j=0; j<tam; j++ )
    {
      printf ("\nElemento[%d][%d] = ", i, j);
      scanf ("%d", &matriz[ i ][ j ]);
    }

    //menu
do{
    printf("Escreva o que quer fazer:\n1 - Imprimir na tela os valores em forma de matriz;\n2- Procurar e imprimir o maior número digitado em cada linha da matriz;\n3 - Calcular e imprimir as somas dos elementos de cada uma das colunas;\n4 - Calcular e imprimir a soma de todos os elementos da matriz;\n5 - Armazenar e imprimir um vetor de 10 posições com os elementos da diagonal da matriz (a diagonal é dada quando linha=coluna)\n6 - Calcular e imprimir quantos elementos digitados são negativos.\n7 - Encerrar o programa\n");
    scanf("%d", &opcao);

    switch(opcao){

                case 1:

                    for ( i=0; i<tam; i++ ){
                    for ( j=0; j<tam; j++ )
                    {

                    printf("%5d",matriz[i][j]);


                    }
                    printf("\n");
                      }


                break;


                case 2:


                  printf("Maior número em cada linha:\n");
                    for (int i = 0; i < tam; i++) {

                        maior = matriz[i][0];

                        for (int j = 1; j < tam; j++) {

                            if (matriz[i][j] > maior) {
                                maior = matriz[i][j];
                            }
                        }
                        printf("Linha %d: %1.2f\n", i + 1, maior);
                    }
                    break;


                    case 3:

                         printf("Somas das colunas:\n");
                        for (int j = 0; j < tam; j++) {
                            int soma = 0;
                            for (int i = 0; i < tam; i++) {
                                soma = matriz[i][j] + 0;
                            }
                            printf("Coluna %d: %d\n", j + 1, soma);
                        }
                    break;

                    case 4:


                        for (int i = 0; i < tam; i++) {
                            for (int j = 0; j < tam; j++) {
                                soma_total += matriz[i][j];
                            }
                        }
                        printf("Soma total da matriz é: %1.2f\n", soma_total);

                    break;

                    case 5:

                        for (int i = 0; i < tam; i++) {
                           diagonal[i] = matriz[i][i];
                          }

                        printf("Elementos da diagonal:\n");
                        for (int i = 0; i < tam; i++) {
                            printf("%d ", diagonal[i]);
                        }
                        printf("\n");

                 break;

                case 6:

                    if (matriz[i][j] < 0) {
                negativo++;
            }
             printf("Foram digitados %d números negativos na matriz\n",negativo);

             break;

                case 7:

                    printf("FIM DO CÓDIGO :)");
                    fim = 0;
                    break;

                default:

                    while(opcao!=1 &&opcao!=2 && opcao!=3 && opcao!=4 && opcao!=5 && opcao!=6 && opcao!=7){

                        printf("DIGITE UMA OPÇÃO VÁLIDA!!!!!\n");
                        printf("Escreva o que quer fazer:\n1 - Imprimir na tela os valores em forma de matriz;\n2- Procurar e imprimir o maior número digitado em cada linha da matriz;\n3 - Calcular e imprimir as somas dos elementos de cada uma das colunas;\n4 - Calcular e imprimir a soma de todos os elementos da matriz;\n5 - Armazenar e imprimir um vetor de 10 posições com os elementos da diagonal da matriz (a diagonal é dada quando linha=coluna)\n6 - Calcular e imprimir quantos elementos digitados são negativos.\n7 - Encerrar o programa\n");
                        scanf("%d", &opcao);

                    }

    } //fim switch
printf("deseja continuar navegando pelo menu?Se sim, digite 1, senão, digite 0\n");
scanf("%d",&fim);
system("cls");



  }//fim do do while
  while(fim==1 && fim!=0);


    return 0;
}

 /*Uma sorveteria vende 5 produtos diferentes, com preços de acordo com a tabela:

Código Produto Preço (R$)

A    Refrigerante           5.50
B    Casquinha              5.00
C    Casquinha dupla   8.00
D    Sundae              12.00
E    Banana Split        18.00


Faça um programa que leia diversas vendas. O programa deverá apresentar um menu (bem
bonitinho!) indicando os códigos e produtos. Cada venda efetuada pode ser composta por várias
unidades de quaisquer produtos. A cada venda efetuada informe o preço a pagar e pergunte se o
usuário deseja continuar. Quando o usuário não quiser mais registrar vendas, o programa deve
emitir um relatório informando:


número total de cada produto vendido. feito
total pago para cada produto. feito
total de dinheiro arrecadado. feito
média do valor de cada pedido.
*/
#include <stdio.h>

int main() {


int quantidade_vendidos=0,fim;
float valor=0.0,preco, valor_a = 0.0, quant_b = 0.0,valor_b = 0.0, valor_c = 0.0, valor_d = 0.0, valor_e = 0.0,quant_a=0.0, quant_c = 0.0, quant_d = 0.0, quant_e = 0.0;
float media_a, media_b, media_c, media_d, media_e;
char codigo;


do{


    printf("Digite o código do produto, sendo:\n\nA = Refrigerante = 5.50\n\nB = Casquinha = 5.0\n\nC = Casquinha dupla = 8.0\n\nD = Sundae = 12.0\n\nE = Banana Split = 18.0\n\n");
    codigo = getche();

    quantidade_vendidos++;

     if(codigo=='A'|| codigo=='a'){

        quant_a ++;
        preco = 5.50;
        valor_a = valor_a + preco;
        valor = valor+ preco;


     }

     else if(codigo=='B' || codigo=='b'){

        quant_b++;
        preco = 5.0;
        valor_b = valor_b + preco;
        valor = valor+preco;


     }
     else if(codigo=='C' || codigo=='c'){


        quant_c ++;
        preco = 8.0;
        valor_c = valor_c + preco;
        valor = valor+preco;


     }

     else if(codigo=='D' || codigo=='d'){


        quant_d++;
        preco = 12.0;
        valor_d = valor_d + preco;
        valor = valor+preco;


     }
     else if(codigo=='E' || codigo=='e'){



       quant_e ++;
       preco = 18.0;
       valor_e = valor_e + preco;
       valor = valor+preco;

     }

media_a = valor_a/quant_a*1.0;
media_b = valor_b/quant_b*1.0;
media_c = valor_c/quant_c*1.0;
media_d = valor_d/quant_d*1.0;
media_e = valor_e/quant_e*1.0;

printf("\nandeseja continuar? o valor total ate agora eh de: %1.3f\nSe quiser parar digite 0, se quiser continuar, digite 1\n",valor);
scanf("%d",&fim);


}while (fim==1 && fim!=0);


            printf("\n\nforam vendidos: %d refrigerantes\n",quant_a);
            printf("foram vendidas: %1.2f casquinhas\n",quant_b);
            printf("foram vendidas: %1.2f casquinhas duplas\n",quant_c);
            printf("foram vendidos: %1.2f sundaes\n",quant_d);
            printf("foram vendidas: %1.2f bananas splits\n\n",quant_e);

            printf("o valor total pago por refrigerantes foi:  %1.2f\n",valor_a);
            printf("o valor total pago por casquinhas foi: %1.2f\n",valor_b);
            printf("o valor total pago por casquinhas duplas foi: %1.2f\n",valor_c);
            printf("o valor total pago por sundaes foi: %1.2f\n",valor_d);
            printf("o valor total pago por bananas splits foi: %1.2f\n",valor_e);


            printf("o valor pago por tudo foi; %1.2f",valor);

            printf("\nA media de valor pago por refrigerantes foi: %1.2f\n",media_a);
            printf("\nA media de valor pago por casquinhas foi: %1.2f\n",media_b);
            printf("\nA media de valor pago por casquinhas duplas foi: %1.2f\n",media_c);
            printf("\nA media de valor pago por sundaes foi: %1.2f\n",media_d);
            printf("\nA media de valor pago por bananas splities foi: %1.2f\n",media_e);

}
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <windows.h> //biblioteca para mudar a cor das letras

int main() {
    int idade, fim, n_entrevistados = 0, feminino_14_18 = 0, masculino_18 = 0, nao_informado = 0, olho_azul = 0, cabelo_ruivo = 0, pessoas_castanho = 0, recomecar = 1, ef = 0, em = 0, es = 0, ou = 0;
    float peso, altura, soma_idade = 0, soma_altura = 0, soma_peso = 0, media_idade, porcentagem_olho_azul, porcentagem_cabelo_ruivo, media_altura, media_peso, porcentagem_ef, porcentagem_em, porcentagem_es, porcentagem_ou, outro_n;
    char corcabelo, corolhos, genero;

    setlocale(LC_ALL, "Portuguese");

    do {
        n_entrevistados++;

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
        printf("Digite o gênero do entrevistado:\nF = Feminino\nM = Masculino\nN = não respondeu\n");
        genero = getche();

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
        printf("\nDigite a cor dos olhos da(o) entrevistada(o):\nC = Castanho\nV = Verde\nA = Azuis\nP = Pretos\n");
        corolhos = getche();

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
        printf("\nInforme a cor do cabelo da(o) entrevistada(o):\nL = Loiro\nC = Castanho\nP = preto\nR = Ruivo\n");
        corcabelo = getche();

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
        printf("\nAgora, informe o peso da(o) entrevistada(o):\n");
        scanf("%f", &peso);

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        printf("\nInforme a altura da(o) entrevistada(o):\n");
        scanf("%f", &altura);

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
        printf("\nInforme a idade (EM ANOS) da(o) entrevistada(o):\n");
        scanf("%d", &idade);

        soma_idade += idade;
        soma_altura += altura;
        soma_peso += peso;

        if (genero == 'f' || genero == 'F') {
            if (idade >= 14 && idade <= 18) {
                feminino_14_18++;
            }
        }

        if (genero == 'm' || genero == 'M') {
            if (idade >= 18) {
                masculino_18++;
            }
        }

        if (genero == 'n' || genero == 'N') {
            nao_informado++;
        }

        if (corolhos == 'a' || corolhos == 'A') {
            olho_azul++;
        }

        if (corcabelo == 'r' || corcabelo == 'R') {
            cabelo_ruivo++;
        }

        if (corolhos == 'c' || corolhos == 'C') {
            if (corcabelo == 'c' || corcabelo == 'C') {
                pessoas_castanho++;
            }
        }

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        printf("\nDeseja continuar? Se sim, digite 1\n");
        scanf("%d", &fim);

        system("cls");
    } while (fim == 1); //FECHA DO WHILE

    outro_n = n_entrevistados;
    media_idade = soma_idade / outro_n;
    porcentagem_olho_azul = (olho_azul / outro_n) * 100;
    porcentagem_cabelo_ruivo = (cabelo_ruivo / outro_n) * 100;
    media_altura = soma_altura / outro_n;
    media_peso = soma_peso / outro_n;
    porcentagem_ef = (ef / outro_n) * 100;
    porcentagem_em = (em / outro_n) * 100;
    porcentagem_es = (es / outro_n) * 100;
    porcentagem_ou = (ou / outro_n) * 100;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);

    printf("Número total de entrevistados: %d\n", n_entrevistados);
    printf("\nA média de idade dos entrevistados é de %1.2f\n", media_idade);
    printf("\nA quantidade de entrevistadas do gênero feminino entre 14 e 18 anos é: %d", feminino_14_18);
    printf("\nA quantidade de entrevistados do gênero masculino maiores de 18 anos é: %d", masculino_18);
    printf("\nA quantidade de entrevistados que não informaram seus gêneros na pesquisa é: %d", nao_informado);
    printf("\nA porcentagem de entrevistados de olhos azuis: %1.2f", porcentagem_olho_azul);
    printf("\nPorcentagem de entrevistados ruivos: %1.2f", porcentagem_cabelo_ruivo);
    printf("\nEntrevistados com olhos e cabelos castanhos: %d", pessoas_castanho);
    printf("\nMédia da altura de todos os entrevistados: %1.2f", media_altura);
    printf("\nMédia dos pesos de todos os entrevistados: %1.2f", media_peso);
   

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    printf("\nDeseja reiniciar? Se sim, digite 1\n");

    scanf("%d", &recomecar);

    if (recomecar == 1) {
        n_entrevistados = 0;
        soma_idade = 0;
        feminino_14_18 = 0;
        masculino_18 = 0;
        nao_informado = 0;
        olho_azul = 0;
        cabelo_ruivo = 0;
        pessoas_castanho = 0;
        soma_altura = 0;
        media_altura = 0;
        soma_peso = 0;
        media_peso = 0;
        ef = 0;
        em = 0;
        es = 0;
        ou = 0;
    }

    return 0;
}

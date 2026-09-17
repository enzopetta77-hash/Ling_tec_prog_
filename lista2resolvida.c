#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.141592

int main() {

    int opcao;

    int anosUsuario, anoAtual, anoNascimento;

    printf("Quantos anos voce tem agora: ");
    scanf("%d", &anosUsuario);

    printf("Em que ano voce esta: ");
    scanf("%d", &anoAtual);

    anoNascimento = anoAtual - anosUsuario;

    printf("O ano de nascimento do usuario e em %d\n", anoNascimento);


    float velocidadeKm, velocidadeMs;

    printf("Qual a sua velocidade em km/h: ");
    scanf("%f", &velocidadeKm);

    velocidadeMs = velocidadeKm * (1.0 / 3.6);

    printf("Sua velocidade convertida para m/s e de %.2f m/s\n",
           velocidadeMs);


    float dinheiroReais, dinheiroDolar, valorDolar;

    printf("Entre com o valor em reais: ");
    scanf("%f", &dinheiroReais);

    printf("A cotacao do dolar esta 1 real = 5,22\n");

    printf("Insira o valor da cotacao do dolar: ");
    scanf("%f", &valorDolar);

    dinheiroDolar = dinheiroReais * (1.0 / valorDolar);

    printf("O valor em dolares e de: %.2f\n", dinheiroDolar);


    float temperaturaC, temperaturaF;

    printf("Qual a temperatura em celsius: ");
    scanf("%f", &temperaturaC);

    temperaturaF = (temperaturaC * 9.0 / 5.0) + 32;

    printf("O valor convertido para Fahrenheit e de %.2f\n",
           temperaturaF);


    double grausEntrada, radianosSaida;

    printf("Entre com o valor de graus: ");
    scanf("%lf", &grausEntrada);

    radianosSaida = grausEntrada * PI / 180.0;

    printf("Seu valor convertido para radianos e igual a %.2lf\n",
           radianosSaida);

    int numeroBase, numeroAnterior, numeroPosterior;

    printf("Entre com o valor de n: ");
    scanf("%d", &numeroBase);

    numeroPosterior = numeroBase + 1;
    numeroAnterior = numeroBase - 1;

    printf("O numero %d, seu antecessor %d e seu sucessor %d\n",
           numeroBase, numeroAnterior, numeroPosterior);


    float valorPessoa1, valorPessoa2, valorPessoa3;
    float valorHeranca = 780000;

    valorPessoa1 = valorHeranca * (46.0 / 100.0);
    valorPessoa2 = valorHeranca * (32.0 / 100.0);
    valorPessoa3 = valorHeranca * (22.0 / 100.0);

    printf("O valor que cada um recebera e de:\n");
    printf("Pessoa 1: %.2f\n", valorPessoa1);
    printf("Pessoa 2: %.2f\n", valorPessoa2);
    printf("Pessoa 3: %.2f\n", valorPessoa3);


    int tempoTotal, quantidadeHoras, quantidadeMinutos, quantidadeSegundos;
    int sobraTempo;

    printf("Quanto foi o tempo do evento em segundos: ");
    scanf("%d", &tempoTotal);

    quantidadeHoras = tempoTotal / (60 * 60);
    sobraTempo = tempoTotal - (quantidadeHoras * 3600);

    quantidadeMinutos = sobraTempo / 60;
    quantidadeSegundos = sobraTempo - (quantidadeMinutos * 60);

    printf("O tempo do evento ao todo foi de:\n");
    printf("%d Horas\n", quantidadeHoras);
    printf("%d Minutos\n", quantidadeMinutos);
    printf("%d Segundos\n", quantidadeSegundos);


    int tempoViagem, velocidadeMedia, distanciaPercorrida;
    float combustivelGasto;

    printf("Qual foi o tempo gasto em horas do total da viagem: ");
    scanf("%d", &tempoViagem);

    printf("Qual foi a velocidade media em km/h durante a viagem: ");
    scanf("%d", &velocidadeMedia);

    distanciaPercorrida = velocidadeMedia * tempoViagem;

    combustivelGasto = distanciaPercorrida / 12.0;

    printf("A distancia percorrida foi de %d km\n",
           distanciaPercorrida);

    printf("Foram usados %.2f Litros de combustivel ao todo da viagem\n",
           combustivelGasto);


    int numero1, numero2, numero3, maiorParcial, maiorNumero;

    printf("Insira tres valores para saber qual e o maior: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    maiorParcial = (numero1 + numero2 + abs(numero1 - numero2)) / 2;

    maiorNumero =
        (maiorParcial + numero3 + abs(maiorParcial - numero3)) / 2;

    printf("O maior entre %d, %d e %d = %d\n",
           numero1, numero2, numero3, maiorNumero);

    return 0;
}

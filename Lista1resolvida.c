#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

int main() {

    /* Exercicio 1 - ordem inversa */
    {
        int num_inicial, num_final;

        printf("Digite um numero inteiro: ");
        scanf("%d", &num_inicial);

        printf("Agora digite outro numero inteiro: ");
        scanf("%d", &num_final);

        printf("Invertendo a ordem, fica: %d %d\n", num_final, num_inicial);
    }

    /* Exercicio 2 - A * 10^n */
    {
        double coeficiente, fator, notacao_cientifica;
        int potencia;

        printf("Informe o coeficiente A: ");
        scanf("%lf", &coeficiente);

        if (coeficiente >= 1 && coeficiente < 10) {
            printf("Coeficiente aceito.\n");
        }
        else {
            printf("Coeficiente fora do intervalo [1, 10)!\n");
        }

        printf("Informe o expoente n: ");
        scanf("%d", &potencia);

        /* primeiro calcula 10^n, depois multiplica pelo coeficiente */
        fator = pow(10.0, potencia);
        notacao_cientifica = fator * coeficiente;

        printf("A x 10^n = %.0lf\n", notacao_cientifica);
    }

    /* Exercicio 3 - decimal para binario */
    {
        int num_base10, casa32, casa16, casa8, casa4, casa2, casa1, quociente;

        printf("Digite um numero inteiro para converter: ");
        scanf("%d", &num_base10);

        quociente = num_base10;

        casa1 = quociente % 2;
        quociente /= 2;

        casa2 = quociente % 2;
        quociente /= 2;

        casa4 = quociente % 2;
        quociente /= 2;

        casa8 = quociente % 2;
        quociente /= 2;

        casa16 = quociente % 2;
        quociente /= 2;

        casa32 = quociente % 2;
        quociente /= 2;

        printf("Em base 2, esse numero fica: %d%d%d%d%d%d%d\n", casa32, casa16, casa8, casa4, casa2, casa1);
    }

    /* Exercicio 4 - salario com comissao */
    {
        double sal_base, vendas_mes, pagamento_final;

        printf("Quanto e o seu salario base? ");
        scanf("%lf", &sal_base);

        printf("Quanto voce vendeu no mes? ");
        scanf("%lf", &vendas_mes);

        /* comissao de 15%: vendas * 15 / 100 */
        pagamento_final = sal_base + vendas_mes * 15 / 100.0;

        printf("Salario com comissao: R$ %.2lf\n", pagamento_final);
    }

    /* Exercicio 5 - soma, media e produto */
    {
        float num_a, num_b, num_c, num_d, soma_geral, media_geral, multiplicacao;

        printf("Primeiro valor: ");
        scanf("%f", &num_a);

        printf("Segundo valor: ");
        scanf("%f", &num_b);

        printf("Terceiro valor: ");
        scanf("%f", &num_c);

        printf("Quarto valor: ");
        scanf("%f", &num_d);

        soma_geral = num_a + num_b + num_c + num_d;
        media_geral = soma_geral * 0.25;   /* dividir por 4 e o mesmo que multiplicar por 0.25 */

        multiplicacao = num_a;
        multiplicacao *= num_b;
        multiplicacao *= num_c;
        multiplicacao *= num_d;

        printf("Soma: %.2f\n", soma_geral);
        printf("Media: %.2f\n", media_geral);
        printf("Produto: %.2f\n", multiplicacao);
    }

    /* Exercicio 6 - idade em dias */
    {
        int dias_vividos, anos_completos, meses_completos, dias_sobrando, sobra_do_ano;

        printf("Quantos dias de vida voce tem? ");
        scanf("%d", &dias_vividos);

        anos_completos = dias_vividos / 365;
        sobra_do_ano = dias_vividos - anos_completos * 365;

        meses_completos = sobra_do_ano / 30;
        dias_sobrando = sobra_do_ano - meses_completos * 30;

        printf("Isso equivale a %d ano(s), %d mes(es) e %d dia(s)\n",
               anos_completos, meses_completos, dias_sobrando);
    }

    /* Exercicio 7 - volume da esfera */
    {
        float raio_bola, volume_bola;

        printf("Digite o raio da esfera: ");
        scanf("%f", &raio_bola);

        volume_bola = 4.0 * PI * raio_bola * raio_bola * raio_bola / 3;

        printf("Volume calculado: %.2f\n", volume_bola);
    }

    /* Exercicio 8 - distancia entre dois pontos */
    {
        int p1_x, p1_y, p2_x, p2_y;
        float dist_pontos, delta_x_quad, delta_y_quad;

        printf("Coordenadas do ponto 1 (x y): ");
        scanf("%d %d", &p1_x, &p1_y);

        printf("Coordenadas do ponto 2 (x y): ");
        scanf("%d %d", &p2_x, &p2_y);

        delta_x_quad = (p2_x - p1_x) * (p2_x - p1_x);
        delta_y_quad = (p2_y - p1_y) * (p2_y - p1_y);

        dist_pontos = sqrt(delta_x_quad + delta_y_quad);

        printf("Os pontos estao a %.2f unidades de distancia\n", dist_pontos);
    }

    return 0;
}

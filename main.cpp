#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Programa Calcula raizes equacao segundo grau:\n");
    printf("Formato: a*x^2 + b*x + c = 0\n");

    float a, b, c;
    printf("Digite o valor da variavel a na equacao: ");
    scanf("%f", &a);

    printf("Digite o valor da variavel b na equacao: ");
    scanf("%f", &b);

    printf("Digite o valor da variável c na equacao: ");
    scanf("%f", &c);

    float delta = b*b - 4*a*c;
    if (delta < 0)
    {
        printf("Delta: %f\n", delta);
        int j = -1;
        float x1_real = -b/(2*a);
        float x1_imag = sqrt(j*delta)/(2*a);
        float x2_real = -b/(2*a);
        float x2_imag = sqrt(j*delta)/(2*a);

        float x1 = x1_real + x1_imag;
        float x2 = x2_real - x2_imag;
        printf("x1 = %f + %f = %f\n", x1_real, x1_imag, x1);
        printf("x2 = %f - %f = %f\n", x1_real, x1_imag, x2);
    }
    else
    {
        float x1 = (-b + sqrt(delta))/(2*a);
        float x2 = (-b - sqrt(delta))/(2*a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}

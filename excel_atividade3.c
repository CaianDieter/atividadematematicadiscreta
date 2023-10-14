#include <stdio.h>
#include <math.h>


float funcaoLinear(float x, float a, float b) {
    return a * x + b;
}


float funcaoQuadratica(float x, float a, float b, float c) {
    return a * x * x + b * x + c;
}


float funcaoCubica(float x, float a, float b, float c, float d) {
    return a * x * x * x + b * x * x + c * x + d;
}


float funcaoExponencial(float x, float a, float b) {
    return a * pow(b, x);
}


float funcaoPotencia(float x, float a, float b) {
    return a * pow(x, b);
}

int main() {
    float uA = 5,valorVenda = 10; ;  

    float resultadoLinear = funcaoLinear(uA, 3, 7);

    float resultadoQuadratica = funcaoQuadratica(uA, 1, 2, 3);

    float resultadoCubica = funcaoCubica(uA, 1, 1, 1, 1);

    float resultadoExponencial = funcaoExponencial(uA, 2, 0.5);

    float resultadoPotencia = funcaoPotencia(uA, 2, 3);

    float novoResultadoLinear = funcaoLinear(valorVenda, 3, 7);

    float novoResultadoQuadratica = funcaoQuadratica(valorVenda, 1, 2, 3);

    float novoResultadoCubica = funcaoCubica(valorVenda, 1, 1, 1, 1);

    float novoResultadoExponencial = funcaoExponencial(valorVenda, 2, 0.5);

    float novoResultadoPotencia = funcaoPotencia(valorVenda, 2, 3);

    printf("Resultados com uA e valor de venda:\n");

    printf("Funcao Linear: %.2f\n", resultadoLinear);

    printf("Funcao Quadratica: %.2f\n", resultadoQuadratica);

    printf("Funcao Cubica: %.2f\n", resultadoCubica);

    printf("Funcao Exponencial: %.2f\n", resultadoExponencial);

    printf("Funcao de Potencia: %.2f\n", resultadoPotencia);

    printf("\nResultados com os valores de venda e uA trocados:\n");

    printf("Funcao Linear: %.2f\n", novoResultadoLinear);

    printf("Funcao Quadratica: %.2f\n", novoResultadoQuadratica);

    printf("Funcao Cubica: %.2f\n", novoResultadoCubica);

    printf("Funcao Exponencial: %.2f\n", novoResultadoExponencial);

    printf("Funcao de Potencia: %.2f\n", novoResultadoPotencia);
    
    return 0;
}
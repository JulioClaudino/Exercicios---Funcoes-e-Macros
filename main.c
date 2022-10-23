#include <stdio.h>
#include <stdlib.h>
#include "circunferencia.h"
#include "quadradoRetangulo.h"
#include "cubo.h"
#include "esfera.h"

int main() {
    float raio, areaCirculo, quadrilatero, ladoA, ladoB, ladoC, cubo, esfera;

    printf("\nDigite o raio da circunferencia: ");
    scanf("%f", &raio);
    
    areaCirculo = areaCircunferencia(raio);
    printf("\nA area do circulo e: %.2f\n", areaCirculo);

    printf("\nDigite o primeiro lado do quadrilatero: ");
    scanf("%f", &ladoA);

    printf("\nDigite o segundo lado do quadrilatero: ");
    scanf("%f", &ladoB);

    quadrilatero = areaQuadrilatero(ladoA, ladoB);
    printf("\nA area do quadrilatero e: %.2f\n", quadrilatero);

    printf("\nDigite o comprimento do cubo: ");
    scanf("%f", &ladoA);

    printf("\nDigite a largura do cubo: ");
    scanf("%f", &ladoB);

    printf("\nDigite a altura do cubo: ");
    scanf("%f", &ladoC);

    cubo = areaCubo(ladoA, ladoB, ladoC);
    printf("\nO volume do cubo e: %.2f\n", cubo);

    printf("\nDigite o raio da esfera: ");
    scanf("%f", &raio);

    esfera = areaEsfera(raio);
    printf("\nO volume da esfera e: %.2f", esfera);

    return 0;
}
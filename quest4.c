#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

typedef struct {
    Ponto superiorEsquerdo;
    Ponto inferiorDireito;
} Retangulo;

int main() {
    Retangulo r;

    printf("Digite o ponto superior esquerdo (x y): ");
    scanf("%f %f", &r.superiorEsquerdo.x, &r.superiorEsquerdo.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%f %f", &r.inferiorDireito.x, &r.inferiorDireito.y);

    float largura = r.inferiorDireito.x - r.superiorEsquerdo.x;
    float altura = r.superiorEsquerdo.y - r.inferiorDireito.y;

    float area = largura * altura;

    float diagonal = sqrt((largura * largura) + (altura * altura));

    float perimetro = 2 * (largura + altura);

    printf("\nÁrea: %.2f\n", area);
    printf("Diagonal: %.2f\n", diagonal);
    printf("Perímetro: %.2f\n", perimetro);

    return 0;
}

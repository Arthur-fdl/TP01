#include <stdio.h>

int main() {
    int abc, cba, xyz, zyx;

    while (1) {
        printf("Digite um número de três algarismos (ou um número fora desse intervalo para sair): ");
        scanf("%d", &abc);

        if (abc < 100 || abc > 999) {
            printf("Programa encerrado.\n");
            break;
        }

        int centenas = abc / 100;
        int unidades = abc % 10;

        if (centenas - unidades >= 2 || unidades - centenas >= 2) {
            cba = (unidades * 100) + ((abc / 10) % 10 * 10) + (centenas);
            xyz = abc + cba;
            zyx = (xyz % 10) * 100 + ((xyz / 10) % 10 * 10) + (xyz / 100);
            int resultado = xyz + zyx;

            printf("cba: %d\n", cba);
            printf("xyz: %d\n", xyz);
            printf("zyx: %d\n", zyx);
            printf("Resultado final: %d\n", resultado);
        } else {
            printf("O algarismo das centenas e das unidades não diferem por pelo menos 2 unidades. Tentar novamente.\n");
        }
    }

    return 0;
}
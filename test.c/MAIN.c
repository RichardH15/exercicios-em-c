#include <stdio.h>

int main() {
    float n1, n2, res;
    char op;

    printf("Digite o primeiro numero da operacao: ");
    scanf("%f", &n1);
    getchar();

    printf("Digite a operacao que deseja realizar (+ - / *): ");
    scanf("%c", &op);

    printf("Digite o segundo numero da operacao: ");
    scanf("%f", &n2);

    if (op == '+') {
        res = n1 + n2;
    }
    else if (op == '-') {
        res = n1 - n2;
    }
    else if (op == '/') {
        res = n1 / n2;
    }
    else if (op == '*') {
        res = n1 * n2;
    }
    else {
        printf("A operacao inserida nao e valida, verifique a operacao e tente novamente");
       }

    printf("O resultado de %.1f %c %.1f e igual a %.1f", n1, op, n2, res);
    return 0;
}
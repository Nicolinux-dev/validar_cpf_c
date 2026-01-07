#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Uso de IA somente para gerar comentários

int main()
{
    // Vetor para armazenar os 11 dígitos do CPF (9 aleatórios + 2 verificadores)
    int cpf[11];
    int soma, resto, i;

    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(0));

    // Gera os 9 primeiros dígitos do CPF de forma aleatória (0 a 9)
    for (i = 0; i < 9; i++)
    {
        cpf[i] = rand() % 10;
    }

    // -------------------------------
    // Cálculo do primeiro dígito verificador
    // -------------------------------
    soma = 0;

    // Multiplica cada dígito por um peso decrescente de 10 até 2
    for (i = 0; i < 9; i++)
    {
        soma = soma + cpf[i] * (10 - i);
    }

    // Obtém o resto da divisão para definir o dígito
    resto = (soma * 10) % 11;

    // Se o resto for 10 ou 11, o dígito verificador é 0; caso contrário, é o próprio resto
    cpf[9] = (resto == 10 || resto == 11) ? 0 : resto;

    // -------------------------------
    // Cálculo do segundo dígito verificador
    // -------------------------------
    soma = 0;

    // Multiplica os 10 primeiros dígitos por pesos decrescentes de 11 até 2
    for (i = 0; i < 10; i++)
    {
        soma = soma + cpf[i] * (11 - i);
    }

    // Obtém o resto da divisão para definir o segundo dígito
    resto = (soma * 10) % 11;

    // Aplica a mesma regra: se resto for 10 ou 11, o dígito é 0
    cpf[10] = (resto == 10 || resto == 11) ? 0 : resto;

    // -------------------------------
    // Impressão do CPF formatado
    // -------------------------------
    for (i = 0; i < 11; i++)
    {
        // Imprime cada dígito
        printf("%d", cpf[i]);

        // Adiciona a pontuação padrão do CPF: pontos e hífen
        if (i == 2 || i == 5)
            printf(".");
        else if (i == 8)
            printf("-");
    }
}
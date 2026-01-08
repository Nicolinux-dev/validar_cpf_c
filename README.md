<div align="center">

# 🎲 Gerador de CPF em C

Gerador aleatório de CPFs válidos com cálculo automático dos dígitos verificadores

[![C](https://img.shields.io/badge/C-00599C?logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))

</div>

---

## 📋 Sobre

Programa em C que gera CPFs válidos aleatoriamente, seguindo as regras oficiais de validação da Receita Federal.

## 🚀 Como usar

```bash
# Compile
gcc main.c -o gerador_cpf

# Execute
./gerador_cpf
```

## 💡 Exemplo de saída

```
CPF Gerado: 123.456.789-09
```

## ⚙️ Como funciona

1. **Gera 9 dígitos aleatórios** entre 0 e 9
2. **Calcula o 1º dígito verificador** usando pesos de 10 a 2
3. **Calcula o 2º dígito verificador** usando pesos de 11 a 2
4. **Formata** no padrão `XXX.XXX.XXX-XX`

## ⚠️ Aviso

Este projeto é apenas para fins educacionais e testes. Não utilize para atividades ilegais.

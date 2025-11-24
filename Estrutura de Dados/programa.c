#include <stdio.h>
#include <string.h>
#define TAMANHO_NOME 60

// 1.DEFINIR PROTOTIPO DE FUNÇOES
// 1.1DECLARAR, 1.2.CHAMAR, 1.3.ATRIBUIR VALOR(s) E  1.4.ENCERRAR.
void inicialiazar_processamento(void);
void processar_dados_limpar_buffer(void);
void processar_dados_ler_e_armazenar(void);
void processar_dados_exibir(void);
void finalizar_processamento(void);
// 2.DEFINIR FUNÇÃO MAIN: ORQUESTRADOR DO FLUXO PRINCIPAL DO CODIGO 
// 2.1DECLARAR, 2.2CHAMAR, 2.3 ATRIBUIR VALOR 2.4 INICIAR BLOCO 2.5 ENCERRAR
int main() {
// 3.DEFINIR VARIAVEIS (ESPAÇOS PARA ARMAZENAR E MANIPULAR DADOS E ENDEREÇOS NA MEMORIA).
// 3.1. DECLARAR, 3.2 ATRIBUIR VALORES 3.3 ENCERRAR.
    int idade = 0;
    float altura = 0.0f;
    float peso = 0.0f;
    char nome[TAMANHO_NOME] = {0};
// 4.CHAMAR AS FUNÇOES *NECESSARIAS* PARA O FLUXO PRINCIPAL
// 1.DECLARAR 2CHAMAR, 2.3 ATRIBUIR VALOR 2.4 INICIAR BLOCO 4.5ENCERRAR 
inicializar_processamento();
    processar_dados_ler_e_armazenar(&idade, &altura, &peso, nome);
    processar_dados_exibir(int idade, float altura, float peso, char nome);
    finalizar processamento();
    return 0;
};
// 5. DEFINIR TODAS AS FUNÇÕES
// 1.DECLARAR 2CHAMAR, 2.3 ATRIBUIR VALOR 2.4 INICIAR BLOCO 5.ENCERRAR
inicialiazar_processamento() {
    printf("====== PROGRAMA INICIALIZADO COM SUCESSO ======\n");
};
processar_dados_limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
};
processar_dados_ler_e_armazenar(int *idade, float *altura, float *peso, char *string) {
    printf("Digite sua idade: ");
    scanf("%d", idade);
processar_dados_limpar_buffer();
};
processar_dados_exibir() {
    printf("%d", idade);
    printf("\n");
};
finalizar_processamento() {
    printf("====== PROGRAMA EXECUTADO COM SUCESSO ======\n");
};


 





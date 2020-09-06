#include <stdio.h>
#include <stdlib.h>

/* Escreva  um  programa  que  leia um número l de linhas e um número c de 
colunas. Em seguida, um vetor V de tamanho l∗c e uma matriz M com l linhas
e  c  colunas devem ser alocados dinamicamente. Seu programa deve executar
as  tarefas abaixo sequencialmente, através de chamadas de funções:
(a) Preencher  o  vetor  V  com  valores inteiros digitados pelo usuário.
(b) Imprimir o vetor V na tela.
(c) Preencher a matriz M, sequencialmentecom os valores do vetor V .
(d) Imprimir a matriz M na tela                                        */

// funções aux
void preencherVetor(int n, int *V);
void imprimirVetor(int n, int *V);
void preencherMatriz(int l, int c, int **M, int *V);
void imprimirMatriz(int l, int c, int **M);

int *alocarVetor(int n);
int **alocarMatriz(int l, int c);

int main(void)
{

  int l, c;
  int *V, **M;

  printf("\nDigite o numero de linhas e de colunas: \n");
  scanf("%d %d", &l, &c);

  V = alocarVetor(l * c);
  M = alocarMatriz(l, c);

// caso dê errado
  if (V == NULL || M == NULL)
  { 
    return 0;
  }

  printf("\nPreencha o vetor V com %d numeros inteiros: \n", l * c);
  preencherVetor(l * c, V);

  printf("\nVetor com %d elementos: \n", l * c);
  imprimirVetor(l * c, V);

  preencherMatriz(l, c, M, V);

  printf("\n\nMatriz %d x %d preenchida com elementos do vetor: \n", l, c);
  imprimirMatriz(l, c, M);

  // desalocar ponteiros
  free(V);
  free(*M);

  return 0;
}

// Implementação das funções aux
int *alocarVetor(int n)
{

  int *V = (int *)malloc(n * sizeof(int));

  if (V == NULL)
  {
    printf("\nMemoria insuficiente!\n");
    return NULL;
  }

  return V;
}

int **alocarMatriz(int l, int c)
{

  int **M = (int **)malloc(l * sizeof(int *));

  if (M == NULL)
  {
    printf("\nMemoria insuficiente!\n");
    return NULL;
  }

  for (int i = 0; i < l; i++)
  {
    M[i] = (int *)malloc(c * sizeof(int));

    if (M[i] == NULL)
    {
      printf("\nMemoria insuficiente!\n");
      return NULL;
    }
  }

  return M;
}
void preencherVetor(int n, int *V)
{
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &V[i]);
  }
}

void imprimirVetor(int n, int *V)
{
  for (int i = 0; i < n; i++)
  {
    printf(" %d", V[i]);
  }
}

void preencherMatriz(int l, int c, int **M, int *V)
{
  for (int i = 0; i < l; i++)
  {
    for (int j = 0; j < c; j++)
    {
      M[i][j] = V[i * c + j];
    }
  }
}

void imprimirMatriz(int l, int c, int **M)
{
  for (int i = 0; i < l; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf(" %d", M[i][j]);
    }
    printf("\n");
  }
}

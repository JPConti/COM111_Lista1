#include "stdio.h"
#include "stdlib.h"

/*  Crie um registro (struct) ALUNO que contenha os seguintes campos:
(aluno) int matricula;
(b) char nome[50];
(c) int dia_nasc;
(d) int mes_nasc;
(e) int ano_nasc;
(f) float nota;

Escreva um programa que leia o número n de alunos aluno  serem  cadastrados. 
Em seguida, um  vetor  V  com  n posições  deve  ser  alocado  dinamicamente 
usando uma função que retorna  um  ponteiro  do  tipo ALUNO. O programa  deve
preencher  o  vetor V e imprimir o registro dos  alunos  aprovados,  isto  é, 
com  nota  maior  ou  igual  aluno  6,0. Para executar tais tarefas devem ser 
criadas funções para:

(aluno) Alocar memória dinamicamente para um vetor do tipo ALUNO.
(b) Preencher o vetor de alunos.
(c) Imprimir o vetor de alunos.
(d) Preencher o registro de um aluno.
(e) Imprimir o registro de um aluno.                                    */

#define max 50

typedef struct ALUNO
{
  int matricula;
  char nome[max];
  char curso[max];
  int dia_nasc;
  int mes_nasc;
  int ano_nasc;
  float nota;
} aluno;

// Prototipos de funcoes
aluno *alocarVetor(int n);

void preencherVetor(int n, aluno *V);
void imprimirVetor(int n, aluno *V);

void cadastrarAluno(aluno *a);
void imprimirAluno(aluno a);

int main()
{

  int n;
  aluno *V;

  printf("\nDigite o numero de alunos: ");
  scanf("%d", &n);
  printf("\n");

  V = alocarVetor(n);

  // le os proximos dados digitados pelo usuário
  getchar();

  preencherVetor(n, V);

  printf("\nALUNOS MATRICULADOS: \n");

  imprimirVetor(n, V);

  printf("\nALUNOS APROVADOS: \n");

  for (int i = 0; i < n; i++)
  {
    printf("\n");
    if (V[i].nota >= 6.0)
    {
      imprimirAluno(V[i]);
      printf("\n");
    }
  }

  free(V);
  return 0;
}

// Funções Auxiliares
aluno *alocarVetor(int n)
{
  aluno *V = (aluno *)malloc(n * sizeof(aluno));

  if (V == NULL)
  {
    printf("Memoria insuficiente!");
  }

  return V;
}

void cadastrarAluno(aluno *a)
{
  // o "->" é utilizado para o ponteiro acessar a variável
  printf("Digite o nome do aluno: ");
  fgets(a->nome, max, stdin);

  printf("Digite o curso do aluno: ");
  fgets(a->curso, max, stdin);

  printf("Digite o numero de matricula: ");
  scanf("%d", &a->matricula);

  printf("Digite a data de nascimento do aluno no formato(dia mes ano): ");
  scanf("%d %d %d", &a->dia_nasc, &a->mes_nasc, &a->ano_nasc);

  printf("Digite a nota do aluno: ");
  scanf("%f", &a->nota);
  printf("\n");

  // ler os proximos dados digitados pelo usuário
  getchar();
}

void preencherVetor(int n, aluno *V)
{
  for (int i = 0; i < n; i++)
  {
    //Acessa o endereço de memoria
    cadastrarAluno(&V[i]);
  }
}

void imprimirVetor(int n, aluno *V)
{
  for (int i = 0; i < n; i++)
  {
    //Acessar conteudo na memoria
    imprimirAluno(V[i]);
    printf("\n");
  }
}

void imprimirAluno(aluno a)
{
  printf("Nome: %s", a.nome);
  printf("Curso: %s", a.curso);
  printf("Numero de matricula: %d\n", a.matricula);
  printf("Data de nascimento %d/%d/%d\n", a.dia_nasc, a.mes_nasc, a.ano_nasc);
  printf("nota: %.2f\n", a.nota);
}

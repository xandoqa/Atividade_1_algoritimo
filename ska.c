#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  char nome[50];
  int idade;
  char matricula[50];
  char endereco[100];
  char curso[50];
  char periodo[20];
  char disciplinas[100];
  
printf("Cadastro de Informações\n");

  printf("Digite o nome: ");
  scanf("%[^\n]", nome);
  getchar();

  printf("Digite a idade: ");
  scanf("%d", &idade);

  printf("Digite a matrícula: ");
  scanf("%s", matricula);

  printf("Digite o endereço: ");
  getchar(); 
  fgets(endereco, sizeof(endereco), stdin);

  printf("Digite o curso: ");
  scanf("%s", curso);

  printf("Digite o período: ");
  scanf("%s", periodo);

  printf("Digite as disciplinas: ");
  getchar();
  fgets(disciplinas, sizeof(disciplinas), stdin);

  printf("\nInformações do Cadastro:\n");
  printf("Nome: %s\n", nome);
  printf("Idade: %d\n", idade);
  printf("Matrícula: %s\n", matricula);
  printf("Endereço: %s\n", endereco);
  printf("Curso: %s\n", curso);
  printf("Período: %s\n", periodo);
  printf("Disciplinas: %s\n", disciplinas);
}

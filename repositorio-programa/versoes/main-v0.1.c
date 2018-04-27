#include <stdlib.h>
#include <stdio.h>

/* tipo de dados para filmes */
typedef struct FILMES
{
	char nome_filme[50]; //nome do filme
	char gen_filme[20]; //genero do filme
	char form_filme[10]; //formato do filme, e.g. 2D, 3D
	char data_filme[10]; //data do filme, e.g. dd-mm-aaaa
	int hora_filme; //horario do filme
	float valor_bilhete; //valor do bilhete
} FILMES;

/* funcao que add um novo filme */
void addFilme(FILMES *lista_filmes, int *p_cont_parou_addFilme){
	int i = *p_cont_parou_addFilme;

	printf("# Adicionar um novo filme\n\n");

	printf("Entre com o nome: ");
	scanf("%s", &lista_filmes[i].nome_filme);
	printf("Entre com o genero: ");
	scanf("%s", &lista_filmes[i].gen_filme);
	printf("Entre com o formato: ");
	scanf("%s", &lista_filmes[i].form_filme);
	printf("Entre com a data do filme (dd-mm-aaaa): ");
	scanf("%s", &lista_filmes[i].data_filme);
	printf("Entre com o horario do filme: ");
	scanf("%d", &lista_filmes[i].hora_filme);
	printf("Entre com o valor do bilhete: ");
	scanf("%f", &lista_filmes[i].valor_bilhete);	

	/* depois de add um novo filme, incrementar +1 ao contador */
	*p_cont_parou_addFilme = *p_cont_parou_addFilme + 1;
}

/* funcao que mostra a lista completa dos filmes cadastrados */
void mostrarListaFilmes(FILMES *lista_filmes, int *p_cont_parou_addFilme){
	printf("\n# Lista de filmes cadastrados\n\n");

	int ate_onde = *p_cont_parou_addFilme;
	int i; //contador comum
	for (i = 0; i < ate_onde; i++){
		printf("Nome do filme: %s \n", lista_filmes[i].nome_filme);
		printf("Genero: %s \n", lista_filmes[i].gen_filme);
		printf("Formato: %s \n", lista_filmes[i].form_filme);
		printf("Data do filme: %s \n", lista_filmes[i].data_filme);
		printf("Horario do filme: %d \n", lista_filmes[i].hora_filme);
		printf("Valor do bilhete: %.2f \n\n", lista_filmes[i].valor_bilhete);
	}
}

int main(){
	/* criar menu de opcoes aqui
	1) Reservar bilhete
	2) Pesquisar bilhete
	3) Verificar poltronas
	4) Adicionar novo filme
	5) Editar filme
	6) Deletar filme
	7) Mostrar lista de filmes
	8) Sair */	

	/* criar vetor dinamico do tipo FILMES que vai armazenar a lista de filmes */
	/* de inicio, poderao ser armazenados 5 filmes, 
	mas esse numero podera mudar conforme seja necessario*/
	int qtd_filmes = 5;
	FILMES *lista_filmes;

	lista_filmes = malloc(qtd_filmes * sizeof(FILMES));

	/* chamar funcao que add um novo filme */
	/* a variavel e o ponteiro abaixo serve para contar em que posicao do vetor
	eu estou quando add um novo filme, assim, na primeira vez que add um novo filme
	ele valera 0, depois 1, depois 2, etc, assim eu sei em que posicao do vetor
	eu irei add um novo filme */
	int cont_parou_addFilme = 0; 
	addFilme(lista_filmes, &cont_parou_addFilme); //passar como parametro, respectivamente, o nome do vetor e o contador

	mostrarListaFilmes(lista_filmes, &cont_parou_addFilme);

	/* desalocar blocos de memoria */
	free(lista_filmes);

	return 0;
}
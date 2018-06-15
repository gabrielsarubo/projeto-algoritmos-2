#ifndef _FUNCOES_H_
#define _FUNCOES_H_

// PROTOTIPACAO/DECLARACOES DAS FUNCOES
void LimpaTela();
void ImprimirBilhetes(BILHETES *vBilhetes, int pos);
void Reservar(BILHETES *vBilhetes, int tam_vet, FILMES *head);
void Pesquisar(BILHETES *vBilhetes);
void Inserir(FILMES **head);
void Editar(FILMES *head);
void Deletar(FILMES **head);
void Imprimir(FILMES *head);

#endif
#include "Emprestimo.h"

Emprestimo::Emprestimo(	double cliente, int livro, int exemplar, 
						int dataI[], int dataF[], int n) {
	id = n;
	id_livro = livro;
	id_exemplar = exemplar;
	cpf = cliente;
	int i;
	for (i = 0; i < 3; ++i) {
		dataEmprestimo[i] = dataI[i];
		dataEntrega[i] = dataF[i];
	}
	entregue = false;
}

double Emprestimo::getCliente(){ return cpf; }

int Emprestimo::getLivro(){ return id_livro; }

int Emprestimo::getExemplar(){ return id_exemplar; }

int Emprestimo::getDataEmprestimo(){ return dataEmprestimo; }

int Emprestimo::getDataEntrega(){ return dataEntrega; }

bool Emprestimo::verificarEntrega(){ return entregue; }

int Emprestimo::verificarData(int dtA[], int dtB[]) {
	double tDiasA = 0, tDiasB = 0;
	tDiasA += dtA[2]*30*12;
	tDiasA += (dtA[1]-1)*30;
	tDiasA += dtA[0];

	tDiasB += dtB[2]*30*12;
	tDiasB += (dtB[1]-1)*30;
	tDiasB += dtB[0];

	return (int) tDiasA - tDiasB;
}

int Emprestimo::entregar(int data[]){
	entregue = true;
	return verificarData(data, dataEntrega);
}"

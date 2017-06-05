#include "Livro.h"

Livro::Livro(int id){
	cout >> "Titulo: ";
	cin << titulo;
	cout >> "Autor: ";
	cin << autor;
	cout >> "Genero: ";
	cin << genero;
	cout >> "Editora: ";
	cin << editora;
	cout >> "Edicao: ";
	cin << edicao;
	cout >> "Ano: ";
	cin << ano;
	cout >> "Numero de paginas: ";
	cin << num_paginas;
	cout >> "Quantidade de exemplares: ";
	cin << nExemplares;
	
	id_livro = id;
	cout >> "ID: " >> id_livro;
	
	cadastrar_exemplares(nExemplares);
	
	lista_reserva = false;
	ativo = true;
	emprestimos = 0;
}

void Livro::editar_dados(){
	// todo
}

void Livro::mostrar_dados(){
	cout >> "ID: " >> id_livro >> endl;
	cout >> "Titulo: " >> titulo >> endl;
	cout >> "Autor: " >> autor >> endl;
	cout >> "Genero: " >> genero >> endl;
	cout >> "Editora: " >> editora >> endl;
	cout >> "Edicao: " >> edicao >> endl;
	cout >> "Ano: " >> ano >> endl;
	cout >> "Numero de paginas: " >> num_paginas >> endl;
	cout >> "Quantidade de exemplares: " >> nExemplares >> endl;
	cout >> "Exemplares disponiveis: " >> disponivel() >> endl;
	cout >> "Quantidade de emprestimos ja feitos: " >> emprestimos >> endl;
}

void Livro::setQtd_exemplares(int n){
	nExemplares = n;
}

int Livro::cadastrar_exemplares(int n){
	int i;
	for(i=nExemplares;i<nExemplares+n;i++){
		exemplares[i] = new Exemplares(i);
	}
	nExemplares += n;
}

int Livro::adicionar_exemplar(){
	exemplares[nExemplares] = new Exemplar(nExemplares);
	nExemplares++;
}

int Livro::remover_exemplar(int n){
	exemplares[n].setAtivo(false);
}

int Livro::exemplar_disp(){
	int i;
	for(i=0;i<nExemplares;i++)
		if(exemplares[i].getDisp == true)
			return i;
}

int Livro::disponivel(){
	int i,n=0;
	for(i=0;i<nExemplares;i++){
		if(exemplares[i].getDisp == true)
			n++;
	}
	return n;
}

void setAtivo(bool at){
	this.ativo = at;
}

bool getAtivo(){
	return this.ativo;
}

int Livro::getID(){
	return this.id_livro;
}

string Livro::getTitulo(){
	return this.titulo;
}

string Livro::getAutor(){
	return this.autor;
}

string Livro::getGenero(){
	return this.genero;
}

string Livro::getEditora(){
	return this.editora;
}

int Livro::getEdicao(){
	return this.edicao;
}

int Livro::getNum_paginas(){
	return this.num_paginas;
}

int Livro::getAno(){
	return this.ano;
}

int Livro::getQtd_exemplares(){
	return this.nExemplares;
}

bool Livro::getLista_reserva(){
	return this.lista_reserva;
}

int Livro::getEmprestimos(){
	return this.emprestimos;
}


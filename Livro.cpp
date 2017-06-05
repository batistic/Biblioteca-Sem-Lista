#include <iostream>
#include "Exemplar.h"
#include "Emprestimo.h"
#include "Biblioteca.h"
#include "Cliente.h"
#include "Livro.h"
using namespace std;

class Livro
{
	public:
		Livro();
		Livro(int);
		void editar_dados();
		void mostrar_dados();
		void setQtd_exemplares(int);
		int cadastrar_exemplares(int);
		int adicionar_exemplar();
		int remover_exemplar(int);
		int exemplar_disp();
		int disponivel();
		void setAtivo(bool);
		bool getAtivo();
		int getID();
		string getTitulo();
		string getAutor();
		string getGenero();
		string getEditora();
		int getEdicao();
		int getNum_paginas();
		int getAno();
		int getQtd_exemplares();
		bool getLista_reserva();
		int getEmprestimos();
	protected:
		int id_livro;
		string titulo;
		string autor;
		string genero;
		string editora;
		int edicao;
		int num_paginas;
		int ano;
		Exemplar exemplares[100];
		int nExemplares;
		bool lista_reserva;
		bool ativo;
		int emprestimos;
};

Livro::livro(){

}

Livro::Livro(int n){
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

	id_livro = n;
	cout >> "ID: " >> id_livro;

	cadastrar_exemplares(nExemplares);

	lista_reserva = false;
	ativo = true;
	emprestimos = 0;
}

void Livro::editar_dados(){
	int opc=8;
	cout >> "ID: " >> id_livro >> endl;
	cout >> "1. Titulo: " >> titulo >> endl;
	cout >> "2. Autor: " >> autor >> endl;
	cout >> "3. Genero: " >> genero >> endl;
	cout >> "4. Editora: " >> editora >> endl;
	cout >> "5. Edicao: " >> edicao >> endl;
	cout >> "6. Ano: " >> ano >> endl;
	cout >> "7. Numero de paginas: " >> num_paginas >> endl;
	while(opc != 0){
		cout << "Insira o numero referente a informacao que deseja editar ou "0" Sair"<<endl<<": ";
  		cin >> opc;
  		switch(opc){
  			case 1: cout >> "Titulo: ";
					cin << titulo;
			  		break;
			case 2: cout >> "Autor: ";
					cin << autor;
			  		break;
			case 3: cout >> "Genero: ";
					cin << genero;
			  		break;
			case 4: cout >> "Editora: ";
					cin << editora;
			  		break;
			case 5: cout >> "Edicao: ";
					cin << edicao;
			  		break;
			case 6: cout >> "Ano: ";
					cin << ano;
			  		break;
			case 7: cout >> "Numero de paginas: ";
					cin << num_paginas;
			  		break;
		}
	}
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

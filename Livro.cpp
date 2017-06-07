#include <iostream>
#include "Livro.h"
using namespace std;

Livro::Livro(){

}

void Livro::setLivro(int n){
	cout << "Titulo: ";
	setbuf(stdin,NULL);
    std::getline(cin,titulo);
    setbuf(stdin,NULL);
    //cin >> titulo;
	cout << "Autor: ";
	setbuf(stdin,NULL);
    std::getline(cin,autor);
    setbuf(stdin,NULL);
    //cin >> autor;
	cout << "Genero: ";
	setbuf(stdin,NULL);
    std::getline(cin,genero);
    setbuf(stdin,NULL);
    //cin >> genero;
	cout << "Editora: ";
	setbuf(stdin,NULL);
    std::getline(cin,nome);
    setbuf(stdin,NULL);
    //cin >> editora;
	cout << "Edicao: ";
	cin >> edicao;
	cout << "Ano: ";
	cin >> ano;
	cout << "Numero de paginas: ";
	cin >> num_paginas;
	cout << "Quantidade de exemplares: ";
	cin >> nExemplares;

	id_livro = n;
	cout << "ID: " << id_livro << endl;

	cadastrar_exemplares();

	lista_reserva = false;
	ativo = true;
	emprestimos = 0;
}

void Livro::editar_dados(){
	int opc=8;
	cout << "ID: " << id_livro << endl;
	cout << "1. Titulo: " << titulo << endl;
	cout << "2. Autor: " << autor << endl;
	cout << "3. Genero: " << genero << endl;
	cout << "4. Editora: " << editora << endl;
	cout << "5. Edicao: " << edicao << endl;
	cout << "6. Ano: " << ano << endl;
	cout << "7. Numero de paginas: " << num_paginas << endl;
	while(opc != 0){
		cout << "Insira o numero referente a informacao que deseja editar ou digite 0 para Sair"<<endl<<": ";
  		cin >> opc;
  		switch(opc){
  			case 1: cout << "Titulo: ";
					setbuf(stdin,NULL);
					std::getline(cin,titulo);
					setbuf(stdin,NULL);
					//cin >> titulo;
			  		break;
			case 2: cout << "Autor: ";
					setbuf(stdin,NULL);
					std::getline(cin,autor);
					setbuf(stdin,NULL);
					//cin >> autor;
			  		break;
			case 3: cout << "Genero: ";
					setbuf(stdin,NULL);
					std::getline(cin,genero);
					setbuf(stdin,NULL);
					//cin >> genero;
			  		break;
			case 4: cout << "Editora: ";
					setbuf(stdin,NULL);
					std::getline(cin,editora);
					setbuf(stdin,NULL);
					//cin >> editora;
			  		break;
			case 5: cout << "Edicao: ";
					cin >> edicao;
			  		break;
			case 6: cout << "Ano: ";
					cin >> ano;
			  		break;
			case 7: cout << "Numero de paginas: ";
					cin >> num_paginas;
			  		break;
		}
	}
}

void Livro::mostrar_dados(){
	cout << "ID: " << id_livro << endl;
	cout << "Titulo: " << titulo << endl;
	cout << "Autor: " << autor << endl;
	cout << "Genero: " << genero << endl;
	cout << "Editora: " << editora << endl;
	cout << "Edicao: " << edicao << endl;
	cout << "Ano: " << ano << endl;
	cout << "Numero de paginas: " << num_paginas << endl;
	cout << "Quantidade de exemplares: " << nExemplares << endl;
	cout << "Exemplares disponiveis: " << disponivel() << endl;
	cout << "Quantidade de emprestimos ja feitos: " << emprestimos << endl;
}

void Livro::setQtd_exemplares(int n){
	nExemplares = n;
}

int Livro::cadastrar_exemplares(){
	int i;
	for(i=0;i<nExemplares;i++){
		exemplares[i].setExemplar(i);
	}
	return 0;
}

int Livro::adicionar_exemplar(){
	int i;
	for(i=0;i<nExemplares;i++){
		if(exemplares[i].getAtivo() == false)
			exemplares[i].setExemplar(i);
			return 0;
	}
	exemplares[nExemplares].setExemplar(nExemplares);
	nExemplares++;
}

int Livro::remover_exemplar(int n){
	nExemplares--;
	int i;
	for(i=n;i<nExemplares;i++){
		exemplares[i] = exemplares[i+1];
	}
}

int Livro::exemplar_disp(){
	int i;
	for(i=0;i<nExemplares;i++)
		if(exemplares[i].getDisp() == true)
			return i;
}

int Livro::disponivel(){
	int i,n=0;
	for(i=0;i<nExemplares;i++){
		if(exemplares[i].getDisp() == true)
			n++;
	}
	return n;
}

void Livro::setAtivo(bool at){
	ativo = at;
}

bool Livro::getAtivo(){
	return ativo;
}

int Livro::getID(){
	return id_livro;
}

string Livro::getTitulo(){
	return titulo;
}

string Livro::getAutor(){
	return autor;
}

string Livro::getGenero(){
	return genero;
}

string Livro::getEditora(){
	return editora;
}

int Livro::getEdicao(){
	return edicao;
}

int Livro::getNum_paginas(){
	return num_paginas;
}

int Livro::getAno(){
	return ano;
}

int Livro::getQtd_exemplares(){
	return nExemplares;
}

bool Livro::getLista_reserva(){
	return lista_reserva;
}

int Livro::getEmprestimos(){
	return emprestimos;
}

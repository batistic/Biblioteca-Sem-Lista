#ifndef LIVRO_H
#define LIVRO_H
#pragma once
#include <iostream>
#include "Exemplar.h"
using namespace std;

class Livro{
	public:
		Livro();
		void setLivro(int);
		void editar_dados();
		void mostrar_dados();
		void setQtd_exemplares(int);
		int cadastrar_exemplares();
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
		int nExemplares;
		bool lista_reserva;
		bool ativo;
		int emprestimos;
		Exemplar exemplares[100];
};

#endif

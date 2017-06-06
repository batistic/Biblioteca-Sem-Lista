#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#pragma once
#include "Cliente.h"
#include "Livro.h"
#include "Emprestimo.h"
using namespace std;

class Biblioteca{
	public:
		Biblioteca();
		int cadastrar_cliente();
		int realizar_emprestimo();
		int realizar_devolucao();
		int cadastrar_livro();
		Livro consultar_livro(string);
		Livro consultar_livro(int);
		Cliente consultar_cliente(double);
		int cadastrar_exemplar(int);
		int remover_livro(int);
		int remover_exemplar(int);
		int remover_cliente(double);
		int editar_cliente(double);
		int editar_livro(int);
		int relatorio_livro(int);
		int relatorio_livro(string);
		int relatorio_livros();
		int relatorio_cliente(double);
		int relatorio_clientes();
	private:
		Cliente clientes[100];
		int nClientes;
		Livro livros[100];
		int nLivros;
		Emprestimo emprestimos[100];
		int nEmprestimos;
};

#endif

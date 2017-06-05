#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include <iostream>
#include "Exemplar.h"
#include "Emprestimo.h"
#include "Cliente.h"
#include "Livro.h"
using namespace std;


class Biblioteca
{
	public:
		Biblioteca();
		int cadastrar_cliente();
		int realizar_emprestimo();
		int realizar_devolucao();
		int cadastrar_livros();
		Livros consultar_livros(string);
		Livros consultar_livros(int);
		Cliente consultar_clientes(double);
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
	protected:
		Cliente clientes[100];
		int nClientes;
		Livro livros[100];
		int nLivros;
		Emprestimo emprestimos[100];
		int nEmprestimos;

};

#endif

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H


class Biblioteca
{
	public:
		Biblioteca();
		int cadastrar_cliente();
		int realizar_emprestimo();
		int realizar_devolucao();
		int cadastrar_livros();
		Livros consutar_livros(string);
		Livros consultar_livros(int);
		Cliente consultar_clientes(double);
		int cadastrar_exemplar(int);
		int remover_livro(int);
		int remover_exemplar(int);
		int remover_cliente(double);
		int editar_cliente(double);
		int editar_livro();
		int relatorio_livro();
		int relatorio_livros();
		int relatorio_cliente();
		int relatorio_clientes();
	protected:
		Cliente clientes[100];
		int nClientes;
		Livro livros[100];
		int nLivros;
		Emprestimo emprestimo[100];
		int nEmprestimos;

};

#endif

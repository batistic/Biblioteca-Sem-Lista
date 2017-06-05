#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H


class Biblioteca
{
	public:
		int cadastrar_cliente();
		int realizar_emprestimo();
		int realizar_devolucao();
		int cadastrar_livros();
		Livros consutar_livros(Titulo);
		Livros consultar_livros(ID);
		Cliente consultar_clientes();
		int cadastrar_exemplar();
		int remover_livros();
		int remover_exemplar();
		int remover_cliente();
		int editar_cliente();
		int editar_livro();
		int relatorio_livro();
		int relatorio_livros();
		int relatorio_cliente();
		int relatorio_clientes();
	protected:
		Cliente clientes[100];
		int nclientes;
		Livro livros[100];
		int nlivros;
		Emprestimo emprestimo[100];
		int nemprestimos
		Exemplar exemplar[100];
		int nexemplar;

};

#endif

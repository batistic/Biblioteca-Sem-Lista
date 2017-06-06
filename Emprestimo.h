#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H
#pragma once
#include <iostream>
using namespace std;

class Emprestimo{
	public:
		Emprestimo();
		void setEmprestimo(double, int, int, int*, int*, int);
		double getCliente(void);
		int getLivro(void);
		int getExemplar(void);
		int* getDataEmprestimo(void);
		int* getDataEntrega(void);
        int verificarData(int*,int*);
		bool verificarEntrega(void);
		int entregar(int*);
	protected:
		int id;
		int id_livro;
		int id_exemplar;
		double cpf;
		int dataEntrega[3];
		int dataEmprestimo[3];
		bool entregue;
		int verificarData(int, int);
};

#endif

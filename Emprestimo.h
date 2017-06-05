#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H
#pragma once
#include <iostream>
#include "Exemplar.h"
//#include "Biblioteca.h"
#include "Cliente.h"
#include "Livro.h"
using namespace std;

class Emprestimo
{
	public:
		Emprestimo();
		Emprestimo(double, int, int, int, int, int);
		double getCliente(void);
		int getLivro(void);
		int getExemplar(void);
		int* getDataEmprestimo(void);
		int* getDataEntrega(void);
		bool verificarEntrega(void);
		int entregar(void);
	protected:
		int id;
		int id_livro;
		int id_exemplar;
		double cpf;
		int dataEntrega[3];
		int DataEmprestimo[3];
		bool entregue;
		int verificarData(int, int);
};

#endif

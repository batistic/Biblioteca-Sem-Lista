#ifndef EXEMPLAR_H
#define EXEMPLAR_H
#include <iostream>
#include "Emprestimo.h"
#include "Biblioteca.h"
#include "Cliente.h"
#include "Livro.h"
using namespace std;

class Exemplar
{
	public:
		Exemplar(int);
		void setDisp(bool);
		void setAtivo(bool);
		bool getDisp();
		bool getAtivo();
		int getID();
	protected:
		int id_ex;
		bool disp;
		bool ativo;
};

#endif

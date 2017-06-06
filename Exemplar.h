#ifndef EXEMPLAR_H
#define EXEMPLAR_H
#pragma once
#include <iostream>
using namespace std;

class Exemplar{
	public:
		Exemplar();
		void setExemplar(int);
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

#ifndef CLIENTE_H
#define CLIENTE_H
#pragma once
#include <iostream>
using namespace std;

class Cliente{
	public:
        Cliente();
        void setCliente();
		void mostrar_dados();
		int editar_cadastro();
		void adicionarEmprestimo();
		bool getAtivo();
		void setAtivo(bool);
		double get_CPF();
		string get_Nome();
		void setNome(string);
	protected:
		double CPF;
		string nome;
		char sexo; // [H] ou [M]
		int data_nasc[3]; // {dd,mm,aaaa}
		string endereco;
		double CEP;
		int telefone;
		string email;
		int emprestimos;
		bool pendencia;
		bool multa;
		int limite_emp;
		int prazo_padrao;
		int modalidade;
		bool ativo;
};

#endif

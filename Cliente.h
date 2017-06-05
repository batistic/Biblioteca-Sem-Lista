#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include "Exemplar.h"
#include "Emprestimo.h"
#include "Biblioteca.h"
#include "Livro.h"
using namespace std;

class Cliente
{
	public:

		Cliente();
				~Cliente();
				void mostrar_dados();
				int editar_cadastro();
				void adicionarEmprestimo();
				bool getAtivo();
				void setAtivo(bool);
				double get_CPF();
				string get_Nome();

	protected:
				double CPF;
				string nome;
				char sexo; // [H] ou [M]
				int data_nasc[3]; // {dd,mm,aaaa}
				string endereco;
				int CEP;
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

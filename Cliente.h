#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente
{
	public:

		Cliente();
				~Cliente();
				int editar_cadastro();
				int get_CPF();
				string get_Nome();

	protected:
				int CPF;
				string nome;
				char sexo; // [H] ou [M]
				int data_nasc[3]; // {dd,mm,aaaa}
				string endereco;
				int CEP;
				int telefone;
				string email;
				bool pendencia;
				bool multa;
				int limite_emp;
				int prazo_padrao;




};

#endif

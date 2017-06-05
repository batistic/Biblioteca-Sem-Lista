#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

class Emprestimo
{
	public:
		Emprestimo(double, int, int, int);
		double getCliente(void);
		int getExemplar(void);
		int getDataEmprestimo(void);
		int getDataEntrega(void);
		bool verificarEntrega(void);
		int entregar(void);
	private:
		int id;
		double cpf;
		int dataEntrega[3];
		int getDataEmprestimo[3];
		bool entregue;
		int verificarData(int, int);
};

#endif


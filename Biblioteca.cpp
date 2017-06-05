#include "Biblioteca.h"

Biblioteca::Biblioteca(){
	nClientes = 0;
	nLivros = 0;
	nEmprestimos = 0;
}

int Biblioteca::cadastrar_cliente(){
	clientes[nClientes] = new Cliente();
	nClientes++;
}

int Biblioteca::realizar_emprestimo(){
	double cpf_cliente;
	int id_livro, d1[3], d2[3];
	cout << "Data do emprestimo:"<<endl<<"Dia: ";
	cin >> d1[0];
	cout << "Mes: ";
	cin >> d1[1];
	cout << "Ano: ";
	cin >> d1[2];
	cout << "Data esperada da entrega:"<<endl<<"Dia: ";
	cin >> d2[0];
	cout << "Mes: ";
	cin >> d2[1];
	cout << "Ano: ";
	cin >> d2[2];
	cout << "CPF do cliente: ";
	cin >> cpf_cliente;
	cout << "ID do livro: ";
	cin >> id_livro;
	if(livros[id_livro].disponivel() > 0){
		emprestimos[nEmprestimos] = new Emprestimo(cpf_cliente,id_livro,livros[id_livro].exemplar_disp(),d1,d2,nEmprestimos);
		nEmprestimos++;
	}
	else{
		cout << "Nenhum exemplar disponivel! Tente outro dia." << endl;
	}
}

int Biblioteca::realizar_devolucao(){
	int id_livro, id_exemplar, d[3];
	cout << "ID do livro: ";
	cin >> id_livro;
	cout << "ID do exemplar: ";
	cin >> id_exemplar;
	cout << "Data da entrega:"<<endl<<"Dia: ";
	cin >> d[0];
	cout << "Mes: ";
	cin >> d[1];
	cout << "Ano: ";
	cin >> d[2];
	int i;
	for(i=0;i<nEmprestimos;i++){
		if(emprestimos[i].getLivro() == id_livro && emprestimos[i].getExemplar() == id_exemplar){
			emprestimos[i].entregar();
			break;
		}
	}
}

int Biblioteca::cadastrar_livros(){
	livros[nLivros] = new Livro(nLivros);
	nLivros++;
}

Livros Biblioteca::consutar_livros(string nome){
	int i;
	for(i=0;i<nLivros;i++){
		if(nome == livros[i].getTitulo()){
			return livros[i];
		}
	}
}

Livros Biblioteca::consultar_livros(int n){
	return livros[n];
}

Cliente Biblioteca::consultar_clientes(double n){
	int i;
	for(i=0;i<nClientes;i++){
		if(clientes[i].get_CPF() == n){
			return clientes[i];
		}
	}
}

int Biblioteca::cadastrar_exemplar(int n){
	livros[n].adicionar_exemplar();
}

int Biblioteca::remover_livro(int n){
	livros[n].setAtivo(false);
}

int Biblioteca::remover_exemplar(int n){
	int i;
	cout << "Digite o ID do exemplar: ";
	cin >> i;
	livros[n].remover_exemplar(i);
}

int Biblioteca::remover_cliente(double n){
	int i;
	for(i=0;i<nClientes;i++){
		if(n == clientes[i].get_CPF()){
			clientes[i].setAtivo(false);
			break;
		}
	}
}

int Biblioteca::editar_cliente(double n){
	int i;
	for(i=0;i<nClientes;i++){
		if(n == clientes[i].get_CPF()){
			clientes[i].editar_cadastro();
			break;
		}
	}
}

int Biblioteca::editar_livro(){
	
}

int Biblioteca::relatorio_livro(){
	
}

int Biblioteca::relatorio_livros(){
	
}

int Biblioteca::relatorio_cliente(){
	
}

int Biblioteca::relatorio_clientes(){
	
}


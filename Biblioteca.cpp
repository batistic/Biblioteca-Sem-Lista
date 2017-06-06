#include <iostream>
#include "Biblioteca.h"

#include "Cliente.cpp"
#include "Livro.cpp"
#include "Emprestimo.cpp"
#include "Exemplar.cpp"

using namespace std;

Biblioteca::Biblioteca(){
	nClientes = 0;
	nLivros = 0;
	nEmprestimos = 0;
}

int Biblioteca::cadastrar_cliente(){
	clientes[nClientes].setCliente();
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
		emprestimos[nEmprestimos].setEmprestimo(cpf_cliente,id_livro,livros[id_livro].exemplar_disp(),d1,d2,nEmprestimos);
		nEmprestimos++;
		consultar_cliente(cpf_cliente).adicionarEmprestimo();
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
			emprestimos[i].entregar(d);
			break;
		}
	}
}

int Biblioteca::cadastrar_livro(){
	livros[nLivros].setLivro(nLivros);
	nLivros++;
}

Livro Biblioteca::consultar_livro(string nome){
	int i;
	for(i=0;i<nLivros;i++){
		if(nome == livros[i].getTitulo() && livros[i].getAtivo() == true){
			return livros[i];
		}
	}
}

Livro Biblioteca::consultar_livro(int n){
	return livros[n];
}

Cliente Biblioteca::consultar_cliente(double n){
	int i;
	for(i=0;i<nClientes;i++){
		if(clientes[i].get_CPF() == n && clientes[i].getAtivo() == true){
			return clientes[i];
		}
	}
}

int Biblioteca::cadastrar_exemplar(int n){
	livros[n].adicionar_exemplar();
}

int Biblioteca::remover_livro(int n){
	nLivros--;
	int i;
	for(i=n;i<nLivros;i++){
		livros[i] = livros[i+1];
	}
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
		if(clientes[i].getCPF() == n){
			id = i;
			break;
		}
	}
	nClientes--;
	for(i=id;i<nClientes;i++){
		clientes[i] = clientes[i+1];
	}
}

int Biblioteca::editar_cliente(double n){
	consultar_cliente(n).editar_cadastro();
}

int Biblioteca::editar_livro(int n){
	livros[n].editar_dados();
}

int Biblioteca::relatorio_livro(int n){
	livros[n].mostrar_dados();
}

int Biblioteca::relatorio_livro(string nome){
	consultar_livro(nome).mostrar_dados();
}

int Biblioteca::relatorio_livros(){
	cout << "Quantidade de livros diferentes: " << nLivros << endl;
	int i, ex=0, disp=0, popular, maior=-1;
	for(i=0;i<nLivros;i++){
		ex += livros[i].getQtd_exemplares();
		disp += livros[i].disponivel();
		if(livros[i].getEmprestimos() > maior){
			popular = i;
			maior = livros[i].getEmprestimos();
		}
	}
	cout << "Quantidade de exemplares: " << ex << endl;
	cout << "Exemplares em emprestimo: " << (ex-disp) << endl;
	cout << "Livro mais emprestado: " << livros[popular].getTitulo() << " (" << maior << ")" << endl ;


}

int Biblioteca::relatorio_cliente(double n){
	Cliente aux = consultar_cliente(n);
	aux.mostrar_dados();
	int i;
	for(i=0;i<nEmprestimos;i++){
		if(emprestimos[i].getCliente() == n){
			cout << "Livro: " << livros[emprestimos[i].getLivro()].getTitulo() << endl;
			cout << "Data do emprestimo: "  << emprestimos[i].getDataEmprestimo()[0] << "/" << emprestimos[i].getDataEmprestimo()[1] << "/" << emprestimos[i].getDataEmprestimo()[2] << endl;
			if(emprestimos[i].verificarEntrega() == true)
				cout << "Entregue" << endl;
			else{
				cout << "Nao entregue. Data maxima de entrega: " << emprestimos[i].getDataEntrega()[0] << "/" << emprestimos[i].getDataEntrega()[1] << "/" << emprestimos[i].getDataEntrega()[2] << endl;
			}
		}
	}
}

int Biblioteca::relatorio_clientes(){
	cout << "Numero de clientes cadastrados: " << nClientes << endl;
	int i;
}

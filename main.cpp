#include <iostream>
#include "Exemplar.h"
#include "Emprestimo.h"
#include "Biblioteca.h"
#include "Cliente.h"
#include "Livro.h"
using namespace std;

Biblioteca biblioteca;
Emprestimo emprestimo;
biblioteca.cadastrar_cliente(cliente);

int main(){
  int aux;
  int id;
  double cpf_cliente;
  string nome_livro;
  do{
   cout<<"1. Emprestimo"<<endl;
   cout<<"2. Devolucao"<<endl;
   cout<<"3. Cadastrar cliente"<<endl;
   cout<<"4. Cadastrar livro"<<endl;
   cout<<"5. Consultar livro"<<endl;
   cout<<"6. Consultar cliente"<<endl;
   cout<<"7. Cadastrar exemplar"<<endl;
   cout<<"8. Editar livro"<<endl;
   cout<<"9. Editar cliente"<<endl;
   cout<<"10. Excluir cliente"<<endl;
   cout<<"11. Excluir livro"<<endl;
   cout<<"12. Excluir exemplar"<<endl;
   cout<<"13. Relatorios" <<endl;
   cout<<"0. Sair"<<endl;
   cin >> aux;
}
while(aux!=0);

 switch (aux){
   case 1 :
    biblioteca.realizar_emprestimo();
    break;
  case 2 :
    biblioteca.realizar_devolucao();
    break;
  case 3 :
    biblioteca.cadastrar_cliente();
    break;
  case 4 :
    biblioteca.cadastrar_livro();
    break;
  case 5 :
    int aux_l

    int nome_livro;
      cout<<"1. Por ID"<<endl;
      cout<<"2. Por Nome"<<endl;
      cin >> aux_l;
    if (aux_l==1){
      std::cout << "Digite o ID: ";
      std::cin >> id;
      biblioteca.consulta_livro(id);
    }
      else if(aux_l==2){
        std::cout << "Digite o nome do livro: ";
        std::cin >> nome_livro;
        biblioteca.consulta_livro(nome_livro);
    }
    break;
  case 6 :

    std::cout << "Digite o CPF do cliente: ";
    std::cin >> cpf_cliente;
    biblioteca.cosulta_cliente(cpf_cliente);
    break;
  case 7 :
  std::cout << "Digite o ID do livro: ";
  std::cin >> id;
    biblioteca.cadastrar_exemplar(id);
    break;
  case 8 :
    std::cout << "Digite o CPF do cliente: ";
    std::cin >> cpf_cliente;
    	biblioteca.editar_cliente(cpf_cliente);
    break;
  case 9 :
   std::cout << "Digite o ID do livro: ";
   std::cin >> id;
    biblioteca.editar_livro(id);
    break
  case 10 :
  std::cout << "Digite o ID do livro: ";
  std::cin >> id;
    biblioteca.remover_livro(id);
    break;
  case 11 :
    std::cout << "Digite o CPF do cliente: ";
    std::cin >> cpf_cliente;
    biblioteca.remover_cliente(cpf_cliente);
    break;
  case 12 :
    std::cout << "Digite o ID do livro: ";
    std::cin >> id;
    biblioteca.remover_exemplar(id);
    break;
	case 13 :
		int aux_l;
		int aux_g;
		std::cout << "1. Gerar relatorio de livro" << '\n';
		std::cout << "2. Gerar relatorio de livros" << '\n';
		std::cout << "3. Gerar relatorio de cliente" << '\n';
		std::cout << "4. Gerar relatorio de clientes" << '\n';
		cout<<": ";
		std::cin >> aux_g;
		switch (aux_g) {
			case 1:
			int nome_livro;
				cout<<"1. Por ID"<<endl;
				cout<<"2. Por Nome"<<endl;
				cin >> aux_l;
			if (aux_l==1){
				std::cout << "Digite o ID: ";
				std::cin >> id;
				biblioteca.relatorio_livro(id);
			}
				else if(aux_l==2){
					std::cout << "Digite o nome do livro: ";
					std::cin >> nome_livro;
					biblioteca.relatorio_livro(nome_livro);
			} break;

			case 2:
				biblioteca.relatorio_livros();
				break;
			case 3:
				std::cout << "Digite o CPF do cliente: ";
				std::cin >> cpf_cliente;
				biblioteca.relatorio_cliente(cpf_cliente);
				break;
			case 4:
				biblioteca.relatorio_clientes();
				break;

		}
  case 0 :
    break;
 }
return 0;
}

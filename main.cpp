#include <iostream>
#include <string>
#include <stdlib.h>
#include "Biblioteca.cpp"
using namespace std;

int main(){
    Biblioteca biblio;
    int aux;
      int aux_l;
      int aux_g;

    int id;
    double cpf_cliente;
    string nome_livro;
    do{
        //system("cls");
        cout<<"Sistema de Biblioteca"<<endl<<endl;
        cout<<"1. Emprestimo"<<endl;
        cout<<"2. Devolucao"<<endl;
        cout<<"3. Cadastrar cliente"<<endl;
        cout<<"4. Cadastrar livro"<<endl;
        cout<<"5. Consultar livro"<<endl;
        cout<<"6. Consultar cliente"<<endl;
        cout<<"7. Cadastrar exemplar"<<endl;
        cout<<"8. Editar cliente"<<endl;
        cout<<"9. Editar livro"<<endl;
        cout<<"10. Excluir cliente"<<endl;
        cout<<"11. Excluir livro"<<endl;
        cout<<"12. Excluir exemplar"<<endl;
        cout<<"13. Relatorios" <<endl;
        cout<<"0. Sair"<<endl<<endl;
        cout<<": ";
        cin >> aux;

        switch (aux){
           case 1 :
            biblio.realizar_emprestimo();
            //system("pause");
            break;
          case 2 :
            biblio.realizar_devolucao();
            //system("pause");
            break;
          case 3 :
            biblio.cadastrar_cliente();
            //system("pause");
            break;
          case 4 :
            biblio.cadastrar_livro();
            //system("pause");
            break;
          case 5 :
              cout<<"1. Por ID"<<endl;
              cout<<"2. Por Nome"<<endl;
              cin >> aux_l;
            if (aux_l==1){
              std::cout << "Digite o ID: ";
              std::cin >> id;
              biblio.consultar_livro(id).mostrar_dados();
            }
            else if(aux_l==2){
                std::cout << "Digite o nome do livro: ";
                std::cin >> nome_livro;
                biblio.consultar_livro(nome_livro).mostrar_dados();
            }
            //system("pause");
            break;
          case 6 :
            std::cout << "Digite o CPF do cliente: ";
            std::cin >> cpf_cliente;
            biblio.consultar_cliente(cpf_cliente).mostrar_dados();
            //system("pause");
            break;
          case 7 :
            std::cout << "Digite o ID do livro: ";
            std::cin >> id;
            biblio.cadastrar_exemplar(id);
            //system("pause");
            break;
          case 8 :
            std::cout << "Digite o CPF do cliente: ";
            std::cin >> cpf_cliente;
            biblio.editar_cliente(cpf_cliente);
            //system("pause");
            break;
          case 9 :
            std::cout << "Digite o ID do livro: ";
            std::cin >> id;
            biblio.editar_livro(id);
            //system("pause");
            break;
          case 10 :
            std::cout << "Digite o CPF do cliente: ";
            std::cin >> cpf_cliente;
            biblio.remover_cliente(cpf_cliente);
            //system("pause");
            break;
          case 11 :
            std::cout << "Digite o ID do livro: ";
            std::cin >> id;
            biblio.remover_livro(id);
            //system("pause");
            break;
          case 12 :
            std::cout << "Digite o ID do livro: ";
            std::cin >> id;
            biblio.remover_exemplar(id);
            //system("pause");
            break;
        	case 13 :
        		std::cout << "1. Gerar relatorio de livro" << '\n';
        		std::cout << "2. Gerar relatorio de livros" << '\n';
        		std::cout << "3. Gerar relatorio de cliente" << '\n';
        		std::cout << "4. Gerar relatorio de clientes" << '\n';
        		cout<<": ";
        		std::cin >> aux_g;
        		switch (aux_g) {
        			case 1:
        				cout<<"1. Por ID"<<endl;
        				cout<<"2. Por Nome"<<endl;
        				cin >> aux_l;
        			if (aux_l==1){
        				std::cout << "Digite o ID: ";
        				std::cin >> id;
        				biblio.relatorio_livro(id);
        			}
        				else if(aux_l==2){
        					std::cout << "Digite o nome do livro: ";
        					std::cin >> nome_livro;
        					biblio.relatorio_livro(nome_livro);
        			} break;

        			case 2:
        				biblio.relatorio_livros();
        				break;
        			case 3:
        				std::cout << "Digite o CPF do cliente: ";
        				std::cin >> cpf_cliente;
        				biblio.relatorio_cliente(cpf_cliente);
        				break;
        			case 4:
        				biblio.relatorio_clientes();
        				break;

        		}
                //system("pause");
                break;
          case 0 :
            break;
         }
     }while(aux!=0);
return 0;
}

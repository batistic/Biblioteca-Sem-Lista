#include <iostream>
#include <stdio.h>
#include "Cliente.h"
using namespace std;

Cliente::Cliente(){
    ativo = false;
}

void Cliente::setCliente(){
  std::cout << "CPF: ";
  std::cin >> CPF;
  std::cout << "Nome: ";
  setbuf(stdin,NULL);
  std::getline(cin,nome);
  setbuf(stdin,NULL);
  //std::cin >> nome;
  std::cout << "Sexo (H ou M): ";
  std::cin >> sexo;
  std::cout << "Dia de nascimento: ";
  std::cin >> data_nasc[0];
  std::cout << "Mes de nascimento: ";
  std::cin >> data_nasc[1];
  std::cout << "Ano de nascimento: ";
  std::cin >> data_nasc[2];
  std::cout << "CEP: ";
  std::cin >> CEP;
  std::cout << "Endereco: ";
  setbuf(stdin,NULL);
  std::getline(cin,endereco);
  setbuf(stdin,NULL);
  //std::cin >> endereco;
  std::cout << "Telefone: ";
  std::cin >> telefone;
  std::cout << "Email: ";
  setbuf(stdin,NULL);
  std::getline(cin,email);
  setbuf(stdin,NULL);
  //std::cin >> email;
  int modalidade = 4;
  while(modalidade < 1 || modalidade >3){
  std::cout << "Modalidade: "<<'\n'<< "1. Professor" << '\n' << "2. TA" << '\n' << "3. Aluno"<<endl;
  std::cin >> modalidade;

    if(modalidade == 1){
    limite_emp = 5;
    prazo_padrao = 14;
  }
  else if(modalidade == 2){
    limite_emp = 4;
    prazo_padrao = 14;
  }
  else if(modalidade == 3){
    limite_emp = 3;
    prazo_padrao = 7;
  }

  else{
    std::cout << "Resposta invalida. Insira novamente o numero referente a modalidade." << '\n';
    }
  }
  pendencia = 0;
  multa = 0;
  ativo = true;
}

void Cliente::mostrar_dados(){
  std::cout << "CPF: " << CPF << '\n';
  std::cout << "Nome: " << nome << '\n';
  std::cout << "Sexo: " << sexo << '\n';
  std::cout << "4. Data de nascimento: " << data_nasc[0] << "/" << data_nasc[1] << "/" << data_nasc[2] << '\n';
  std::cout << "CEP: " << CEP << '\n';
  std::cout << "Endereco: " << endereco << '\n';
  std::cout << "Telefone: " << telefone << '\n';
  std::cout << "Email: " << email << '\n';
  std::cout << "Emprestimos: " << emprestimos << '\n';
}

int Cliente::editar_cadastro(){
  int resposta = 9;
  string n;
  std::cout << "1. CPF: " << CPF << '\n';
  std::cout << "2. Nome: " << nome << '\n';
  std::cout << "3. Sexo: " << sexo << '\n';
  std::cout << "4. Data de nascimento: " << data_nasc[0] << "/" << data_nasc[1] << "/" << data_nasc[2] << '\n';
  std::cout << "5. CEP: " << CEP << '\n';
  std::cout << "6. Endereco: " << endereco << '\n';
  std::cout << "7. Telefone: " << telefone << '\n';
  std::cout << "8. Email: " << email << '\n';
  std::cout << "Insira o numero referente a informacao que deseja editar ou digite 0 para Sair"<<endl;
  std::cin >> resposta;
  while(resposta != 0){
  if(resposta == 1){
    std::cout << "Insira o novo CPF: ";
    std::cin >> CPF;
  }
  else if (resposta == 2){
    std::cout << "Insira o novo nome: ";
    std::cin >> n;
    setNome(n);
    setbuf(stdin,NULL);
  }
  else if (resposta == 3){
    std::cout << "Insira o novo sexo: ";
    std::cin >> sexo;
  }
  else if (resposta == 4){
    std::cout << "Insira o novo dia da data de nascimento: ";
    std::cin >> data_nasc[0];
    std::cout << "Insira o novo mes da data de nascimento: ";
    std::cin >> data_nasc[1];
    std::cout << "Insira o novo ano da data de nascimento: ";
    std::cin >> data_nasc[2];
  }
  else if (resposta == 5){
    std::cout << "Insira o novo CEP: ";
    std::cin >> CEP;
  }
  else if (resposta == 6){
    std::cout << "Insira o novo endereco: ";
    std::cin >> endereco;
  }
  else if (resposta == 7){
    std::cout << "Insira o novo telefone: ";
    std::cin >> telefone;
  }
  else if (resposta == 8){
    std::cout << "Insira o novo email: ";
    std::cin >> email;
  }
  else{
    //system("cls");
    std::cout << "Opcao invalida. Insira novamente o numero referente a informacao que deseja editar." << '\n';
    std::cout << "1. CPF: " << CPF << '\n';
  	std::cout << "2. Nome: " << nome << '\n';
	std::cout << "3. Sexo: " << sexo << '\n';
	std::cout << "4. Data de nascimento: " << data_nasc[3] << '\n';
	std::cout << "5. CEP: " << CEP << '\n';
	std::cout << "6. Endereco: " << endereco << '\n';
	std::cout << "7. Telefone: " << telefone << '\n';
	std::cout << "8. Email: " << email << '\n';
  }
  setbuf(stdin,NULL);
    std::cout << "Insira o numero referente a informacao que deseja editar ou digite 0 para Sair"<<endl;
    std::cin >> resposta;
  }
  return 0;
}

void Cliente::adicionarEmprestimo(){
	emprestimos++;
}

bool Cliente::getAtivo(){
  return ativo;
}

void Cliente::setAtivo(bool at){
  ativo = at;
}

double Cliente::get_CPF(){
  return CPF;
}
string Cliente::get_Nome(){
  return nome;
}

void Cliente::setNome(string n){
  nome = n;
}

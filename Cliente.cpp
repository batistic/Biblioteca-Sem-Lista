#include "Cliente.h"


Cliente::Cliente(){
  std::cout << "CPF: ";
  std::cin >> this.CPF;
  std::cout << "Nome: ";
  std::cin >> this.nome;
  std::cout << "Sexo: ";
  std::cin >> this.sexo;
  std::cout << "Dia de nascimento: ";
  std::cin >> this.data_nasc[0];
  std::cout << "Mes de nascimento: ";
  std::cin >> this.data_nasc[1];
  std::cout << "Ano de nascimento: ";
  std::cin >> this.data_nasc[2];
  std::cout << "CEP: ";
  std::cin >> this.CEP;
  std::cout << "Endereco: ";
  std::cin >> this.endereco;
  std::cout << "Telefone: ";
  std::cin >> this.telefone;
  std::cout << "Email: ";
  std::cin >> this.email;
  this.modalidade = 4;
  while(this.modalidade < 1 || this.modalidade >3){
  std::cout << "Modalidade: "<<'\n'<< "1. Professor" << '\n' << "2. TA" << '\n' << "3. Aluno";
  std::cin >> this.modalidade;

    if(this.modalidade == 1){
    this.limite_emp = 5;
    this.prazo_padrao = 14;
  }
  else if(this.modalidade == 2){
    this.limite_emp = 4;
    this.prazo_padrao = 14;
  }
  else if(this.modalidade == 3){
    this.limite_emp = 3;
    this.prazo_padrao = 7;
  }

  else{
    std::cout << "Resposta invalida. Insira novamente o numero referente a modalidade." << '\n';
    }
  }
  this.pendencia = 0;
  this.multa = 0;
}


int editar_cadastro(){
  int resposta = 9;
  std::cout << "1. CPF: " << this.CPF << '\n';
  std::cout << "2. Nome: " << this.nome << '\n';
  std::cout << "3. Sexo: " << this.sexo << '\n';
  std::cout << "4. Data de nascimento: " << this.data_nasc[3] << '\n';
  std::cout << "5. CEP: " << this.CEP << '\n';
  std::cout << "6. Endereco: " << this.endereco << '\n';
  std::cout << "7. Telefone: " << this.telefone << '\n';
  std::cout << "8. Email: " << this.email << '\n';
  std::cout << "Insira o numero referente a informacao que deseja editar ou "0" Sair";
  std::cin >> resposta;
  while(resposta != 0){
  if(resposta == 1){
    std::cout << "Insira o novo CPF: ";
    std::cin >> this.CPF;
  }
  else if (resposta == 2){
    std::cout << "Insira o novo nome: ";
    std::cin >> this.nome;
  }
  else if (resposta == 3){
    std::cout << "Insira o novo sexo: ";
    std::cin >> this.sexo;
  }
  else if (resposta == 4){
    std::cout << "Insira o novo dia da data de nascimento: ";
    std::cin >> this.data_nasc[0];
    std::cout << "Insira o novo mes da data de nascimento: ";
    std::cin >> this.data_nasc[1];
    std::cout << "Insira o novo ano da data de nascimento: ";
    std::cin >> this.data_nasc[2];
  }
  else if (resposta == 5){
    std::cout << "Insira o novo CEP: ";
    std::cin >> this.CEP;
  }
  else if (resposta == 6){
    std::cout << "Insira o novo endereco: ";
    std::cin >> this.endereco;
  }
  else if (resposta == 7){
    std::cout << "Insira o novo telefone: ";
    std::cin >> this.telefone;
  }
  else if (resposta == 8){
    std::cout << "Insira o novo email: ";
    std::cin >> this.email;
  }
  else{
    system("cls");
    std::cout << "Opcao invalida. Insira novamente o numero referente a informacao que deseja editar." << '\n';
    std::cout << "Insira o numero referente a informacao que deseja editar ou "0" Sair";
  }
  }
  return 0;
}

int get_CPF(){
  return this.CPF;
}
string get_Nome(){
  return this.nome;
}

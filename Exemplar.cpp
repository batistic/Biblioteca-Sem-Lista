#include <iostream>
#include "Exemplar.h"
using namespace std;

Exemplar::Exemplar(){

}

void Exemplar::setExemplar(int id){
	id_ex = id;
	disp = true;
	ativo = true;
}

void Exemplar::setDisp(bool dis){
	disp = dis;
}

void Exemplar::setAtivo(bool at){
	ativo = at;
}

bool Exemplar::getDisp(){
	return disp;
}

bool Exemplar::getAtivo(){
	return ativo;
}

int Exemplar::getID(){
	return id_ex;
}

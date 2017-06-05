#include "Exemplar.h"

Exemplar::Exemplar(int id){
	id_ex = id;
	disp = true;
	ativo = true;
}

void Exemplar::setDisp(bool dis){
	this.disp = dis;
}

void Exemplar::setAtivo(bool at){
	this.ativo = at;
}

bool Exemplar::getDisp(){
	return this.disp;
}

bool Exemplar::getAtivo(){
	return this.ativo;
}

int Exemplar::getID(){
	return this.id_ex;
}


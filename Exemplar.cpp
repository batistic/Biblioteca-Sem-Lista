#include "Exemplar.h"

Exemplar::Exemplar(int id){
	id_ex = id;
	disp = true;
}

void Exemplar::setDisp(bool dis){
	this.disp = dis;
}

bool Exemplar::getDisp(){
	return this.disp;
}

int Exemplar::getID(){
	return this.id_ex;
}


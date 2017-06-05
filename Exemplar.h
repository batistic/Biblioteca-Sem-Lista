#ifndef EXEMPLAR_H
#define EXEMPLAR_H

class Exemplar
{
	public:
		Exemplar(int);
		void setDisp(bool);
		bool getDisp();
		int getID();
	protected:
		int id_ex;
		bool disp;
};

#endif

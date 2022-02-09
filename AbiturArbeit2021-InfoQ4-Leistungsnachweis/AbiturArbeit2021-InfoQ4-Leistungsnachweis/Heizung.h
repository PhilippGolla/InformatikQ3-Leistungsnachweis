#pragma once
#include Komponente.h
class Heizung : public virtual Komponente
{
public:
	static const int MAXTEMPERATUR = 800;
	Heizung(char kennung);
	char* genCmdReadTemp();
	char* genCmdSetTemp(int temp);


};


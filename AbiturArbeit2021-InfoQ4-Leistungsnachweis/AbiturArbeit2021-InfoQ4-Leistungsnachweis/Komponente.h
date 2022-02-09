#pragma once
 virtual class Komponente
{
private:
	static const char EIN = 0x0F;
	static const char AUS = 0xF0;
	protected char kennung;
public:
	static const char FC_WERTSETZEN = 0x06;
	static const char FC_WERTLESEN = 0x03;
	static const char FC_SCHALTEN = 0x05;
	virtual ~Komponente() = 0;
	Kommponente(char kennung);
	char* genCmdEinschalten();
	char* genCmdAusschalten();
};


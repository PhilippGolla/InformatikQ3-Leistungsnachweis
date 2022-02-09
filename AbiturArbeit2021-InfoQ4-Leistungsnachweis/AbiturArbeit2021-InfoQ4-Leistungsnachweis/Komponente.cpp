#include "Komponente.h"
#include "ByteBuffer.h"

Komponente::Kommponente(char kennung)
{
	this.kennung = kennung;
}

char* Komponente::genCmdEinschalten()
{
	ByteBuffer cmd = ByteBuffer.allocate(7);
	cmd.put(kennung);
	cmd.put(FC_SCHALTEN);
	cmd.put(5, EIN);
	return cmd.array();
}

char* Komponente::genCmdAusschalten()
{
	ByteBuffer cmd = ByteBuffer.allocate(7);
	cmd.put(kennung);
	cmd.put(FC_SCHALTEN);
	cmd.put(5, AUS);
	return cmd.array();
}

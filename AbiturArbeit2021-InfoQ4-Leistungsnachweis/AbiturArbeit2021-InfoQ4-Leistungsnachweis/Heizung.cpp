#include "Heizung.h"

Heizung::Heizung(char kennung)
{
	this.kennung = kennung;
}

char* Heizung::genCmdReadTemp()
{
	ByteBuffer cmd = ByteBuffer.allocate(7);
	cmd.put(kennung);
	cmd.put(FC_WERTLESEN);
	return cmd.array();
}

char* Heizung::genCmdSetTemp(int temp)
{
	ByteBuffer cmd = ByteBuffer.allocate(7);
	cmd.put(kennung);
	cmd.putInt(temp);
	return cmd.array();
}

#pragma once
class Heizung
{
private:
	static const int MAXTEMPERATUR = 800;
public:
	char genCmdReadTemp();
	char genCmdSetTemp();
	Heizung();

};


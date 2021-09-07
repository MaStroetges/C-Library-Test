#pragma once

#include "DatenStruktur.h"

struct DatenStruktur1_A
{
	int a;
	int b;
	DatenStruktur1_A(int _a, int _b) {
		a = _a;
		b = _b;
	}
};

class Lib1
{
public:
	// Methode mit getrennten Strukturen:
	int SummiereZahlen(DatenStruktur1_A daten);
	// Methode mit gemeinsamen Strukturen:
	int SummiereZahlen2(DatenStruktur daten);
};


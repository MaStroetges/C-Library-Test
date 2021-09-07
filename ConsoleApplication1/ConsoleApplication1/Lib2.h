#pragma once

#include "DatenStruktur.h"

struct DatenStruktur1_B
{
	int a;
	int b;
	DatenStruktur1_B(int _a, int _b) {
		a = _a;
		b = _b;
	}
};

class Lib2
{
public:
	// Methode mit getrennten Strukturen:
	int SummiereZahlen(DatenStruktur1_B daten);
	// Methode mit gemeinsamen Strukturen:
	int SummiereZahlen2(DatenStruktur daten);
};


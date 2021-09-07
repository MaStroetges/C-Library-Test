#include "Lib1.h"


// Methode mit gemeinsamen Strukturen:
int Lib1::SummiereZahlen(DatenStruktur1_A daten)
{
	return daten.a + daten.b;
}

// Methode mit getrennten Strukturen:
int Lib1::SummiereZahlen2(DatenStruktur daten)
{
	return daten.a + daten.b;
}
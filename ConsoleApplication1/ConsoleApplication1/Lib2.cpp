#include "Lib2.h"


// Methode mit gemeinsamen Strukturen:
int Lib2::SummiereZahlen(DatenStruktur1_B daten)
{
	return daten.a + daten.b;
}

// Methode mit getrennten Strukturen:
int Lib2::SummiereZahlen2(DatenStruktur daten)
{
	return daten.a + daten.b;
}
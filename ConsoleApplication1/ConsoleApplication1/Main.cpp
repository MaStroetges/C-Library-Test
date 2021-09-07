// ConsoleApplication1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include "Lib1.h"
#include "Lib2.h"
#include "DatenStruktur.h"

using namespace std;

int main()
{
	// zwei Klassen/"Bibliotheken" als Objekte anlegen:
	Lib1 lib1;
	Lib2 lib2;


	// ######## Mögliche Lösung: eine Grundbibliothek mit
	// ######## der Struktur, die von allen anderen
	// ######## Bibliotheken dann eingebunden wird:

	cout << "Getrennte Strukturen:" << endl;

	// objekte von Strukturen erstellen
	DatenStruktur1_A struktur1 = DatenStruktur1_A(4, 5);
	DatenStruktur1_B struktur2 = DatenStruktur1_B(2,9);

	// Summieren und ausgeben:
	cout << lib1.SummiereZahlen(struktur1) << endl;
	cout << lib2.SummiereZahlen(struktur2) << endl << endl;
	//// Folgendes verursacht einen Kompilierungsfehler, weil unterschiedliche Strukturen:
//	cout << lib2.SummiereZahlen(struktur1) << endl;


	//  Mögliche Lösung: eine Grundbibliothek mit
	//  der Struktur, die von allen anderen
	//  Bibliotheken dann eingebunden wird:

	cout << "Gemeinsamme Strukturen (Basisbibliothek):" << endl;
	DatenStruktur strukturGeneral = DatenStruktur(1, 3);

	// Summieren und ausgeben:
	cout << lib1.SummiereZahlen2(strukturGeneral) << endl;
	cout << lib2.SummiereZahlen2(strukturGeneral) << endl;

}

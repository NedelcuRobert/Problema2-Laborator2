#include "studenti.h"
#include <iostream>

using namespace std;

void citire_date_student(int numar_studenti) {
	for (int i = 0;i < numar_studenti;i++) {
		cout << "Studentul "<<i+1 << ":" << endl;
		cout << "Nume:";
		cin >> student[i].nume;
		cout << "Prenume:";
		cin >> student[i].prenume;
		cout << "Oras:";
		cin >> student[i].adresa.oras;
		cout << "Cod oras:";
		cin >> student[i].adresa.cod_oras;
		cout << "Strada:";
		cin >> student[i].adresa.strada;
		cout << "Numar locuinta:";
		cin >> student[i].adresa.numar_locuinta;
		cout << "Numar telefon prefix:";
		cin >> student[i].numar_telefon.prefix;
		cout << "Numar telefon initial:";
		cin >> student[i].numar_telefon.nr_telefon;
		cout << "Cod Facultate:";
		cin >> student[i].facultate.cod;
		cout << "Varsta:";
		cin >> student[i].varsta_student.varsta;
		cout << "Note:" << endl;
		for (int j = 0;j < 10;j++) {
			cout << "Nota " << j + 1 << ":";
			cin >> student[i].note.nota[j];
		}
		cout << "Media de promovare:";
		cin >> student[i].media_promovare.medie;
		cout << "Numar absente:";
		cin >> student[i].numar_absente.nr_absente;
	}
	
}

void afisare_date_student(int numar_studenti) {
	cout << endl << "Studenti grupa:" << endl;
	for (int i = 0;i < numar_studenti;i++) {
		cout << endl << "Student:" << student[i].nume << " " << student[i].prenume << endl;
		cout << "Adresa:" << student[i].adresa.oras << " " << student[i].adresa.cod_oras << " " << student[i].adresa.strada << " " << student[i].adresa.numar_locuinta << endl;
		cout << "Numar telefon:" << student[i].numar_telefon.prefix << student[i].numar_telefon.nr_telefon << endl;
		cout << "Cod facultate:" << student[i].facultate.cod << endl;
		cout << "Varsta:" << student[i].varsta_student.varsta << endl;
		cout << "Note:";
		for (int j = 0;j < 10;j++) {
			cout << student[i].note.nota[j] << "  ";
		}
		cout << endl << "Media de promovare:" << student[i].media_promovare.medie << endl;
		cout << "Numar absente:" << student[i].numar_absente.nr_absente << endl;
	}
}

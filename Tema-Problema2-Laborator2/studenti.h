
struct {
	char nume[20];
	char prenume[20];

	struct {
		char oras[15];
		int cod_oras;
		char strada[15];
		int numar_locuinta;
	}adresa;

	struct {
		int prefix;
		long nr_telefon;
	}numar_telefon;

	struct {
		char cod[3];
	}facultate;

	struct {
		int varsta;
	}varsta_student;

	struct {
		int nota[10];
	}note;

	struct {
		float medie;
	}media_promovare;

	struct {
		int nr_absente;
	}numar_absente;
}student[30];

void citire_date_student(int numar_studenti);
void afisare_date_student(int numar_studenti);
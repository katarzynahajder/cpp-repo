#include <iostream>
using namespace std;
class Uczen
{
public:
	string imie, nazwisko;
	int wiek, id;
	void wpisz_dane_ucznia()
	{
		cout << "\nDANE UCZNIA:" << endl;
		cout << "Imie: " << imie << endl;
		cout << "Nazwisko: " << nazwisko << endl;
		cout << "Wiek: " << wiek << endl;
		cout << "Numer identyfikatora: " << id << endl;
	}
};
class Informatyk : public Uczen
{
public:
	void wpisz_dane_zaw()
	{
		cout << "\nDANE ZAWODU:" << endl;
		cout << "Nazwa zawodu: Informatyk" << endl;
		cout << "Potrzebne narzedzia: Klawiatura, mysz, zestaw narzedzi." << endl;
	}
	void uczen_pracuje()
	{
		cout << "Praca ucznia: Tworzenie i projektowanie stron internetowych oraz baz danych, wymienianie czesci komputerowych." << endl << endl;
	}
	void kasowanie_ucznia()
	{
		imie = "-";
		nazwisko = "-";
		wiek = 0;
		id = 0;
	}
};
class Mechanik : public Uczen
{
public:
	void wpisz_dane_zaw()
	{
		cout << "\nDANE ZAWODU:" << endl;
		cout << "Nazwa zawodu: Mechanik" << endl;
		cout << "Potrzebne narzedzia: Zestaw narzedzi naprawczych." << endl;
	}
	void uczen_pracuje()
	{
		cout << "Praca ucznia: Diagnozowanie pojazdu, wykonywanie wszelakich napraw." << endl << endl;
	}
	void kasowanie_ucznia()
	{
		imie = "-";
		nazwisko = "-";
		wiek = 0;
		id = 0;
	}
};
class Fryzjer : public Uczen
{
public:
	void wpisz_dane_zaw()
	{
		cout << "\nDANE ZAWODU:" << endl;
		cout << "Nazwa zawodu: Fryzjer" << endl;
		cout << "Potrzebne narzedzia: Prostownica, suszarka, paleta farb." << endl;
	}
	void uczen_pracuje()
	{
		cout << "Praca ucznia: Stylizacje i koloryzacje wlosow." << endl << endl;
	}
	void kasowanie_ucznia()
	{
		imie = "-";
		nazwisko = "-";
		wiek = 0;
		id = 0;
	}
};
int main()
{
	int x;
	string odp;
	for (;;)
	{
		cout << "Wybierz klase dla ucznia. Informatyk-1, Mechanik-2, Fryzjer-3. Chcac zakonczyc program, wpisz 0: ";
		cin >> x;
		if (x == 0)break;
		switch (x)
		{
		case 1:
		{
			cout << "\n-- Witaj w klasie 'Informatyk'! --\n";
			Informatyk uczen1;
			cout << "Podaj imie ucznia: ";
			cin >> uczen1.imie;
			cout << "Podaj nazwisko ucznia: ";
			cin >> uczen1.nazwisko;
			cout << "Podaj wiek ucznia: ";
			cin >> uczen1.wiek;
			cout << "Podaj numer identyfikatora ucznia: ";
			cin >> uczen1.id;
			uczen1.wpisz_dane_ucznia();
			uczen1.wpisz_dane_zaw();
			uczen1.uczen_pracuje();
			uczen1.kasowanie_ucznia();
			break;
		}
		case 2:
		{
			cout << "\n-- Witaj w klasie 'Mechanik'! --\n";
			Mechanik uczen2;
			cout << "Podaj imie ucznia: ";
			cin >> uczen2.imie;
			cout << "Podaj nazwisko ucznia: ";
			cin >> uczen2.nazwisko;
			cout << "Podaj wiek ucznia: ";
			cin >> uczen2.wiek;
			cout << "Podaj numer identyfikatora ucznia: ";
			cin >> uczen2.id;
			uczen2.wpisz_dane_ucznia();
			uczen2.wpisz_dane_zaw();
			uczen2.uczen_pracuje();
			uczen2.kasowanie_ucznia();
			break;
		}
		case 3:
		{
			cout << "\n-- Witaj w klasie 'Fryzjer'! --\n";
			Fryzjer uczen3;
			cout << "Podaj imie ucznia: ";
			cin >> uczen3.imie;
			cout << "Podaj nazwisko ucznia: ";
			cin >> uczen3.nazwisko;
			cout << "Podaj wiek ucznia: ";
			cin >> uczen3.wiek;
			cout << "Podaj numer identyfikatora ucznia: ";
			cin >> uczen3.id;
			uczen3.wpisz_dane_ucznia();
			uczen3.wpisz_dane_zaw();
			uczen3.uczen_pracuje();
			uczen3.kasowanie_ucznia();
			break;
		}
		}
	}

	return 0;
}
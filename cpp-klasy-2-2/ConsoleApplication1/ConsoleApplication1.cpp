#include <iostream>
using namespace std;
class Osoba
{
public:
	string imie, nazwisko;
	long long int pesel;
};
class Sportowiec :public Osoba
{
public:
	string test_coopera;
	float bieg_na_100;
};
class Koszykarz :public Sportowiec
{
public:
	string pozycja, skok_dosiezny;
	float skutecznosc;

	Koszykarz()
	{
		test_coopera = "-";
		bieg_na_100 = 0;
		skok_dosiezny = "-";
		skutecznosc = 0;
		pozycja = "-";
	}
	void podaj_dane1()
	{
		cout << "Wpisz imie osoby: ";
		cin >> imie;
		cout << "Wpisz jej nazwisko: ";
		cin >> nazwisko;
		cout << "Podaj PESEL: ";
		cin >> pesel;
	}
	void podaj_dane2()
	{
		cout << "Czy przechodzila test Coopera? ";
		cin >> test_coopera;
		cout << "W jakim czasie przebiegla 100m? ";
		cin >> bieg_na_100;
	}
	void podaj_dane3()
	{
		cout << "Czy przechodzila skok dosiezny? ";
		cin >> skok_dosiezny;
		cout << "Podaj pozycje, na ktorej gra: ";
		cin >> pozycja;
		cout << "Podaj skutecznosc z linii rzutow osobistych: ";
		cin >> skutecznosc;
	}
	void wypisz_dane()
	{
		cout << "\n-------- DANE OSOBY --------";
		cout << "\nImie: " << imie;
		cout << "\nNazwisko: " << nazwisko;
		cout << "\nPESEL: " << pesel;
		cout << "\nTest Coopera: " << test_coopera;
		cout << "\nBieg na 100m: " << bieg_na_100;
		cout << "\nOdleglosc podczas skoku dosieznego: " << skok_dosiezny;
		cout << "\nPozycja: " << pozycja;
		cout << "\nSkutecznosc z linii rzutow osobistych: " << skutecznosc << endl;
	}
};
int main()
{
	string odp1, odp2;

	Koszykarz osoba1;
	osoba1.podaj_dane1();
	cout << "Czy dana osoba jest sportowcem? tak/nie: ";
	cin >> odp1;
	if (odp1 == "tak")osoba1.podaj_dane2();
	cout << "A czy gra w koszykowke? tak/nie: ";
	cin >> odp2;
	if (odp2 == "tak")osoba1.podaj_dane3();
	osoba1.wypisz_dane();

	return 0;
}
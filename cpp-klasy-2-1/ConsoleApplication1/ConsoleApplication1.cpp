#include <iostream>
using namespace std;
class Osoba
{
public:
	string imie, nazwisko;
	long long int pesel;
};
class Student :public Osoba
{
public:
	string uczelnia, wydzial;
	int rok_studiow;

	Student()
	{
		uczelnia = "-";
		wydzial = "-";
		rok_studiow = 0;
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
		cout << "Podaj uczelnie studenta: ";
		cin >> uczelnia;
		cout << "Podaj wydzial, na ktorym uczy sie student: ";
		cin >> wydzial;
		cout << "Podaj rok studiow: ";
		cin >> rok_studiow;
	}
	void wypisz_dane()
	{
		cout << "\n-------- DANE OSOBY --------";
		cout << "\nImie: " << imie;
		cout << "\nNazwisko: " << nazwisko;
		cout << "\nPESEL: " << pesel;
		cout << "\nUczelnia: " << uczelnia;
		cout << "\nWydzial: " << wydzial;
		cout << "\nRok studiow: " << rok_studiow << endl;
	}
};
int main()
{
	string odp;

	Student osoba1;
	osoba1.podaj_dane1();
	cout << "Czy dana osoba jest studentem? tak/nie: ";
	cin >> odp;
	if (odp == "tak")osoba1.podaj_dane2();
	osoba1.wypisz_dane();

	return 0;
}
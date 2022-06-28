#include <iostream>
#include <fstream>
using namespace std;
class Pojazdy
{
public:
	string marka, model, kolor;
	int rocznik, moc;
	float pojemnosc, przebieg;
};
class Osobowy :public Pojazdy
{
public:
	int ilosc_miejsc, ilosc_drzwi;
};
class Motor :public Osobowy
{
public:
	ofstream plik;

	Motor()
	{
		marka = "-";
		model = "-";
		kolor = "-";
		rocznik = 0;
		moc = 0;
		pojemnosc = 0;
		przebieg = 0;
		ilosc_miejsc = 0;
		ilosc_drzwi = 0;
	}
	void podaj_dane1()
	{
		cout << "Podaj marke: ";
		cin >> marka;
		cout << "Podaj model: ";
		cin >> model;
		cout << "Kolor: ";
		cin >> kolor;
		cout << "Rocznik pojazdu: ";
		cin >> rocznik;
		cout << "Moc: ";
		cin >> moc;
		cout << "Pojemnosc: ";
		cin >> pojemnosc;
		cout << "Przebieg: ";
		cin >> przebieg;
	}
	void podaj_dane2()
	{
		cout << "Podaj ilosc miejsc: ";
		cin >> ilosc_miejsc;
		cout << "Podaj liczbe drzwi: ";
		cin >> ilosc_drzwi;
	}
	void wypisz_dane1()
	{
		cout << "\n-------- DANE POJAZDU --------";
		cout << "\nMarka: " << marka;
		cout << "\nModel: " << model;
		cout << "\nKolor: " << kolor;
		cout << "\nRocznik: " << rocznik;
		cout << "\nMoc: " << moc;
		cout << "\nPojemnosc: " << pojemnosc;
		cout << "\nPrzebieg: " << przebieg;
	}
	void wypisz_dane2()
	{
		cout << "\nIlosc miejsc: " << ilosc_miejsc;
		cout << "\nIlosc drzwi: " << ilosc_drzwi;
	}
	void zapis1()
	{
		plik.open("pojazd.txt", ios::app);
		plik << "-------- DANE POJAZDU --------";
		plik << "\nMarka: " << marka;
		plik << "\nModel: " << model;
		plik << "\nKolor: " << kolor;
		plik << "\nRocznik: " << rocznik;
		plik << "\nMoc: " << moc;
		plik << "\nPojemnosc: " << pojemnosc;
		plik << "\nPrzebieg: " << przebieg << endl;
		plik.close();
	}
	void zapis2()
	{
		plik.open("pojazd.txt", ios::app);
		plik << "Ilosc miejsc: " << ilosc_miejsc << endl;
		plik << "Ilosc drzwi: " << ilosc_drzwi << endl;
		plik.close();
	}
};
int main()
{
	string odp1, odp2;

	Motor pojazd1;

	for (;;)
	{
		pojazd1.podaj_dane1();
		cout << "Pojazd jest samochodem osobowym czy motorem? osobowe/motor: ";
		cin >> odp1;
		if (odp1 == "osobowe")pojazd1.podaj_dane2();
		pojazd1.wypisz_dane1();
		if (odp1 == "osobowe")pojazd1.wypisz_dane2();
		cout << "\n\nCo chcesz zrobic z podanymi danymi pojazdu? zapisz/usun: ";
		cin >> odp2;
		if (odp2 == "zapisz")pojazd1.zapis1();
		if (odp1 == "osobowe")pojazd1.zapis2();
		system("cls");
		cout << "ZAPISANO!" << endl << endl;
	}

	return 0;
}
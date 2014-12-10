/*
Eetu Salo

Harjoitus 17 (Palautus vko 46)
Muokkaa edellist‰ ohjelmaa siten, ett‰ edell‰ m‰‰ritelty‰ tietuetyyppi‰
k‰ytet‰‰n my‰s kahden muun "koululaisen" tietojen tallentamiseen.
N‰iden kahden muun koululaisen tiedot alustetaan ao. muuttujien
m‰‰rittelyn yhteydess‰. Ainoastaan yhden koululaisen tiedot kysyt‰‰n
k‰ytt‰j‰lt‰ edellisen teht‰v‰n tapaan.

Tulosta kolmen koululaisen tiedot koulumatkan mukaisessa
suuruusj‰rjestyksess‰ (pienimm‰st‰ suurimpaan) n‰yt‰lle



*/





#include <iostream>
using namespace std;

struct HKL
{
	char etu[20];
	char suku[20];
	float matka;
	char osoite[20];
	char posti[20];
	int kenka;
};

void main()
{
	HKL hkl;
	HKL hkl2 = { "Jesus", "Jezuz", 4, "Golgata", "666", 50 };
	HKL hkl3 = { "Matti", "Meik‰l‰inen", 12, "Kujalla", "12344", 43 };

	cout << "Anna etunimi: ";
	cin >> hkl.etu;
	cout << "Anna sukunimi: ";
	cin >> hkl.suku;
	cout << "Koulumatka (km): ";
	cin >> hkl.matka;
	cout << "Osoite: ";
	cin.get();
	cin.get(hkl.osoite, 20);
	cout << "Postinumero: ";
	cin >> hkl.posti;
	cout << "Kengannumero: ";
	cin >> hkl.kenka;

	cout << hkl.etu << " " << hkl.suku << " " << hkl.matka << " km " << hkl.osoite << " " << hkl.posti << " " << hkl.kenka << " " << endl;
	cout << hkl2.etu << " " << hkl2.suku << " " << hkl2.matka << " km " << hkl2.osoite << " " << hkl2.posti << " " << hkl2.kenka << " " << endl;
	cout << hkl3.etu << " " << hkl3.suku << " " << hkl3.matka << " km " << hkl3.osoite << " " << hkl3.posti << " " << hkl3.kenka << " " << endl;
}
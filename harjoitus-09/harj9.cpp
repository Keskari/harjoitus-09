#include <iostream> 
using namespace std;
int main()
{
	int luku1;
	int luku2;
	int tulos;
	
	cout << "Syota ensimmäinen luku\n";
	cin >> luku1;
	cout << "Suota toinen luku\n";
	cin >> luku2;
	
	int valinta;
	cout << "\nVALIKKO | Valitse laskutoimitus\n";
	cout << "\n1 Summa ";
	cout << "\n2 Erotus";
	cout << "\n3 Tulo";
	cout << "\n4 Osamaara ";
	cout << "\n5 Jakojaannos\n";
	cin >> ws >> valinta;
	switch (valinta)
	{
	case 1: tulos = (luku1 + luku2);
		cout << tulos;
		break;
	case 2:
		tulos = (luku1 - luku2);
		cout << tulos;
		break;
	case 3:
		tulos = (luku1 * luku2);
		cout << tulos;
		break;
	case 4:
		tulos = (luku1 / luku2);
		cout << tulos;
	case 5:
		tulos = (luku1 % luku2);
		cout << tulos;
	default:
		break;
	}
	return 0;
}
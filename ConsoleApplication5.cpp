// ConsoleApplication5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;


int main()
{
	cout << "Prosty kalkulator." << endl;
	int a, b;
	int wybor;
	cout << "Podaj pierwsza liczbe: ", cin >> a;
	cout << endl;
	cout << "Podaj druga liczbe: ", cin >> b;
	cout << endl;
	
	cout << "1. Suma\n";
	cout << "2. Roznica\n";
	cout << "3. Iloraz\n";
	cout << "4. Iloczyn\n";
	cout << "Wybierz dzialanie: ";
	cin >> wybor;

	switch (wybor) {
	case 1:
		cout << "Suma wynosi: " << (a+b) << endl;
		break;
	case 2:
		cout << "Roznica wynosi: " << (a-b) << endl;
		break;
	case 3:
		cout << "Iloraz wynosi: " << (a/b) << endl;
		break;
	case 4: 
		cout << "Iloczyn wynosi: " << (a*b) << endl;
		break;
	default:
		cout << "Nie mozna wykonać tej czynnosci.";
		break;

	}


}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

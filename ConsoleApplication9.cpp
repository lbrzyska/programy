// ConsoleApplication4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int a, suma_d = 0, suma_u = 0, ile_u = 0, ile_d = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe:", cin >> a;
        if (a >= 0) {
            ile_d++;
            suma_d += a;

        }
        else {
            ile_u ++;
            suma_u += a;
        }
    }cout << "Ilosc liczb dodatnich: " << ile_d << ", suma: " << suma_d << endl;
    cout << "Ilosc liczb ujemnych: " << ile_u << ", suma: " << suma_u << endl;

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

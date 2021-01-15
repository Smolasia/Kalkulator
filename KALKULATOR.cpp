// ConsoleApplication24.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //deklaracja zmiennych (globalne)
	int Polecenie;
	int a1, b1, wynik1; //do case 7 (musi być inny typ danych do liczenia %(reszta) tj. int)
	double a, b, wynik;//pozostałe case
	double c = 0.01;//case 6, służy do obliczania % 

	
	
	// wprowadzam pętlę, cel ponowne użycie kalkulatora, dzięki czemu nie trzeba po jednej instrukcji ponownie uruchamiać program

	while (true) 
	{
		
	
		//Menu wyboru
			cout << "[1] Dodawanie" << endl <<
				"[2] Odejmowanie" << endl <<
				"[3] Mnozenie" << endl <<
				"[4] Dzielenie" << endl <<
				"[5] Wyznacz pierwiastek kwadratowy" << endl <<
				"[6] Wyznacz procent liczby" << endl <<
				"[7] Podaj reszte z dzielenia" << endl <<
				"[8] Wylicz dowolna potege danej liczby" << endl <<
				"[9] Zakoncz" << endl << "Twoje polecenie: ";


			cin >> Polecenie; //wczytanie odpowiedniej instrukcji (1-9)
			


			

			if (Polecenie >= 1 && Polecenie <= 8 && Polecenie != 7 && Polecenie != 5)  //dla case5 oraz case7 operujemy na innych zmiennych (a1,b1) lub samo a ( w przypadku pierwiastka)
			{
                // wczytanie danych do obliczen, ktore wpisuje użytkownik 
				cout << "Podaj  liczbe a=  ";
				cin >> a;
				cout << "Podaj liczbe b=  ";
				cin >> b;
			}
	

			 


            // Naszym przypadkom przypisujemy działania, instrukcje
			switch (Polecenie)
			{
			case 1://dodawanie
				cout << "Wynik: " << a + b << endl; 
				break;

			case 2://odejmowanie
				cout << "Wynik: " << a - b << endl;
				break;

			case 3://mnożenie
				cout << "Wynik: " << a * b << endl;
				break;

			case 4://dzielenie
				if (b == 0) // b nie może być zerem, gdyż a/0 jest niepoprawne.
					cout << "Nie dzielimy przez 0 !" << endl; //zabezpieczenie, aby użytkownik nie miał możliwości dzielenia przez 0
				else cout << "Wynik: " << a / b << endl;
				break;

			case 5://pierwaistek

				if (Polecenie = 5)
				{
					cout << "Podaj  liczbe a=  ";// do liczenia pierwiastka kwadratowego potrzebna jest tylko jedna liczba
					cin >> a;


					wynik = sqrt(a); //pierwiastkowanie liczby, którą wpisał użytkownik 
					cout << "Wynik: " << wynik << endl;

				}
                break;

			case 6://procent z liczby

				wynik = a * b*c;// a=liczba, b=procent c=mnożnik, umożliwający poprawne wykonanie obliczeń
				cout << "Wynik: " << wynik << endl;
				break;

			case 7:// dzielenie z resztą
				if (Polecenie = 7) // potrzebujemy zmiennej int aby wykonać to działanie, zatem mamy zmienne a1,b1 oraz wynik1, który przechowuje wynik dzielenia
				{
					cout << "Podaj  liczbe a1=  ";
					cin >> a1;
					cout << "Podaj  liczbe b1=  ";
					cin >> b1;

					wynik1 = a1 % b1;//dzielenie z resztą
					cout << "Wynik: " << wynik1 << endl;
				}

				
				break;

			case 8://potęgowanie 
				wynik = pow(a,b);// a=liczba b=wykładnik ( a do potegi b)
				cout << "Wynik: " << wynik << endl;

				break;
			case 9:// zakończenie pracy kalkulatora
				return 0;

			default: // w przypadku kiedy nie bedzie wybrana instrkacja z Menu to wyświetli się poniższy komunikat
				cout << "Nieprawidlowe polecenie." << endl;
			}


		

		
	}
}







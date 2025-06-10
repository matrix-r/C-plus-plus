
#include <iostream>
#include <string>
using namespace std;

int main() {
    float d, e;
    string operatore;
    cout << "|---------------------------------|" << endl;
    cout << "|     Super Kalkulator Matrix     |" << endl;
    cout << "|             Wersja:             |" << endl;
    cout << "|               1.1               |" << endl;
    cout << "|                                 |" << endl;
    cout << "|              Witaj              |" << endl;
    cout << "|                                 |" << endl;
    cout << "|---------------------------------|" << endl;

    
 
    cout << "Podaj liczbe 1:    ";
    cin >> d;

    cout << "Podaj liczbe 2:    ";
    cin >> e;

    

    cout << "Podaj operator dodawania (+), odejmowania (-), mnozenia (*), dzielenia (/): ";
    cin >> operatore;

     //Sprawdzanie operatora i wykonywanie operacji// ////////////////////////////////////////////www/w/w/w/w/w/w//ww/w/w/ww//w/w/;
    if (operatore == "+") {
        cout << "Obliczam dodawanie... ";
        cout << d + e << endl;  // Dodawanie
    }
    else if (operatore == "-") {
        cout << "Obliczam odejmowanie... ";
        cout << d - e  << endl;  // Odejmowanie
    }
    else if (operatore == "*") {
        cout << "Obliczam mnozenie... ";
        cout << d * e  << endl;  // Mnozenie
    }
    else if (operatore == "/") {
        cout << "Obliczam dzielenie... ";
        cout << d / e << endl;  // Dzielenie
    }
    else {
        cout << "Niepoprawny operator, spróbuj ponownie!" << endl;  
    }

    return 0;
}



#include <iostream>
#include <string>
using namespace std;

int main() {
    float d, e;
    string operatore;
    cout << "Witaj w super kalkulatorze Matiego!" << endl;
    
 
    cout << "Podaj liczbe 1:    ";
    cin >> d;

    cout << "Podaj liczbe 2:    ";
    cin >> e;

    

    cout << "Podaj operator dodawania (+), odejmowania (-), mno�enia (*), dzielenia (/): ";
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
        cout << d * e  << endl;  // Mno�enie
    }
    else if (operatore == "/") {
        cout << "Obliczam dzielenie... ";
        cout << d / e << endl;  // Dzielenie
    }
    else {
        cout << "Niepoprawny operator!" << endl;  
    }

    return 0;
}


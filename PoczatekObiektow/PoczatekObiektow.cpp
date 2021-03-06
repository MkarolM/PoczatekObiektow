//Karol Marszał, nauka programowania obiektowego

#include <iostream>
using namespace std;


    class Trojkat
    {
    private:
        float a=0, h=0;
        float t[3] = { 0, 0, 0 };
    public:
        Trojkat(float a, float b)                           // konstruktor z 2 parametrami
        {
            this->a = a;
            this->h = b;
            if (this->a == 0 || this->h == 0)
            {
                this->a = 10;
                this->h = 10;
                cout << "To nie mozliwe, tworze trojkat o podstawie 10 i wsokosci 10" << endl;
            }
            cout << "Trojkat o podstawie " << a << " i wysokosci " << h << " utworzony!" << endl;
        }
        Trojkat()                                           // konstruktor domyslny ustawiajacy wartosci na 10
        {
            this->a = 10;
            this->h = 10;
            cout << "Brak wartosci poczatkowych! Pamietaj zmienic domyslne wartosci na takie, ktorych oczekujesz!" << endl;
            cout << "Trojkat o podstawie " << a << " i wysokosci " << h << " utworzony!" << endl;
        }
        Trojkat(float a, float b, float c)                  // konstruktor z 3 parametrtami
        {
            t[0] = a;
            t[1] = b;
            t[2] = c;
            if (t[0] == 0 || t[1] == 0 || t[2] == 0)
            {
                t[0] = 3;
                t[1] = 4;
                t[2] = 5;
                cout << "To nie mozliwe, tworze trojkat o bokach 3, 4 i 5." << endl;
            }
            czyIstnieje();
        }
        void czyIstnieje()
        {
            if (t[0] > t[1]) swap(t[0], t[1]);
            if (t[1] > t[2]) swap(t[1], t[2]);
            if (t[0] > t[1]) swap(t[0], t[1]);              // ukladanie od najwiekszego do najmniejszego celem pocwiczenia instrukcji if oraz funkcji swap
            if (t[0] + t[1] > t[2])                         // sprawdzenie czy taki trojkat moze istniec
            {
                cout << "Trojkat o bokach " << t[0] << ", " << t[1] << " i " << t[2] << " utworzony!" << endl;
            }
            else
            {
                cout << "Z takich dlugosci nie da sie utworzyc trojkata! Tworze trojkat o bokach 3, 4, 5!" << endl;
                t[0] = 3;
                t[1] = 4;
                t[2] = 5;
            }
        }
        void wczytajWartosci()                              // metoda do tworzenia trojkata na podstawie podstawy i wysokosci
        {
            a = h= 0;
            while (a <= 0)
            {
                cout << "Podaj dlugosc podstawy trojkata: ";
                cin >> a;
            }
            while (h <= 0)
            {
                cout << "Podaj wysokosc trojkata: ";
                cin >> h;
            }
        }
        void wczytajBoki()
        {
            cout << "Podaj dlugosc pierwszego boku: ";
            cin >> t[0];
            cout << "Podaj dlugosc drugiego boku: ";
            cin >> t[1];
            cout << "Podaj wartosc trzeciego boku: ";
            cin >> t[2];
            if (t[0] > t[1]) swap(t[0], t[1]);
            if (t[1] > t[2]) swap(t[1], t[2]);
            if (t[0] > t[1]) swap(t[0], t[1]);              // ukladanie od najwiekszego do najmniejszego celem pocwiczenia instrukcji if oraz funkcji swap
            if (t[0] + t[1] > t[2])                         // sprawdzenie czy taki trojkat moze istniec
            {
                cout << "Trojkat o bokach "<< t[0] << ", " << t[1] << " i " << t[2] << " utworzony!" << endl;
            }
            else
            {
                cout << "Z takich dlugosci nie da sie utworzyc trojkata!" << endl;
                wczytajBoki();
            }

        }
        float zwrocPole()                                   // prosta funkcja zwracajaca pole trojkata majac dlugosc podstawy i wysokosc
        {
                cout << "Pole tego trojkata wynosi: ";
                return (a * h / 2);
        }
        float zwrocObwod()                                  // prosta funkcja zwracajaca obwod trojkata majac dlugosci bokow
        {
                cout << "Obwod tego trojkata wynosi: ";
                return t[0] + t[1] + t[2];
        }

    };
int main()
{
        
    Trojkat t1;
    Trojkat* t2, *t3;
    t1.wczytajWartosci();
    cout << t1.zwrocPole() << endl;
    t2 = new Trojkat();
    t2->wczytajWartosci();
    cout << t2->zwrocPole() << endl;
    delete t2;                                              // powtorka ze wskaznikow, delete kasuje adres do ktorego odwoluje sie wskaznik, a nie sam wskaznik
    t2 = new Trojkat(5, 8);
    cout << t2->zwrocPole() << endl;
    t3 = new Trojkat(15, 20, 25);
    cout << t3->zwrocObwod() << endl;
    delete t2;
    delete t3;
    cout << "Pamiec zwolniona, koniec programu!";
}
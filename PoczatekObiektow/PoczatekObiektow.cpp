#include <iostream>
using namespace std;


    class Trojkat
    {
    private:
        float a, h;
        float t[3];
    public:
        void wczytajWartosci()                              // metoda do tworzenia trojkata na podstawie podstawy i wysokosci
        {
            cout << "Podaj dlugosc podstawy trojkata: ";
            cin >> a;
            cout << "Podaj wysokosc trojkata: ";
            cin >> h;
        }
        float zwrocPole()
        {
            return (a * h / 2);
        }
        void stworzTrojkat()
        {
            cout << "Podaj dlugosc pierwszego boku: ";
            cin >> t[0];
            cout << "Podaj dlugosc drugiego boku: ";
            cin >> t[1];
            cout << "Podaj dlugosc trzeciego boku: ";
            cin >> t[2];
            if (t[0] > t[1]) swap(t[0], t[1]);
            if (t[1] > t[2]) swap(t[1], t[2]);
            if (t[0] > t[1]) swap(t[0], t[1]);              // ukladanie od najwiekszego do najmniejszego celem pocwiczenia instrukcji if oraz funkcji swap
            if (t[0] + t[1] > t[2])                         // sprawdzenie czy taki trojkat moze istniec
            {
                cout << "Trojkat utworzony!";
            }
            else
            {
                cout << "Z takich dlugosci nie da sie utworzyc trojkata!" << endl;
                stworzTrojkat();
            }

        }

    };
int main()
{
        
    Trojkat t1;
    Trojkat* t2;
    //t1.wczytajWartosci();
    //cout << "Pole tego trojkata to: " << t1.zwrocPole() << endl;
    t2 = new Trojkat();
    //t2->wczytajWartosci();
    //cout << "Pole drugiego trojkata to: " << t2->zwrocPole() << endl;
    delete t2;                                              // powtorka ze wskaznikow, delete kasuje adres do ktorego odwoluje sie wskaznik, a nie sam wskaznik
    t2 = new Trojkat();
    t2->stworzTrojkat();
}
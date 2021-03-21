//Karol Marszał, nauka programowania obiektowego

#include <iostream>
using namespace std;


    class Trojkat
    {
    private:
        float a, h;
        float t[3];
    public:
        Trojkat(float a, float b)                           // konstruktor z 2 parametrami
        {
            this->a = a;
            this->h = b;
        }
        Trojkat()                                           // konstruktor domyslny ustawiajacy wartosci na 10
        {
            a = 10;
            h = 10;
        }
        Trojkat(float a, float b, float c)                  // konstruktor z 3 parametrtami
        {
            t[0] = a;
            t[1] = b;
            t[2] = c;
        }
        void czyIstnieje()
        {
            if (t[0] > t[1]) swap(t[0], t[1]);
            if (t[1] > t[2]) swap(t[1], t[2]);
            if (t[0] > t[1]) swap(t[0], t[1]);              // ukladanie od najwiekszego do najmniejszego celem pocwiczenia instrukcji if oraz funkcji swap
            if (t[0] + t[1] > t[2])                         // sprawdzenie czy taki trojkat moze istniec
            {
                cout << "Trojkat utworzony!";
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
            cout << "Podaj dlugosc podstawy trojkata: ";
            cin >> a;
            cout << "Podaj wysokosc trojkata: ";
            cin >> h;
        }
        float zwrocPole()                                   // prosta funkcja zwracajaca pole trojkata majac dlugosc podstawy i wysokosc
        {
            return (a * h / 2);
        }
        float zwrocObwod()                                  // prosta funkcja zwracajaca obwod trojkata majac dlugosci bokow
        {
            return t[0] + t[1] + t[2];
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
    Trojkat* t2, *t3;
    //t1.wczytajWartosci();
    //cout << "Pole tego trojkata to: " << t1.zwrocPole() << endl;
    t2 = new Trojkat();
    //t2->wczytajWartosci();
    //cout << "Pole drugiego trojkata to: " << t2->zwrocPole() << endl;
    delete t2;                                              // powtorka ze wskaznikow, delete kasuje adres do ktorego odwoluje sie wskaznik, a nie sam wskaznik
    t2 = new Trojkat(5, 8);
    cout << t2->zwrocPole() << endl;
    t3 = new Trojkat(15, 20, 25);
    cout << t3->zwrocObwod() << endl;
    
    
    
    delete t2;
    delete t3;
}
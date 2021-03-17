#include <iostream>
using namespace std;


    class Trojkat
    {
    private:
        float a, h, b, c;
        float t[3];
    public:
        void wczytajWartosci()
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
            cout << "Podaj 3 dlugosci bokow: ";
            cin >> t[0] >> t[1] >> t[2];
            if (t[0] > t[1]) swap(t[0], t[1]);
            if (t[1] > t[2]) swap(t[1], t[2]);
            if (t[0] > t[1]) swap(t[0], t[1]);
            if (t[0] + t[1] > t[2])
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
    delete t2;
    t2 = new Trojkat();
    t2->stworzTrojkat();
}
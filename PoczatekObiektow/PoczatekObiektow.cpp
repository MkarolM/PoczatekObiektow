#include <iostream>
using namespace std;

int main()
{
    class Trojkat
    {
    private:
        float a, h;
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

    };

    Trojkat t1;
    Trojkat* t2;
    t1.wczytajWartosci();
    cout << "Pole tego trojkata to: " << t1.zwrocPole() << endl;
    t2 = new Trojkat();
    t2->wczytajWartosci();
    cout << "Pole drugiego trojkata to: " << t2->zwrocPole() << endl;
    delete t2;
}
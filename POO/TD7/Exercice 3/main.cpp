#include <iostream>
#include "Reservation.h"

using namespace std;

int main()
{
    Reservation eventdezinzin = Reservation(999999,"EventDeZinzin");

    cout << "Reservation de 50 places sur " << eventdezinzin.get() << " places" <<endl;
    eventdezinzin.reserverBillets(50);
    cout << "Nombre de places: " << eventdezinzin.get() <<endl;

    try
    {
        cout << "Reservation de -44 places" << endl;
        eventdezinzin.reserverBillets(-44);
    }
    catch(invalid_argument& e)
    {
        cerr << "Erreur : " << e.what() << endl;
    }

    try
    {
        cout << "Reservation de 999950 places" << endl;
        eventdezinzin.reserverBillets(999950);
    }
    catch(out_of_range& e)
    {
        cerr << "Erreur : " << e.what() << endl;
    }

    //Exemples Correction
    Reservation concert(100, "Concert");
    try {
        concert.reserverBillets(10);
    }
    catch (out_of_range& e) {
        cerr << "Erreur de reservation: " << e.what() << endl;
    }
    catch (invalid_argument& e) {
        cerr << "Erreur de reservation: " << e.what() << endl;
    }
    try {
        concert.reserverBillets(110);
    }
    catch (out_of_range& e) {
        cerr << "Erreur de reservation: " << e.what() << endl;
    }
    catch (invalid_argument& e) {
        cerr << "Erreur de reservation: " << e.what() << endl;
    }
    try {
        concert.reserverBillets(-5);
    }
    catch (out_of_range& e) {
        cerr << "Erreur de reservation: " << e.what() << endl;
    }
    catch (invalid_argument& e) {
        cerr << "Erreur de reservation: " << e.what() << endl;
    }
    try {
        concert.reserverBillets(1);
    }
    catch (out_of_range& e) {
        cerr << "Erreur de reservation: " << e.what() << endl;
    }
    catch (invalid_argument& e) {
        cerr << "Erreur de reservation: " << e.what() << endl;
    }
    return 0;
}
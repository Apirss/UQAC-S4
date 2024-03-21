#include <iostream>
#include "Point.h"
#include "exception.h"

using namespace std;

int main()
{
    try {
        Point a(1, 2); // ne déclenche pas d'exception
        //Point b(1, 1); // Exception: composantes égales
        //Point c; // Exception: constructeur sans argument
        Point d(3); // Exception: constructeur avec un argument
    }
    catch (err_same) {
        cout << "exception : composantes egales" << endl;
        exit(1);
    }
    catch (err_constructor ec) {
        switch (ec.get_num()) {
            case 0:
                cout << "exception: const sans argument" <<endl;
                break;
            case 1:
                cout << "exception: const avec un argument" <<endl;
                break;
        }
        exit(1);
    }
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

void process(int x)
{
    if(x == 1)
        throw 1;
    else if(x == 2)
        throw string("Deux");
}
int main()
{
    vector<int> vec = { 0, 1, 2, 3 };
    for (int x : vec) {
        try {
            process(x); // Essaie d'appeler 'process'
            cout << "ok." << endl; // Imprime "ok." si aucune exception n'est levée
        }
        catch (int e) {
            cout << "Exception de type int avec la valeur: " << e << endl;
        }
        catch (string e) {
            cout << "Exception de type string avec la valeur: " << e << endl;
        }
    }
    return 0;
}
#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char* numar = new char(3);

    cout << "Introduceti un numar pentru a il inversa: ";
    cin >> numar;

    cout << "Numarul invers este: " << strrev(numar);

    delete(numar);

    return 0;
}

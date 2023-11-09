#include <iostream>
using namespace std;

class Rinda {
private:
    int prieksa;
    int aizmugure;
    int izmers;
    int* arr;

public:
    Rinda(int s) {
        prieksa = -1;
        aizmugure = -1;
        izmers = s;
        arr = new int[s];
    }

    void IeliktRinda(int value) {
        if (aizmugure == izmers - 1) {
            cout << "Rinda ir pilna" << endl;
            return;
        }
        if (prieksa == -1)
            prieksa = 0;
        aizmugure++;
        arr[aizmugure] = value;
        cout << value << " ir pievienots rindai" << endl;
    }

    void NonemtNoRindas() {
        if (prieksa == -1) {
            cout << "Rinda ir tuksa" << endl;
            return;
        }
        cout << arr[prieksa] << " ir nonemts no rindas" << endl;
        prieksa++;
        if (prieksa > aizmugure)
            prieksa = aizmugure = -1;
    }

    void Radisana() {
        if (prieksa == -1) {
            cout << "Rinda ir tuksa" << endl;
            return;
        }
        for (int i = prieksa; i <= aizmugure; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {

    Rinda q(10);
    int izvele = 0;

    while (true) {
        cout << "Izveleties uzdevumu: " << endl;
        cout << "1 - Ielikt rinda" << endl;
        cout << "2 - Nonemt no rindas" << endl;
        cout << "3 - Radit rindu" << endl;
        cout << "4 - Beigt darbu" << endl;
        cout << ">> ";
        cin >> izvele;
        cout << endl;

        if (izvele == 1) {
            int num = 0;
            cout << "Ievadiet ciparu, kuru gribat ielikt rinda: ";
            cin >> num;
            q.IeliktRinda(num);
        }
        else if (izvele == 2) {
            q.NonemtNoRindas();
        }
        else if (izvele == 3) {
            cout << "Rinda: ";
            q.Radisana();
        }
        else if (izvele == 4) {
            break;
        }
        else {
            cout << "Nepareiza ievade!!!" << endl;
        }
    }

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    int tahun = 0;
    cout << "Tahun: ";
    cin >> tahun;
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        cout << tahun << " merupakan tahun kabisat.\n";
    } else {
        cout << tahun << " bukan merupakan tahun kabisat.\n";
    }
    return 0;
}
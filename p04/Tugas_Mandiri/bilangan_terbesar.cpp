#include <iostream>
#include <string>

using namespace std;

int main() {
    double nilai1 = 0;
    double nilai2 = 0;
    double nilai3 = 0;

    cout << "Nilai 1       : ";
    cin >> nilai1;
    cout << "Nilai 2       : ";
    cin >> nilai2;
    cout << "Nilai 3       : ";
    cin >> nilai3;

    double nilai_paling_terbesar = 0;  
    if (nilai1 >= nilai2 && nilai1 >= nilai3) {
        nilai_paling_terbesar = nilai1;
    } else if (nilai2 >= nilai1 && nilai2 >= nilai3) {
        nilai_paling_terbesar = nilai2;
    } else {
        nilai_paling_terbesar = nilai3;
    }
    cout << "Nilai Terbesar : " << nilai_paling_terbesar << "\n";

        return 0;
}
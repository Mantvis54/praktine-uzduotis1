#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    const double GBP_Bendras = 0.8729, GBP_Pirkti = 0.8600, GBP_Parduoti = 0.9220;
    const double USD_Bendras = 1.1793, USD_Pirkti = 1.1460, USD_Parduoti = 1.2340;
    const double INR_Bendras = 104.6918, INR_Pirkti = 101.3862, INR_Parduoti = 107.8546;

    int veiksmas;
    int valiuta;
    double kiekis;

    cout << fixed << setprecision(2);

    cout << "--- VALIUTOS KEITYKLA ---\n";
    cout << "1. Valiutos kurso palyginimas\n";
    cout << "2. Pirkti valiuta\n";
    cout << "3. Parduoti valiuta\n";
    cout << "Pasirinkite veiksma:";
    cin >> veiksmas;

    cout << "\nPasirinkite valiuta:\n";
    cout << "1. GBP\n";
    cout << "2. USD\n";
    cout << "3. INR\n";
    cout << "Pasirinkimas:";
    cin >> valiuta;

    if (veiksmas == 1) {
        
        cout << "\n--- KURSO PALYGINIMAS ---\n";
        if (valiuta == 1) cout << "1 EUR =" << GBP_Bendras << "GBP\n";
        else if (valiuta == 2) cout << "1 EUR =" << USD_Bendras << "USD\n";
        else if (valiuta == 3) cout << "1 EUR =" << INR_Bendras << "INR\n";
        else cout << "Klaida: Neteisinga valiuta!\n";
    }

    else if (veiksmas == 2) {

        cout << "\nKiek EUR norite iškeisti?";
        cin >> kiekis;

        cout << "Jus gausite:";
        if (valiuta == 1) cout << kiekis * GBP_Pirkti << "GBP\n";
        else if (valiuta == 2) cout << USD_Pirkti << "USD\n";
        else if (valiuta == 3) cout << INR_Pirkti << "INR\n";
        else cout << "Klaida: Neteisinga valiuta!\n";
    }

    else if (veiksmas == 3) {

        cout << "\nKiek užsienio valiutos norite parduoti?";
        cin >> kiekis;

        cout << "Jus gausite:";
        if (valiuta == 1) cout << kiekis * GBP_Parduoti << "EUR\n";
        else if (valiuta == 2) cout << kiekis * USD_Parduoti << "EUR\n";
        else if (valiuta == 3) cout << kiekis * INR_Parduoti << "EUR\n";
        else cout << "Klaida: Neteisinga valiuta!\n"; 
    }

    else {
        cout << "Klaida: Neteisingas veiksmas!\n";
    }

    return 0;
}
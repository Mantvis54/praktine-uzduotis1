#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const double GBP_Bendras = 0.8729, GBP_Pirkti = 0.8600, GBP_Parduoti = 0.9220;
    const double USD_Bendras = 1.1793, USD_Pirkti = 1.1460, USD_Parduoti = 1.2340;
    const double INR_Bendras = 104.6918, INR_Pirkti = 101.3862, INR_Parduoti = 107.8546;

    int veiksmas, valiutosPasirinkimas;
    double kiekis, rezultatas;
    string valiutosPavadinimas;

    // 2. Pagrindinis meniu
    cout << "====================================\n";
    cout << "        VALIUTOS KEITYKLA           \n";
    cout << "====================================\n";
    cout << "Pasirinkite norima atlikti veiksma:\n";
    cout << "1. Valiutos kurso palyginimas (Bendras kursas)\n";
    cout << "2. Pirkti valiuta (Mokate EUR, gaunate uzsienio valiuta)\n";
    cout << "3. Parduoti valiuta (Atiduodate uzsienio valiuta, gaunate EUR)\n";
    cout << "Jusu pasirinkimas: ";
    cin >> veiksmas;

    cout << "\nPasirinkite valiuta:\n";
    cout << "1. Didziosios Britanijos svaras (GBP)\n";
    cout << "2. JAV doleris (USD)\n";
    cout << "3. Indijos rupija (INR)\n";
    cout << "Jusu pasirinkimas: ";
    cin >> valiutosPasirinkimas;
    cout << "\nIveskite valiutos kieki: ";
    cin >> kiekis;
    cout << fixed << setprecision(2);
    cout << "\n------------------------------------\n";
    if (veiksmas == 1)
    {
        // Kurso palyginimas naudojant Bendra kursa
        if (valiutosPasirinkimas == 1)
        {
            cout << kiekis << " EUR = " << kiekis * GBP_Bendras << " GBP\n";
        }
        else if (valiutosPasirinkimas == 2)
        {
            cout << kiekis << " EUR = " << kiekis * USD_Bendras << " USD\n";
        }
        else if (valiutosPasirinkimas == 3)
        {
            cout << kiekis << " EUR = " << kiekis * INR_Bendras << " INR\n";
        }
        else
        {
            cout << "Klaida: Neteisingas valiutos pasirinkimas.\n";
        }
    }
    else if (veiksmas == 2)
    {
        // Valiutos pirkimas (EUR keitimas i uzsienio valiuta)
        if (valiutosPasirinkimas == 1)
        {
            rezultatas = kiekis * GBP_Pirkti;
            valiutosPavadinimas = "GBP";
        }
        else if (valiutosPasirinkimas == 2)
        {
            rezultatas = kiekis * USD_Pirkti;
            valiutosPavadinimas = "USD";
        }
        else if (valiutosPasirinkimas == 3)
        {
            rezultatas = kiekis * INR_Pirkti;
            valiutosPavadinimas = "INR";
        }
        else
        {
            cout << "Klaida: Neteisingas valiutos pasirinkimas.\n";
            return 1; // Programos pabaiga su klaida
        }
        cout << "Pirkdami uz " << kiekis << " EUR, jus gausite: " << rezultatas << " " << valiutosPavadinimas << endl;
    }
    else if (veiksmas == 3)
    {
        if (valiutosPasirinkimas == 1)
        {
            rezultatas = kiekis * GBP_Parduoti;
            valiutosPavadinimas = "GBP";
        }
        else if (valiutosPasirinkimas == 2)
        {
            rezultatas = kiekis * USD_Parduoti;
            valiutosPavadinimas = "USD";
        }
        else if (valiutosPasirinkimas == 3)
        {
            rezultatas = kiekis * INR_Parduoti;
            valiutosPavadinimas = "INR";
        }
        else
        {
            cout << "Klaida: Neteisingas valiutos pasirinkimas.\n";
            return 1;
        }
        cout << "Parduodami " << kiekis << " " << valiutosPavadinimas << ", jus gausite: " << rezultatas << " EUR" << endl;
    }
    else
    {
        cout << "Klaida: Neteisingas veiksmo pasirinkimas.\n";
    }

    cout << "------------------------------------\n";
    return 0;
}
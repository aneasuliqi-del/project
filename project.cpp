#include <iostream>
using namespace std;


struct PermbledhjaMujore {
    double bilanci;
    double perqindje_shpenzime;
    double perqindje_kursime;
};

PermbledhjaMujore llogaritPermbledhjaMujore(double total_ardhura, double total_shpenzime) {
    PermbledhjaMujore pm{};
   
    pm.bilanci = total_ardhura - total_shpenzime;
    
   if(total_ardhura > 0) {
        pm.perqindje_shpenzime = (total_shpenzime / total_ardhura) * 100;
        pm.perqindje_kursime = (pm.bilanci / total_ardhura) * 100;
    }
    else {
        pm.perqindje_shpenzime = 0;
        pm.perqindje_kursime = 0;
    }

    return pm;
}

int main() {

    int n;
    double te_ardhura[20];
    double total_ardhura = 0;

    cout << "Sa burime te ardhurash keni? ";
    cin >> n;

    for(int i = 0; i < n; i++) {
    cout << "Shkruaj te ardhuren " << i+1 << ": ";
    cin >> te_ardhura[i];

    if(te_ardhura[i] < 0) {
        cout << "Vlera nuk mund te jete negative. Vendoset 0.\n";
        te_ardhura[i] = 0;
    }

    total_ardhura += te_ardhura[i];
}
    int m;
    double shpenzime[20];
    double total_shpenzime = 0;

    cout << "\nSa shpenzime mujore keni? ";
    cin >> m;

    for (int i = 0; i < m; ++i) {
        cout << "Shkruaj shpenzimin " << i + 1 << ": ";
        cin >> shpenzime[i];
        total_shpenzime += shpenzime[i];

        cout << " Shpenzimet ";

    }

    cout << "Shpenzimet totale: " << total_shpenzime << endl;
    cout << " Shpenzimet mujore";


    PermbledhjaMujore permbledhje = llogaritPermbledhjaMujore(total_ardhura, total_shpenzime);
    cout << endl;
    cout << "Bilanci mujor: " << permbledhje.bilanci << endl;
    cout << "Përqindja e shpenzimeve: " << permbledhje.perqindje_shpenzime << " % " << endl;
    cout << "Përqindja e kursimeve: " << permbledhje.perqindje_kursime << " % " << endl; 

    return 0;
}
void analizaFinanciare(PermbledhjaMujore p) {
    cout << "\n=== ANALIZA FINANCIARE ===\n";

    if(p.perqindje_shpenzime > 80)
        cout << "⚠ Po shpenzon shume! Mundohu te kursesh me shume.\n";
    else if(p.perqindje_shpenzime >= 50)
        cout << "ℹ Shpenzimet jane ne nivel mesatar.\n";
    else
        cout << "✅ Shume mire! Ke kontroll te mire mbi financat.\n";
}
double llogaritTotalin(double arr[], int n) {
    double total = 0;
    for(int i = 0; i < n; i++)
        total += arr[i];
    return total;
}

void futShpenzimet(double shpenzime[], int &m) {
    cout << "\nSa shpenzime mujore keni? ";
    cin >> m;
    if(m > 20) m = 20;

    for(int i = 0; i < m; i++) {
        cout << "Shkruaj shpenzimin " << i+1 << ": ";
        cin >> shpenzime[i];
        if(shpenzime[i] < 0) shpenzime[i] = 0;
    }
}

PermbledhjaMujore llogaritPermbledhja(double total_ardhura, double total_shpenzime) {
    PermbledhjaMujore p;
    p.bilanci = total_ardhura - total_shpenzime;

    if(total_ardhura > 0) {
        p.perqindje_shpenzime = (total_shpenzime / total_ardhura) * 100;
        p.perqindje_kursime = (p.bilanci / total_ardhura) * 100;
    } else {
        p.perqindje_shpenzime = 0;
        p.perqindje_kursime = 0;
    }
    return p;
}

void analizaFinanciare(PermbledhjaMujore p) {
    cout << "\n=== ANALIZA FINANCIARE ===\n";
    if(p.perqindje_shpenzime > 80)
        cout << "⚠ Po shpenzon shume! Mundohu te kursesh.\n";
    else if(p.perqindje_shpenzime >= 50)
        cout << "ℹ Shpenzime mesatare.\n";
    else
        cout << "✅ Kontroll shume i mire i financave!\n";
}

int main() {
    double te_ardhura[20], shpenzime[20];
    int n, m;

    cout << "Sa burime te ardhurash keni? ";
    cin >> n;
    if(n > 20) n = 20;

    for(int i = 0; i < n; i++) {
        cout << "Shkruaj te ardhuren " << i+1 << ": ";
        cin >> te_ardhura[i];
        if(te_ardhura[i] < 0) te_ardhura[i] = 0;
    }

    futShpenzimet(shpenzime, m);

    double total_ardhura = llogaritTotalin(te_ardhura, n);
    double total_shpenzime = llogaritTotalin(shpenzime, m);

    PermbledhjaMujore p = llogaritPermbledhja(total_ardhura, total_shpenzime);

    cout << "\n=== RAPORTI MUJOR ===\n";
    cout << "Te ardhurat totale: " << total_ardhura << endl;
    cout << "Shpenzimet totale: " << total_shpenzime << endl;
    cout << "Bilanci: " << p.bilanci << endl;
    cout << "Shpenzimet (%): " << p.perqindje_shpenzime << "%\n";
    cout << "Kursimet (%): " << p.perqindje_kursime << "%\n";

    analizaFinanciare(p);

    return 0;
}


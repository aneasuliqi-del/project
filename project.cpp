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


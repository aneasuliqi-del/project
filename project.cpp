#include <iostream>
using namespace std;

int main() {
    const int MAX = 20;

    int n=0;
    double te_ardhura[MAX];
    double total_ardhura = 0.0;

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
    }

    cout << "Shpenzimet totale: " << total_shpenzime << endl;

    return 0;
}

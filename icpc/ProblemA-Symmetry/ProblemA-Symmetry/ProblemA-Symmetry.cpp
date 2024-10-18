#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;

    // Samaya simmetricnaya figura eto 2x2 kvadrat, kotoriy imeet 4 osi simmetrii
    // Poka k >= 4, mi mojem sozdat etu figuru
    // Esli k < 4, maximalnuyu simmentriyu mi mojem polucit ot toqo skolko kletok ispolzuem:
    // - S 1 kvadratikom, u nas 0 osey simmetriyi
    // - S 2 ili 3 kvadratikami, mi mojem razmestit ix tak ctobi bilo 1 os simmetriyi


    if (k == 1) {
        cout << 0 << endl;
    }
    else if (k == 2) {
        cout << 1 << endl;
    }
    else {
        cout << 4 << endl;
    }

    return 0;
}

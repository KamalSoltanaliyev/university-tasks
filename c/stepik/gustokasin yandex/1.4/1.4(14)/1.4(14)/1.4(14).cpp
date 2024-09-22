#include <iostream>
#include <algorithm>
using namespace std;

bool canFit(int a1, int b1, int c1, int a2, int b2, int c2) {
    return (a1 <= a2 && b1 <= b2 && c1 <= c2);
}

int main() {
    int A1, B1, C1, A2, B2, C2;
    cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;

    int box1[3] = { A1, B1, C1 };
    int box2[3] = { A2, B2, C2 };
    sort(box1, box1 + 3);
    sort(box2, box2 + 3);

    if (box1[0] == box2[0] && box1[1] == box2[1] && box1[2] == box2[2]) {
        cout << "Boxes are equal" << endl;
    }
    else if (canFit(box1[0], box1[1], box1[2], box2[0], box2[1], box2[2])) {
        cout << "The first box is smaller than the second one" << endl;
    }
    else if (canFit(box2[0], box2[1], box2[2], box1[0], box1[1], box1[2])) {
        cout << "The first box is larger than the second one" << endl;
    }
    else {
        cout << "Boxes are incomparable" << endl;
    }

    return 0;
}

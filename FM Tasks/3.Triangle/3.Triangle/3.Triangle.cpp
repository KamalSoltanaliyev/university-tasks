#include <iostream>  
#include <cmath>     

using namespace std; 

// Funkciya dlya proverki, mozhet li bit postroen treugolnik
bool canFormTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// Funkciya dlya proverki tipa treugolnika po storonam
string triangleTypeBySides(double a, double b, double c) {
    if (a == b && b == c) {
        return "Ravnostoronniy";
    }
    else if (a == b || b == c || a == c) {
        return "Ravnobedrenniy";
    }
    else {
        return "Raznostoronniy";
    }
}

// Funkciya dlya proverki ugla treugolnika po teoreme kosinusov
string triangleTypeByAngles(double a, double b, double c) {
    // Kvadraty storon
    double a2 = a * a, b2 = b * b, c2 = c * c;

    // Proveryaem pryamougolniy, ostrougolniy ili tupougolniy
    if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2) {
        return "Pryamougolniy";
    }
    else if (a2 + b2 > c2 && a2 + c2 > b2 && b2 + c2 > a2) {
        return "Ostrougolniy";
    }
    else {
        return "Tupougolniy";
    }
}

// Funkciya dlya rascheta ploshchadi po formule Gerona
double triangleArea(double a, double b, double c) {
    double s = (a + b + c) / 2;  // Poluperimetr
    return sqrt(s * (s - a) * (s - b) * (s - c));  // Formula Gerona
}

// Funkciya dlya rascheta radiusa vpisannoy okruzhnosti
double inscribedCircleRadius(double a, double b, double c) {
    double area = triangleArea(a, b, c);
    double s = (a + b + c) / 2;  // Poluperimetr
    return area / s;  // Radius vpisannoy okruzhnosti
}

// Funkciya dlya rascheta radiusa opisannoy okruzhnosti
double circumscribedCircleRadius(double a, double b, double c) {
    double area = triangleArea(a, b, c);
    return (a * b * c) / (4 * area);  // Radius opisannoy okruzhnosti
}

// Funkciya dlya rascheta vysot treugolnika
void calculateHeights(double a, double b, double c) {
    double area = triangleArea(a, b, c);
    cout << "Height from side a: " << (2 * area) / a << endl;
    cout << "Height from side b: " << (2 * area) / b << endl;
    cout << "Height from side c: " << (2 * area) / c << endl;
}

// Funkciya dlya rascheta median treugol'nika
void calculateMedians(double a, double b, double c) {
    cout << "Median from side a: " << 0.5 * sqrt(2 * b * b + 2 * c * c - a * a) << endl;
    cout << "Median from side b: " << 0.5 * sqrt(2 * a * a + 2 * c * c - b * b) << endl;
    cout << "Median from side c: " << 0.5 * sqrt(2 * a * a + 2 * b * b - c * c) << endl;
}

// Funkciya dlya rascheta bissektris treugol'nika
void calculateBisectors(double a, double b, double c) {
    cout << "Bisector from side a: " << sqrt(b * c * (b + c - a) * (b + c + a)) / (b + c) << endl;
    cout << "Bisector from side b: " << sqrt(a * c * (a + c - b) * (a + c + b)) / (a + c) << endl;
    cout << "Bisector from side c: " << sqrt(a * b * (a + b - c) * (a + b + c)) / (a + b) << endl;
}

int main() {
    double a, b, c;  // Tri vechetvennyh chisla, kotorye vvedet polzovatel
    cout << "Enter three positive numbers (sides of a triangle): ";
    cin >> a >> b >> c;

    // Proveryaem, mozhet li byt postroen treugolnik
    if (!canFormTriangle(a, b, c)) {
        cout << "Cannot form a triangle with these sides." << endl;
        return 0;  // Esli ne mozhet byt postroen, zavershaem programmu
    }

    // Opredelyaem tip treugolnika po storonam
    cout << "Triangle type by sides: " << triangleTypeBySides(a, b, c) << endl;

    // Opredelyaem tip treugolnika po uglam
    cout << "Triangle type by angles: " << triangleTypeByAngles(a, b, c) << endl;

    // Vyvodim radius vpisannoy i opisannoy okruzhnostey
    cout << "Radius of inscribed circle: " << inscribedCircleRadius(a, b, c) << endl;
    cout << "Radius of circumscribed circle: " << circumscribedCircleRadius(a, b, c) << endl;

    // Raschityvaem vysoty
    calculateHeights(a, b, c);

    // Raschityvaem mediany
    calculateMedians(a, b, c);

    // Raschityvaem bissektrisy
    calculateBisectors(a, b, c);

    return 0;  
}

// Napisat programmu kotoraya pokazivaet skolko raz kakoe cislo povtoryayetsa

#include <iostream>  
#include <vector>   

using namespace std; 

int main()
{
    int number;  // Obyavlyaem peremennuyu dlya hraneniya chisla, kotoroe vvedet polzovatel
    cout << "Enter number: ";  // Vvodim tekst dlya zaprosa chisla ot polzovatelya
    cin >> number;  // Chitaem chislo, kotoroe vvel polzovatel

    // Sozdaem massiv iz 10 znacheniy (ot 0 do 9), inicializiruya vse znacheniya kak 0
    vector<int> digit_count(10, 0);

    // Etot cikl prohodit po kazhdoy cifre chisla
    while (number > 0) {
        int digit = number % 10;  // Nahodim poslednyuyu cifru chisla
        digit_count[digit]++;  // Uvelichivaem schetchik etoy cifry na 1
        number /= 10;  // Udalyayem poslednyuyu cifru iz chisla (deleniem na 10)
    }

    // Vyvodim skol'ko raz kazhdaya cifra povtoryalas'
    for (int i = 0; i < 10; i++) {
        if (digit_count[i] > 0) {  // Esli cifra vstretilas' hotya by odin raz
            cout << "Digit " << i << " occurs " << digit_count[i] << " times." << endl;
        }
    }

    return 0;  
}

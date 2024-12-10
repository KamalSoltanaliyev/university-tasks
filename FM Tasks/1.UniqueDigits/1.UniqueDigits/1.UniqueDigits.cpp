#include <iostream> 
#include <vector>    

using namespace std;

int main()
{
    int number;  // Ob'yavlyaem peremennuyu dlya hraneniya chisla, kotoroe vvedet polzovatel
    cout << "Enter number: ";  // Vyvodim tekst dlya zaprosa chisla ot polzovatelya
    cin >> number;  // Chitaem chislo, kotoroe vvel polzovatel

    // Sozdaem massiv iz 10 znacheniy (ot 0 do 9), inicializiruya vse znacheniya kak false
    vector<bool> unique_digits(10, false);

    // Etot cikl prohodit po kazhdoy cifre chisla
    while (number > 0) {
        int digit = number % 10;  // Nahodim poslednyuyu cifru chisla
        unique_digits[digit] = true;  // Pometyvaem, chto eta cifra bila v chisle
        number /= 10;  // Udalyayem poslednyuyu cifru iz chisla (deleniem na 10)
    }

    int unique_count = 0;  // Ob'yavlyaem peremennuyu dlya scheta unikal'nyh cifr
    // Proveryaem kazhdyy element massiva
    for (int i = 0; i < 10; i++) {
        if (unique_digits[i]) {  // Esli cifra vstretilas' v chisle
            unique_count++;  // Uvelichivaem schetchik unikal'nyh cifr
        }
    }


    cout << "Count of unique digits: " << unique_count << endl;

    return 0;
}

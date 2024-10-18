#include <iostream> // Përfshijmë librarinë e input/output stream (hyrje/daljet) për të përdorur cout dhe cin

// Komentet gjithmonë shkruhen me //
// Komenti nuk ekzekutohet nga kompajleri

/*
  Ky është një koment që mund të zgjasë në disa rreshta.
  Këto komente përdoren zakonisht për të përshkruar pjesë më të gjata të kodit.
*/

using namespace std; // Përdorim namespace-in 'std' për të shmangur shkrimin e std:: për çdo funksion të standardit (p.sh., std::cout)

int main() // Funksioni kryesor i programit, prej të cilit nis ekzekutimi
{          // Çdo funksion duhet të ketë një kllapë të madhe të hapur për të treguar fillimin e trupit të tij.

    // C++ ka fjalë të rezervuara, të cilat zakonisht janë të njohura nga IDE-të dhe kanë ngjyra të veçanta.
    // Ky koment është shtuar për të treguar se fjalët e rezervuara nuk mund të përdoren si emra variablash.

    // Funksioni 'cout' përdoret për të printuar tekst në ekran (dalje output).
    // "\n" është një shenjë për rresht të ri (newline).
    cout << "Hello World!\n"; // Printojmë "Hello World!" dhe kalojmë në rreshtin e ri

    // Kodi përfundon me kthimin e një vlere nga funksioni main.
    // Kthimi i 0 tregon se programi është ekzekutuar me sukses.
    return 0; // Funksioni 'main' duhet të kthejë një vlerë integer, prandaj kthejmë 0 për të treguar sukses
}

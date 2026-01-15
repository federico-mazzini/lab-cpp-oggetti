#include <iostream>
#include <string>
#include <cctype>   // per toupper
using namespace std;

 // numero di email
const int N = 12;

// array di email
string emails[N] = {
    "marco.rossi@studio.alberghetti.it",
    "anna.bianchi@studio.alberghetti.it",
    "luca.verdi@studio.alberghetti.it",
    "giulia.moretti@studio.alberghetti.it",
    "alessandro.ferrari@studio.alberghetti.it",
    "chiara.galli@studio.alberghetti.it",
    "matteo.martinelli@studio.alberghetti.it",
    "sara.ricci@studio.alberghetti.it",
    "stefano.colombo@studio.alberghetti.it",
    "elena.sartori@studio.alberghetti.it",
    "gianluca.marini@studio.alberghetti.it",
    "marta.leone@studio.alberghetti.it"
    };


/*
    TODO: la seguente funzione prende in input una string s minuscola e modifica il primo carattere rendendolo maiuscolo.
    Esempio: "marco" -> "Marco", "rossi" -> "Rossi"

    Hint: usare la funzione toupper(), vedi funzione minuscolo() in esercizio 3_userGenerator.cpp

*/
string primoCarattereMaiuscolo(string &s) {
    if(s.length()>0){
        s[0]=toupper(s[0]);
    }
    return s;
}

int main() {

    // array destinazione per "Nome Cognome"
    string nomiCognomi[N];


    // ciclo su tutte le email
    for (int i = 0; i < N; i++) {
        string email = emails[i]; //email corrente

        //TODO: rimuovere la parte dopo la chiocciola
        int posChiocciola=email.find('@');
        string parte=email.substr(0, posChiocciola);

        // TODO: spezzare la stringa in due parti diverse: nome e cognome (utilizzare il punto come criterio per separare)
        int posPunto=parte.find('.');
        string nome=parte.substr(0, posPunto);
        string cognome=parte.substr(posPunto + 1);

        // TODO: rendere maiuscolo il primo carattere di nome e cognome (usare la funzione primoCarattereMaiuscolo)
        primoCarattereMaiuscolo(nome);
        primoCarattereMaiuscolo(cognome);

        // TODO: inserire in nomiCognomi[i] l'insieme delle due stringhe (concatenarle con l'operatore +)
        nomiCognomi[i]=nome+" "+cognome;

    }

    // stampa il risultato
    cout << "Risultato:\n";
    for (int i = 0; i < N; i++) {
        cout << nomiCognomi[i] << endl;
    }

    return 0;
}

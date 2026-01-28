#include <iostream>
#include <string>

using namespace std;

/***********************************************************************************************************
 *                                 Modifica della classe studente (incapsulamento)                         *
 *   Per come abbiamo definito la classe nel file precedente, è possibile inserire una media di 44:  *
 *   questo è concettualmente sbagliato, ma il programma non ci darà nessun errore se lo facciamo          *
 *   Per evitare problemi di questo tipo, si preferisce                                                    *
 *      1. modificare la "visibilità" dei campi della classe rendendoli privati                            *
 *      2. creare funzioni che permettono di fare modifiche controllate ai campi,                          *
 *         (ad esempio in questo caso controllando che la nuova media sia tra 0 e 10)                      *
 *                                                                                                         */

class Studente {
private:
    string nome;
    int eta;
    float media;

public:
    void setNome(string nuovoNome) {
        nome = nuovoNome;
    }

    void setEta(int nuovaEta) {
        if(nuovaEta > 0)
            eta = nuovaEta;
    }

    void setMedia(float nuovaMedia) {
        if(nuovaMedia >= 0 && nuovaMedia <= 10)
            media = nuovaMedia;
        else cout << "Impossibile definire media perchè non compresa tra 0 e 10";
    }

    string getNome() {
        return nome;
    }

    int getEta() {
        return eta;
    }

    int getMedia() {
        return media;
    }

    void stampaStudente(){
        cout << "Nome: " << nome << ", eta: " << eta << ", media: " << media << endl;
    }
};

int main()
{
    // TODO Istanziare un nuovo oggetto e valorizzarlo attraverso i nuovi metodi set
    Studente s;
    s.setNome("Paolo");
    s.setEta(19);
    s.setMedia(8.00);

    // TODO Adesso che gli attributi della classe sono privati, com'è possibile accedervi?
    //      Risolvere il problema creando nuove funzioni "get" che permettano l'accesso a tutti gli attributi della classe
    s.getNome();
    s.getEta();
    s.getMedia();
    s.stampaStudente();

    return 0;
}

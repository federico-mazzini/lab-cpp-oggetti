#include <iostream>
#include <string>

using namespace std;

/***************************************************************************
 *                      Utilizzo della classe studente                    */

class Studente {
public:
    string nome;
    int eta;
    float media;

    void stampaStudente(){
        cout << "Nome: " << nome << ", eta: " << eta << ", media: " << media << endl;
    }
};

int main()
{
    /*********************** Creazione di oggetti ******************************/
    // TODO Creare un nuovo studente "Mario" con eta 17 e media 7
    // TODO Creare un nuovo studente "Maria"  (questa volta con un puntatore) con eta 18 e media 8
    Studente mario;
    mario.nome="mario";
    mario.eta=17;
    mario.media=7.0;

    Studente maria;
    Studente *p=&maria;
    p->nome="maria";
    p->eta=18;
    p->media=8.0;

    /************************** Visualizzazione ********************************/
    // TODO Visualizzare il nome e la media sia di Mario che Maria
    mario.stampaStudente();
    p->stampaStudente();

    return 0;
}

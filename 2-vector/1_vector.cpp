#include <iostream>
#include <vector>

using namespace std;

/***************************************************************************
 *                          Vector hands-on                               */

int main()
{
    /******************************************************************************
     * L'array è una zona di memoria fissa.
     * Il vector è una CLASSE che modella un array dinamico
     * e una serie di metodi per gestirlo in modo più comodo e sicuro.          */

    // Array classico (dimensione fissa)
    int arr[5] = {10, 20, 30, 40, 50};

    // Dichiarazione di vector (vettore dinamico di int, inizialmente vuoto)
    vector<int> v1;

    // Dichiarazione e inizializzazione di un vector con alcuni valori
    vector<int> v2 = {10, 20, 30};

    cout << "Esempio di array classico (dimensione fissa):" << endl;
    cout << "Primo elemento arr[0]: " << arr[0] << endl;
    cout << endl;

    cout << "Esempio di vector v2 (inizializzato con {10, 20, 30}):" << endl;
    cout << "Primo elemento v2[0]: " << v2[0] << endl;
    cout << endl;


    /*******************************************************************************************
     *      Accesso agli elementi: [] vs .at()
     *      Un vector internamente usa un array, ma espone un'interfaccia ad oggetti           */

    // Come con gli array, posso usare l'operatore []
    cout << "Accesso con []: v2[0] = " << v2[0] << endl;

    // Versione "object oriented" con controllo sugli indici: .at()
    cout << "Accesso con .at(): v2.at(0) = " << v2.at(0) << endl;
    // TODO che cosa succede se provo a fare v2.at(10)?


    /********************************************************************************
     * Ottenere informazioni sullo stato di un vector attraverso metodi            */

    // .size()
    cout << "Dimensione di v2 (numero di elementi): " << v2.size() << endl;
    cout << endl;

    // .empty()
    if (v1.empty())
        cout << "il vector v1 è vuoto (non ha elementi)" << endl;
    else
        cout << "il vector v1 NON è vuoto (contiene elementi)" << endl;
    cout << endl;

    // .front() e .back()
    cout << "Primo elemento di v2 (front): " << v2.front() << endl;
    cout << "Ultimo elemento di v2 (back): " << v2.back() << endl;
    cout << endl;


    /****************************************************************************
     *      Manipolare il contenuto di un vector attraverso i suoi metodi       */


    // .push_back()
    v1.push_back(5);
    v1.push_back(10);
    v1.push_back(15);
    // TODO: cosa fa la funzione push_back()?


    // .pop_back()
    v1.pop_back();
    v1.pop_back();
    // TODO: cosa fa la funzione pop_back()?



    // .clear()
    v1.clear();
    // TODO: cosa fa la funzione clear()?



    return 0;
}

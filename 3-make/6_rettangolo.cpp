#include <iostream>
#include <string>

using namespace std;
 /********************************************************************************************
 *                                  Implementazione classe Rettangolo                        *
 *                                                                                           *
 *   Implementare una classe Rettangolo, che modelli la figura geometrica                    *
 *   Implementarla in maniera coerente ai seguenti requisiti:                                *
 *   - si vuole calcolare l'area e il perimetro del rettangolo                               *
 *   - si vuole stampare le informazioni del rettangolo                                      *
 *                                                                                           *
 *********************************************************************************************/

class Rettangolo {
private:
    // Campi
    float base;
    float altezza;
public:
    // Costruttore
    // Metodi set... e get...
    void setBase(float nuova_base){
        if(nuova_base>0)
            base=nuova_base;
    }

    void setAltezza(float nuova_altezza){
        if(nuova_altezza>0)
            altezza=nuova_altezza;
    }

    float getBase(){
        return base;
    }

    float getAltezza() {
        return altezza;
    }

    // Altri metodi
    float perimetro(float base,float altezza){
        return (base+altezza)*2;
    }

    float area(float base,float altezza){
        return (base*altezza);
    }

    void stampaInformazioni(){
        cout<<"la base del rettangolo e' "<<base<<" , l'altezza e' "<<altezza<<", il perimetro e' "<<perimetro(base,altezza)<<", l'area e' "<<area(base,altezza)<<endl;
    }
};

int main()
{
    // TODO testare
    Rettangolo r;
    float base=0.0,altezza=0.0;
    cout<<"inserisci la base del rettangolo: ";
    cin>>base;
    r.setBase(base);
    cout<<"inserisci l'altezza del rettangolo: ";
    cin>>altezza;
    r.setAltezza(altezza);
    cout<<"la base del rettangolo e' "<<r.getBase()<<" , l'altezza e' "<<r.getAltezza()<<", il perimetro e' "<<r.perimetro(base,altezza)<<", l'area e' "<<r.area(base,altezza)<<endl;


    return 0;
}

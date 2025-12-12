#include <iostream>
#include <string>

using namespace std;

/*
    size() e length()
    TODO: stampa la lunghezza della string passata in input
*/
void lunghezzaStringa(string stringa){
    int x=stringa.size();
    cout<<"la lunghezza della stringa è: "<<x<<endl;
    cout<<endl;
}

/*
    find()
    TODO: immettere una stringa da tastiera e comunicare all'utente se è presente la parola "ciao"
            se la parola è presente, stampare "La parola ciao è presente"
            altrimenti stampare "La parola ciao NON è presente"
*/
void trovaCiao(string stringa){
    int z=stringa.find("ciao");
    if(z==-1)
        cout<<"la parola ciao NON è presente"<<endl;
    else
        cout<<"la parola ciao è presente"<<endl;
}


/*
    replace()
    TODO: sostituire la parola "pizza" con la parola "pasta" e stampare la nuova stringa
*/
void sostituisciPizzaConPasta(string stringa){
    int z=stringa.find("pizza");
    if(z!=-1){
        stringa.replace(z, 5, "pasta");
        cout<<"stringa dopo replace: "<<stringa<<endl;}
    else{
        cout<<"la parola pizza NON è presente"<<endl;
        cout<<stringa<<endl;}
}


/*
    substr()
    TODO: estrarre e stampare la prima parola della stringa passata in input

    HINT: la prima parola termina al primo spazio (trovabile con find())
*/
void stampaPrimaParola(string stringa){
    int z=stringa.find(" ");
    string s=stringa.substr(0, z);
    cout<<"prima parola estratta: "<<s<<endl;
}


/*
    insert()
    TODO: inserire alla fine della stringa passata in input " Giovanni!" e stampare la nuova stringa
*/
void aggiungiGiovanni(string frase){
    frase.insert(frase.length(), " Giovanni!");
    cout<<"stringa dopo insert: "<<frase<<endl;
}

int main()
{
    string str;

    cout << "Inserire valore stringa: ";
    getline(cin, str);

    lunghezzaStringa(str);
    trovaCiao(str);
    sostituisciPizzaConPasta(str);
    stampaPrimaParola(str);
    aggiungiGiovanni(str);

    return 0;
}

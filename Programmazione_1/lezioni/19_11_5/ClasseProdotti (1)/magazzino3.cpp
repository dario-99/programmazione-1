#include "magazzino3.h"



void Crea_Magazzino(Magazzino & M, int & n){

    cout << "\n Quanti Prodotti diversi contiene il magazzino?: ";
    cin >> n;
    cout << "\n Inserimento Dati Prodotti.";
    for (int i=0; i<n; i++) {
    cin.ignore();
        cin >> M[i];}
    cout << "\n Fatto!";      
}

bool Cerca_Prodotto(const Magazzino & M, const int n, const char * C, int & pos){
    
    bool trovato=false;
    int i=0;
    pos=-1;
    
    while(i<n && !trovato)
      if(!strcmp(M[i].get_Cod(),C)) {
       pos=i;
       trovato=true;
      }     
      else i++;
return trovato;   
}    

bool Elimina_Prodotto(Magazzino & M,  int & n, const int pos) {
    if(pos>=0) {
       for(int i=pos; i<n-1; i++)
         M[i]=M[i+1];
       n--;
       return true;
   }   
   else return false;
}    

void Visualizza_Magazzino(ostream & out, const Magazzino & M, const int n){
    for (int i=0; i<n; i++)
        out << M[i] << endl;  
}

/*
void Stampa_StatoMagazzino(const Magazzino & M, const int n){
    ofstream file;
    file.open("Magazzino.txt", ios::out);
    if(file) {
        file << "\n Magazzino:";
        for (int i=0; i<n; i++){
         file << "\n *************************************";
         file << "\n Codice Prodotto: " << M[i].Codice;
         file << "\n Descrizione Prodotto: " << M[i].Descrizione;
         file << "\n Disponibilita': " << M[i].Qta;      }
         file.close();
     }   
    else cout << "\n errore in scrittura";   
      
}
*/   


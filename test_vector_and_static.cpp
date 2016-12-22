#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class FabbricaMacchina
	{
		private:
			static int numeroMacchineProdotte;
			string colore;
			string modello;
			int tipoCambio;
			
		public:
			FabbricaMacchina(string colore, string modello, int tipoCambio)
				{
					this -> numeroMacchineProdotte++;
					this -> colore = colore;
					this -> modello = modello;
					this -> tipoCambio = tipoCambio;
				}
				
			int numeroMacchine()
				{
					return numeroMacchineProdotte;
				}
				
			string getModello()
				{
					return modello;	
				}						
	};

int FabbricaMacchina::numeroMacchineProdotte = 0;

main() 
	{
		string colore, modello;
		bool uscita = true;
		FabbricaMacchina* macchina;
		vector<FabbricaMacchina> fabbrica;
		do 
			{
				cout << "Inserisci colore: ";
				cin >> colore;
				cout << "Inserisci modello: ";
				cin >> modello;
				
				macchina = new FabbricaMacchina(colore, modello, 1);
				fabbrica.push_back(*macchina);
				delete macchina;
				
				cout << endl << "1 - Inserisci altra macchina" << endl;	
				cout << "0 - Stampa numero di macchine inserite" << endl << endl;
				cout << "Scelta: ";
				cin >> uscita;
			}
		while (uscita);
		
		cout << "Sono state prodotte " << fabbrica[1].numeroMacchine() << " macchine " << endl;
		
		for (int i = 0; i < fabbrica[1].numeroMacchine(); i++)
			{
				cout << endl << "Modello Macchina: " << fabbrica[i].getModello();
			}
	}

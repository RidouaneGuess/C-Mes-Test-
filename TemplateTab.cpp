#include<iostream>
#include<string>
using namespace std;
template <class T>
class Tableau
{
	private:
		int taille;
		int compteur=0;
		//T *tab;
		T *tab;
	public:
		void Ajouter(T);
		void Affichage();
		Tableau(int);
};
template <class T>
Tableau<T>::Tableau(int max)
{
	taille=max;
	tab=new T[taille+1];
}
template <class T>
void Tableau<T>::Ajouter(T elm)
{
	if(compteur<taille){
	tab[compteur]=elm;
	compteur++;
	}
	else{
		cout<<"\nLe tableau est plein"<<endl;
	}
}
template <class T>
void Tableau<T>::Affichage(){
	for(int i=0;i<compteur;i++)
		cout<<tab[i]<<"\t"<<endl;
}
int main()
{
  Tableau<int> t1(5);
  Tableau<float> t2(5);
  Tableau<string> t3(3);
  t1.Ajouter(1);
  t1.Ajouter(2);
  t1.Ajouter(3);
  t1.Ajouter(4);
  t1.Ajouter(5);
  t1.Affichage();
  t1.Ajouter(6);
  t2.Ajouter(1.5);
  t2.Ajouter(2.3);
  t2.Ajouter(4.4);
  t2.Affichage();
  t3.Ajouter("Ridouane");
  t3.Ajouter("Alazi");
  t3.Affichage();
  return 0;
}


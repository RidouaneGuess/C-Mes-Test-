#include<iostream>
#include<string>
using namespace std;
template <class T>
class Mat
{
	private:
		int ligne;
		int colonne;
		T **tab;
	public:
		Mat(int,int);
		Mat operator+(Mat);
		void Remplissage();
		void Affichage();
};
template <class T>
Mat<T>::Mat(int line,int col)
{
	ligne=line;
	colonne=col;
	tab=new T*[ligne];
	for(int i=0;i<ligne;i++)
		tab[i]=new T[colonne];
	for(int i=0;i<ligne;i++)
		for(int j=0;j<colonne;j++)
			tab[i][j]=0;
}
template <class T>
Mat Mat<T>::operator+(Mat M)
{
	Mat M1;
	for(int i=0;i<ligne;i++)
		for(int j=0;j<colonne;j++)
			M1[i][j]=tab[i][j]+M[i][j];
	return M1;
}
template <class T>
void Mat<T>::Remplissage()
{
  for(int i=0;i<ligne;i++)
  {
	  for(int j=0;j<colonne;j++)
	  {
		  cout<<"\nTab["<<i<<"]"<<"["<<j<<"]="<<endl;
		  cin>>tab[i][j];
	  }
  }
}
template <class T>
void Mat<T>::Affichage()
{
	for(int i=0;i<ligne;i++)
		for(int j=0;j<colonne;j++)
			cout<<tab[i][j]<<"\t"<<endl;
}
int main()
{
	Mat<int> M1(3,3);
	cout<<"\nAvant saisie:"<<endl;
	M1.Affichage();
	M1.Remplissage();
	cout<<"\nAprès saisie:"<<endl;
	M1.Affichage();
	return 0;
}
	





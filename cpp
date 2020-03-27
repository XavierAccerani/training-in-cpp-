#include <iostream>
using namespace std;

int main() {
  string color;
  char like;
  bool isBlue = false, likeButterflies = false;


  cout << "enter a color please : " << endl;
  cin >> color;

  cout << "Do you like butterflies ?" << endl;
  cin >> like;


if (color == "blue")
  {
    isBlue = true;

  }

if (like == 'y')
  {
    likeButterflies = true;

  }

  if (isBlue && likeButterflies)
  {
    cout << "sunny sky and colored insects, i see :)" << endl;

  }


  else if (isBlue)
    {
      cout << "you chose the color of the sunny sky, i knew you'd do that! :)" << endl;

    }

  else if (not isBlue)
  {
    cout << "you chose the color " << color << ", I wasn't expecting that one " << endl;


  }


}








#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!\n";

  cout << "Lancement du programme...\n" ;

  int n;
  double nombre, somme= 0;
  // nice !!

  // est ce que ca marche aussi?


  cout << "Combien de nombres veux tu entrer ? ";
  cin >> n;

  cout << "D'accord tu veux entrer " << n << " nombres\n";

  for (int compteur = 0; compteur < n; compteur += 1 )
  {
    cout << "Quel nombre veux tu entrer " ;
    cin >> nombre ;

    somme += nombre;

  }

  double moyenne = somme /n;
  cout << "La somme des nombres que tu viens d'entrer est de " << somme << " !\nLa moyenne quand à elle est de " << moyenne << " :)\n\n\n fermeture du programme...";


}

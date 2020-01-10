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

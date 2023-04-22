#include <iostream>
#include <string>

using namespace std;
int main(){
  string carac_1, carac_2, carac_3;

  cin >> carac_1 >> carac_2 >> carac_3;
  
  if(carac_1 == "vertebrado"){
    if(carac_2 == "ave"){
      if(carac_3 == "carnivoro")
        cout << "aguia" << endl;
      else if(carac_3 == "onivoro")
        cout << "pomba" << endl;
    }else if(carac_2 == "mamifero"){
      if(carac_3 == "onivoro")
        cout << "homem" << endl;
      else if(carac_3 == "herbivoro")
        cout << "vaca" << endl;
    } 
  }else if(carac_1 == "invertebrado"){
    if(carac_2 == "inseto"){
      if(carac_3 == "hematofago")
        cout << "pulga" << endl;
      else if(carac_3 == "herbivoro")
        cout << "lagarta" << endl;
    }else if(carac_2 == "anelideo"){
      if(carac_3 == "hematofago")
        cout << "sanguessuga" << endl;
      else if(carac_3 == "onivoro")
        cout << "minhoca" << endl;
    }
  }
  return 0;
}
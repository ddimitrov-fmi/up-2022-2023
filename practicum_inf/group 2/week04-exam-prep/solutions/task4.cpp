#include<iostream>
using namespace std;


int main(){
  double price;
  int people;
  double promo = 0.0;
  
  cin>>people>>price;
  
  if(people>= 5 && people<=10){
    promo = 0.05;
  }
  else if(people>= 11 && people<=20){
    promo = 0.10;
  }
  else if(people >= 21){
    promo = 0.15;
  }
  
  double sum = (people * price) - (people*price*promo);
  
  cout << sum << endl;
  
  return 0;
}

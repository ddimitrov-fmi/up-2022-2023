#include<iostream>
using namespace std;


int main(){
  bool carIsNew,hasAirConditioner;
  int horsePower,  kmDriven, price;
 
 cin>>carIsNew>>hasAirConditioner>>horsePower>>kmDriven>>price;
 bool isHeBuying = 0;
 
 if(!carIsNew && hasAirConditioner && kmDriven<115000 && horsePower>=70 && price<=6000){
   isHeBuying=1;
 }
 if(!carIsNew && !hasAirConditioner && kmDriven<180000 && horsePower>=60 && price<=2000){
   isHeBuying=1;
 }
 if(carIsNew && horsePower>=70 && horsePower<=90 && price<=25000){
   isHeBuying=1;
 }
 
 cout << isHeBuying << endl;
	
	
	return 0;
}

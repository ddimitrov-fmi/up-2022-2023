#include<iostream>
using namespace std;


int main(){
	int n;
	
	cin >> n;
	
	int spaces = n - 1;  
  
    for (int i = 0; i < n; i++)  
    {  
 
        for (int j = 0; j < spaces; j++){
        	cout << " ";  
		}
            

        for (int j = 0; j <= i; j++){
        	cout << "* "; 
		}  
             
        cout << endl;  
        spaces--;  
    }  
  
    spaces = 0;  
  
    for (int i = n; i > 0; i--)  
    {  
        for (int j = 0; j < spaces; j++){
        	cout << " ";  
		}
 
        for (int j = 0;j < i;j++) {
        	cout << "* "; 
		}
		
        cout << endl; 
        spaces++;  
    }  

	return 0;
}

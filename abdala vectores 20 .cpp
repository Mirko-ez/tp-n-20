#include <bits/stdc++.h>

using namespace std;

vector <int> GenerarVector (vector <int> V, int n);
void MostrarVector(vector <int> v);
int ContarMultiplosdeDos (vector<int> V);

int main()

   {
   	 vector<int> A,B;
   	 
   	 A=GenerarVector(A,100);
   	 MostrarVector(A);
   	 cout<<ContarMultiplosdeDos(A);
   	 return 0;
   }
   
   vector<int>GenerarVector(vector<int>V, int n)
   
   {
   	srand(time(NULL));
   	
   	int e,i;
   	  
   	  for(i=0;i<n;i++)
   	  {
   	  	 e=rand()%150;
   	  	 V.push_back(e);
		 }
		 
		 return V;
   }
   
   void MostrarVector(vector <int> V)
   
   {
   	 int i;
   	    for(i=0;i<V.size();i++)
   	    {cout<<V[i]<<"/";}
   	    
   	    cout<<endl;
   }
    
    int ContarMultiplosdeDos (vector<int> V)
   {
 	int i,e;
 
 	for(i=0;i<V.size();i++)
 	{if (V[i]%2==0){
     e++;
	 }
	 }
	 return e;
   }  

   


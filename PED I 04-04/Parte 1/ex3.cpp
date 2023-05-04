#include <iostream>

using namespace std;

int main()
{
    float p1, p2, a1, a2, m;


      cout<<"Digite a nota da primeira prova ";
      cin >> p1;
    	while (p1> 6){
    		  cout<<"Digite a nota da primeira prova ";
    		  cin >> p1;
		}
	
	    cout << "Digite a nota da primeira atividade ";
	    cin >> a1; 
	            	while (a1 > 4){
	    		  cout<<"Digite a nota da primeira atividade ";
	    		  cin >> a1;
		}

    
      cout<<"Digite a nota da segunda prova ";
      cin >> p2;
        	while (p2> 6){
    		  cout<<"Digite a nota da segunda prova ";
    		  cin >> p2;
		}


	    cout << "Digite a nota da segunda atividade ";
	    cin >> a2; 
	    	while (a2> 4){
	    		  cout<<"Digite a nota da segunda atividade ";
	    		  cin >> a2;
		}
		
	m = (p1 + a1 + p2 + a2) / 2.0;
	cout << "Media final do aluno: " << m;

    return 0;
}


#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    string operation;
    
    double interger1, interger2; 
    
    cout << "Basic Calculator\n";
    
    cout <<"What operation will you be using { + , - , *, / } ? \n";
    cin >> operation;
    
    cout << "Enter the first number: \n";
    cin >> interger1; 
    
    cout << "Enter the second number: \n";
    cin >> interger2; 
    
   
    
    
    if(operation == "+"){
        double finalResult; 
        
        finalResult = interger1 + interger2;
        cout << "Your result is: " << finalResult;
    }
    
    
    else if( operation == "-"){
        double finalResult; 
        
        finalResult = interger1 - interger2;
        
        cout << "Your result is: " << finalResult;
        
    }
    
        else if( operation == "*"){
        double finalResult; 
        
        finalResult = interger1 * interger2;
        
        cout << "Your result is: " << finalResult;
        
    }
    
    
        else if( operation == "/"){
        double finalResult; 
        
        finalResult = interger1 / interger2;
        
        cout << "Your result is: " << finalResult;
        
    }
    

    return 0;
}
#include <iostream>
using namespace std;

int main() {
  double number1 , number2;
  char calculation;

  cout<<"ENTER THE FIRST DIGIT: " ;
  cin>> number1 ;
  cout<<"ENTER THE SECOND DIGIT: ";
  cin>> number2 ;

  cout<<"ENTER THE OPERATION : ";
  cin>>calculation;

  switch(calculation){
    case '+':
    cout<<number1 + number2;
    break;

    case '-':
    cout<<number1 - number2;
    break;

    case '*':
    cout<<number1 * number2;
    break;

    case '/':
    cout<<number1 / number2;
    break;

    
    default:
    cout<<"INVALID OPERATION";
    break;
  }
  return 0;
    
}

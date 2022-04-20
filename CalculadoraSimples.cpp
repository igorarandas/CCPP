#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

int num1, num2, num3, soma, sub, multi, div;


    cout << "Digite o primeiro numero: " << endl;
    cin >> num1;
    cout << "Digite o segundo numero é: " << endl;
    cin >> num2;
    cout << "Digite o terceiro numero: " << endl;
    cin >> num3;

soma     = num1 + num2 + num3;
sub      = num1 - num2 - num3;
multi    = num1 * num2 * num3;
div      = num1 / num2 / num3;

cout << "a soma e: " << soma << endl;
cout << "a subtraçao e" << sub << endl;
cout << "a multiplicaçao e" << multi << endl;
cout << "a divisao e" << div << endl;

system("pause");
return 0;
}

#include <iostream>
using namespace std;

int main(){
  int A,B, C;
  cout << "Digite o primeiro número: " << endl;
  cin >> A;
  cout << "Digte o segundo número: " << endl;
  cin >> B;

  C = A;
  A = B;
  B = C;

  cout << A << endl;
  cout << B << endl;



    return 0;
    system ("pause");
}

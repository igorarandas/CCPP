#include <iostream>

using namespace std;

int main()
{
int dia,mes,ano,idade,totaldias;
cout << "Digite o dia do seu nascimento: " << endl;
cin >> dia;
cout << "Digite o mês do seu nascimento: " << endl;
cin >> mes;
cout << "Digite o ano do seu nascimento: " << endl;
cin>> ano;

idade = (ano-2022);
totaldias = (idade*365);

cout << totaldias << endl;
    return 0;
}

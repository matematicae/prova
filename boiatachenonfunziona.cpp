#include <iostream>
#include <string>
using namespace std;
main()
{
    string n,c;
    cin>>n;
    cin>>c;
    char in_nome=n[0];
    char in_cognome=c[0];
    if(in_nome!=in_cognome)
    {n[0]=in_cognome;
    c[0]=in_nome;
    cout<<"ciao "<<n<<" "<<c;}
    else cout<<"errore!!\nil tuo nome fa schifo!\nper altri amici tristi contattare\nGiovanni Guerzoni +39 340 075 4405";
}

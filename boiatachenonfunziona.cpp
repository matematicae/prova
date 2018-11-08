#include <iostream>
#include <string>
using namespace std;
main()
{
    string n,c;
    cin>>n;  //una stringa di caratteri presa dall'user con cin si interrompe allo spazio
    cin>>c;  //basta chiedere due stringhe: nome e cognome in modo che allo spazio si cambi invece che usare getline()
    char in_nome=n[0];
    char in_cognome=c[0];
    if(in_nome!=in_cognome)
    {n[0]=in_cognome; //il primo carattere della stringa nome diventa il primo di quella cognome
    c[0]=in_nome; //e viceversa
    cout<<"ciao "<<n<<" "<<c;}
    else cout<<"errore!!\nil tuo nome fa schifo!\nper altri amici tristi contattare\nGiovanni Guerzoni +39 340 075 4405";
}

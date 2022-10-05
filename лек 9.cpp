1) Перегрузите унарный оператор инкремента (++) так для применения к текстовым строкам: его применение смещает все символы в строке на 1 (см. задание 4.2). Таким же образом перегрузите оператор декремента (- -)
================================================
#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

class oper {
    public:
char txt [200];
int l=strlen(txt);
oper (char* tt) {
strcpy (txt, tt);
}
oper& operator ++ (int) {
for (int i = 0; i<l; i ++) txt[i] ++;
}
oper& operator -- (int) {
for (int i = 0; i<l; i ++) txt[i] --;
}
void out() {
cout << txt << endl;
}
};
int main () {
oper text("abc123");
cout<<text.txt<<endl;
text ++;
cout<<text.txt<<endl;
text --;
cout<<text.txt<<endl;
return 0;
}=================================================================
2) Перегрузите бинарный оператор + для класса CreditCard так, чтобы операция С1 + С2 переносила весь баланс с С2 на С1 (добавляла все сумму с С2 к С1 и обнуляла баланс С2)
====================================
 #include <iostream>
using namespace std;
class Creditcard 
{
public:
    double Number;
    double Balance;
    Creditcard (int a, float b) {Number = a, Balance = b;}
    
};    
    Creditcard operator + (Creditcard C1, Creditcard &C2)
{
    
    C1.Balance=C1.Balance+C2.Balance;
    C2.Balance = 0;
    return C1;     
}

int main()
    {
    Creditcard C1(1345, 100);
    Creditcard C2(1232, 50);
    C1 = C1 + C2; 
    cout << C1.Balance << " , " << C2.Balance << endl;
    return 0;
}

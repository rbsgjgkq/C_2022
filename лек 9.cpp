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

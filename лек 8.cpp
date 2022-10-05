Лекция 8 (Классы 2):
1) Напишите класс CreditCard. Его свойства: Number (int, номер из  4 цифр) и Balance (float, баланс карты); методы: Put(V) и Take(V) - положить и снять деньги. И то и другое задается при создании объекта: CreditCard firstCC(1234, 50) - карта с номером 1234 и балансом в 50 Р. Продемонстрируйте обращение к методу по указателю ( -> ).
  -----------------------------------
  #include <iostream>
using namespace std;
class CreditCard 
{       
public:
    int Number;
    float Balance;
  
    void Put(float c)
    {
        Balance = Balance+c;
        
    }
    
    void Take(float d)
    {
        Balance = Balance-d;
        
    }
private:
    
};

int main()
{
    CreditCard *firstCC=new CreditCard();
    firstCC->Number=1234;
    firstCC->Balance=50;
    
    firstCC->Put(200);
    cout << firstCC->Balance << endl;
    firstCC->Take(100);
    cout << firstCC->Balance << endl;
    
    return 0;
}
==============================================================================================================
2) Напишите функцию Transfer(C1, C2, V): где C1 и C2 - это экземпляры класса CreditCard; V - это сумма. Функция переводит сумму V с карты С1 на карту С2. Баланс карты С1 не может стать отрицательным. Если денег на карте С1 не хватает для перевода, выводится сообщение об ошибке. Если номера карт совпадают, выводится сообщение, что это одна и та же карта и операция не проводится.
============================================
  #include <iostream>
using namespace std;

class CreditCard 
{
        
public:
    int Number;
    float Balance;
    CreditCard (int a, float b) {Number = a, Balance = b;}
private:
    
};

void transfer(CreditCard C_1,CreditCard C_2,float V){
    if(C_1.Number==C_2.Number){
        cout<<"одна та же карта. Попробуйте ещё раз";
    }
    else if(C_1.Balance>=V){
    C_1.Balance-=V;
    C_2.Balance+=V;
    cout<<"успешно завершилась операция."<<endl<<"денги на первой карте"<< " "<<C_1.Balance<<endl<<" денги на второй карте"<<" "<<C_2.Balance;
    }
    
    else cout<<"Недостаточно средств на карте";
    
    
}
int main()
{
    CreditCard C_1(1234, 50);
    CreditCard C_2(1234, 100);
    transfer(C_1,C_2,500);
    
    return 0;
}
==========================================================================================================================================================

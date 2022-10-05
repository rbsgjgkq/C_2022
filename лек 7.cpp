Написать класс ведра Bucket.
свойства: volume (объем в литрах) и used (сколько литров уже налито)
методы: flush() (опустошить. весь объем становится доступным для использования) и fill(v) (наполнить v литрами жидкости). При вызове метода fill() выполняется проверка - достаточно ли в ведре незанятого объема. Если достаточно - метод заполняет ведро (меняет свойство used) и возвращает 0. Если недостаточно - ведро заполняется настолько, насколько возможно и возвращается разница (тот объем, который не поместился)
    Bucket test_01(12, 3);
    cout << "1) " << test_01.volume << ", " << test_01.used << "\n"; // 12, 3
    int rest = test_01.fill(14);
    cout << "2) " << test_01.used << ", " << rest << "\n";  // 12, 5
    
    test_01.flush();
    rest = test_01.fill(8);
    cout << "3) " << test_01.used << ", " << rest << "\n";   // 8, 0
-------------------------------------------------------------------------
#include <iostream>
using namespace std;

class Bucket 
{
public:
    float volume;
    float used;
    Bucket (int a, int b) {volume = a, used = b;}
    
    void flush()
    {
        used = 0;
    }
    
    float fill(float c)
    {   
        float rest = c+used-volume; 
        if (rest>0) {
            used = volume;
        } 
        if (rest <= 0)
        {
            rest = 0; used=used+c;
        }
        return rest;   
    }
private:  
};

int main()
{
     Bucket test_01(12, 3);
     cout << "1) " << test_01.volume << ", " << test_01.used << "\n";

     int rest = test_01.fill(14);
     cout << "2) " << test_01.used << ", " << rest << "\n";

     test_01.flush();
     rest = test_01.fill(8);
     cout << "3) " << test_01.used << ", " << rest << "\n";
    
    return 0;
}

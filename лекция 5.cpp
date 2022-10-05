Лекция 5 (Функции):
1) Напишите функцию SquaredSum(), которая принимает два дробных числа и возвращает квадрат их суммы
cout << SquaredSum(12, 6) <<"\n"; // 324
cout << SquaredSum(12, -6) <<"\n"; // 36
-------------------------------------------
#include <iostream>
#include <cmath>
using namespace std;


double SquaredSum(double a, double b) {
    double S=pow((a+b),2);
    return S;
}
 
int main()
{

 
 
 cout << SquaredSum(12, 6) <<endl;
 cout << SquaredSum(12, -6) <<endl;
 
 return 0;
}
---------------------------------------------------------------------------------------------------------------------
2) Напишите функцию Sort(), которая принимает массив из 10 чисел и сортирует их по убыванию
int a[10] = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
Sort(a);	// 12 9 8 7 6 5 4 3 2 1
-------------------------------------------
#include <iostream>
#include <cmath>
using namespace std;


int Sort(int A[10]) {
    for(int i=0;i<10;i++){
        for(int j=i;j<10;j++){
            
            if(A[j]>A[i]){
                int t;
                t=A[j];
                A[j]=A[i];
                A[i]=t;
            }
            else continue;
        }
        cout<<A[i]<<" ";
    }
    return 0;
}
 
int main()
{

 int a[10] = {1, 8, 3, 6, 5, 4, 9, 2, 7, 12};
 
 cout<<Sort(a);
 
 return 0;
}
---------------------------------------------------------------------------------------------

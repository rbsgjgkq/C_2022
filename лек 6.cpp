1) Напишите функцию reverse(), которая принимает строку и выводит ее на экран в отраженном виде. «Testing» → «gnitseT»
-----------------------------
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;


char reverse(char A[100]) {
    int l=strlen(A); 
    for(int i=l-1;i>=0;i--){
        
        cout<<A[i];
    }
    return 0;
}
 
int main()
{
char a[100];
 cin>>a;
 
 cout<<reverse(a);
 
 return 0;
}
----------------------------------------------------------------------------------------------
2) Напишите перегруженную функцию print(), которая выводит на отдельной строке значения, передаваемые ей через запятую. Функция может принимать: 1) int; (2) float; (3) char; (4) int и int; (Таким образом, фактически, нужно написать четыре функции)
---------------------------------
  #include <iostream>
#include <cmath>
#include <cstring>
using namespace std;


char print(char A[100]) {
    int l=strlen(A); 
    for(int i=0;i<l;i++){
        if((int)A[i]==(int)','){
            continue;
        }
        else cout<<A[i]<<endl;
        
    
    }
    return 0;
}
 
int main()
{
char a[100];
 cin>>a;
 
 cout<<print(a);
 
 return 0;
}
---------------------------------------------------------------------------------------------------------------------------------

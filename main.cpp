#include <iostream>
using namespace std;

int main() {
   int n, a=0, b=1,c;
    cin >> n ;
    if(n<2){
        cout << "errore" <<endl;
    }else{
       cout << b <<endl;
        for(int i=0; i<=n; i++){
            c=a+b;
            cout << c <<endl;
            a=b;
            b=c;

        }
    }
   return 0;
}

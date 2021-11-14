#include <iostream>
using namespace std;

int main() {
   int n, a=1, b=1,c;
    cin >> n ;
    if(n<2){
        cout << "errore" <<endl;
    }else{
        for(int i=2; i<=n; i++){
            c=a+b;
            cout << c <<endl;
            a=b;
            b=c;

        }
    }
   return 0;
}

#include<iostream>
using namespace std;

int main(){
    char n = 'D';
    for(char ch ='A'; ch <= n; ch++){
        for(char k =1; k = n-ch; k++){
            cout<<" ";
        }
        for(int j ='A'; j<= ch; j++){
            cout << ch;
            
        }
        cout<<endl;
    }
}
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    if (num < 0){
        num = -num;
    }
    cout << num;
    return 0;
}
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    for(int i = x; i <= y; i++){
             
    if(i >= 0 && i <= 9){
         switch(i){
            case 1:
            cout << "one\n";
            break;
            case 2:
            cout << "two\n";
            break;
            case 3:
            cout << "three\n";
            break;
            case 4: 
            cout << "four\n";
            break;
            case 5: 
            cout << "five\n";
            break;
            case 6:
            cout << "six\n";
            break;
            case 7: 
            cout << "seven\n";
            break;
            case 8:
            cout << "eight\n";
            break;
            case 9: 
            cout << "nine\n";
            break;
        }
    } else if(i % 2 == 0){
        cout << "even \n";
    } else if (i % 2 == 1){
        cout << "odd\n";
    }
  
    }
    return 0;
}
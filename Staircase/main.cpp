#include <iostream>
using namespace std;

int main(){

    int n = 5;
    int x = n-1;

    for(int i = 0; i < n; i++){
        for(int k = 0; k < n; k++){
            if(k >= x) cout << "#";
            else cout << " ";
        }
        x--;
        cout << endl;
    }

    return 1;
}
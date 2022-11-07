#include <iostream>
#include <vector>

using namespace std;
int main(){

    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};

    int len = arr.size();

    cout << len <<endl;

    int a=0; 
    int b=0;
    int k = 0;

    for(int j = 0; j < len; j++){
        a = a + arr.at(j).at(k);
        b = b + arr.at(j).at(len-1-k);
        k++;
    }

    cout << abs(a-b);

    return 0;
}
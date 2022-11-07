 #include <iostream>

using namespace std;

 int main(){
    int arr[6] = {-4 ,3, -9, 0, 4, 1};

    int len = sizeof(arr)/sizeof(arr[0]);


    int positive = 0;
    int negative = 0;
    int zeros = 0;

    for(int i=0; i < len; i++){

        if(arr[i] == 0){zeros++;}
        else if( arr[i] > 0){positive ++;}
        else negative ++;

    }

    float ratio_1 , ratio_2 , ratio_3;
    ratio_1 = (float)positive / (float)len;
    ratio_2 = (float)negative / (float)len;
    ratio_3 = (float)zeros / (float)len;

    cout << ratio_1 << endl;
    cout << ratio_2 << endl;
    cout << ratio_3 << endl;

 }
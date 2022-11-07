/*
    Given five positive integers, find the minimum and maximum values that can be calculated 
    by summing exactly four of the five integers. Then print the respective minimum and maximum 
    values as a single line of two space-separated long integers.
*/

#include <iostream>

using namespace std;

int main(){

    int arr[5] = {140638725, 436257910, 953274816, 734065819, 362748590}; //  {256741038, 623958417, 467905213, 714532089, 938071625};
    int64_t max_num = 0;
    int64_t  min_num = 0;
    int ignore = 0 ;

    for(int i = 0; i < 5; i++){
        int64_t  sum = 0;
        for(int k = 0; k < 5; k++){
            if(k != ignore) sum += arr[k];
        }
        if(max_num < sum) max_num = sum;
        if( ignore == 0) min_num = sum;
        else if(min_num > sum) min_num = sum;
        ignore ++;

        cout << sum << endl;
    }

    cout << "Largest: " << max_num << endl;
    cout << "Smallest: " << min_num << endl;

    return 0;
}
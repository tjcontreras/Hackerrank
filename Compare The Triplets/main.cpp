#include <iostream>

int main(){

    int a[3] = {1,2,3};
    int b[3] = {3,2,1};
    int score[2] = {0,0};

    for(int i =0; i < 3; i++){
        if(a[i] == b[i]);
        else if (a[i] > b[i]) score[0] = score[0] + 1;
        else score[2]++;

    }

    std::cout << score[0] + '|' + score[1] << std::endl;

    std::cout << "nice" << std::endl;

    return 0;
}
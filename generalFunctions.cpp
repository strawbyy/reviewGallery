#include <iostream>
#include <stdlib.h>
#include <string>

void countdownLoop(){
    int counts;
    std::cout << "Where should the countdown start?\n";
    std::cin >> counts;
    if(counts==-1){
        exit(0);
    }else{
        counts--;
        while(counts>0){
            std::cout << counts << "\n";
            counts--;
        }
    }
}


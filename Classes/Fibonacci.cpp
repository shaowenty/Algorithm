//
//  Fibonacci.cpp
//  Algorithm
//
//  Created by 闫朝 on 2018/6/4.
//  Copyright © 2018年 shaowenty. All rights reserved.
//

#include "Fibonacci.h"
unsigned int Fibonacci_For(const int & length){
    if(length < 1){
        return 0;
    }
    std::cout<<1<<std::endl;
    unsigned int last = 1;
    unsigned int pre = 0;
    for(unsigned int i = 0; i < length-1; i++){
        unsigned int sum = last +pre;
        pre = last;
        last = sum;
        std::cout<<last<<std::endl;
    }
    return last;
}
int* Fibonacci_Array(const int & length){
    if(length < 1){
        return 0;
    }
    int* array = new int[length]{1,1};
    for(int i =2;i<length;i++){
        array[i] = array[i-2]+array[i-1];
    }
    return array;
}
int Fibonacci_Func(const int & index,int * & array){
    if(index<=1){
        array[index] = 1;
        return 1;
    }
    if(array[index] != 0){
        return array[index];
    }
   return array[index]  = Fibonacci_Func(index-1,array) + Fibonacci_Func(index-2,array);
}

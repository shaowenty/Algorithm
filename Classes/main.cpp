//
//  main.cpp
//  Algorithm
//
//  Created by 闫朝 on 2018/5/22.
//  Copyright © 2018年 shaowenty. All rights reserved.
//

#include <iostream>
#include "Hanoi.h"
#include "Fibonacci.h"
#include "ToolFunction.h"
int main(int argc, const char * argv[]) {
   // hanoi(2);
    consumeTime("",false);
    Fibonacci_For(20);
    int* arr = new int[20];
    memset(arr, 0, 20 * sizeof(arr));
    Fibonacci_Func(20,arr);
    for(int i =0;i<20;i++){
        std::cout<<arr[i]<<std::endl;
    }
    consumeTime("2");
  
    return 0;
}

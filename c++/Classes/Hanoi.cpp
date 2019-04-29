//
//  Hanoi.cpp
//  Algorithm
//
//  Created by 闫朝 on 2018/5/22.
//  Copyright © 2018年 shaowenty. All rights reserved.
//


// http://www.cnblogs.com/xxNote/category/611313.html
#include "Hanoi.h"
void hanoiInternal(const int & n , const char* &  A , const char*  & B ,const char* & C){
    if(n == 1){
        printf("Move sheet %d from %s to %s \n",n,A,C);
    }else{
        hanoiInternal(n-1, A, C, B);
        printf("Move sheet %d from  %s to %s \n",n,A,C);
        hanoiInternal(n-1,B,A,C);
    }
}
void hanoi(const int &  n ,const char*  A,const char*  B ,const char*  C){
    hanoiInternal(n, A, B, C);
}

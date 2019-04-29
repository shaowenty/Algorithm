//
//  Hanoi.hpp
//  Algorithm
//
//  Created by 闫朝 on 2018/5/22.
//  Copyright © 2018年 shaowenty. All rights reserved.
//

#ifndef Hanoi_hpp
#define Hanoi_hpp

#include <stdio.h>

void hanoiInternal(const int & n , const char* &  A , const char*  & B ,const char* & C);
void hanoi(const int & n ,const char*   A = "A" , const char*  B = "B" ,const char*  C = "C");

#endif /* Hanoi_hpp */

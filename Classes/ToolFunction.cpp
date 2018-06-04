//
//  ToolFunction.cpp
//  Algorithm
//
//  Created by 闫朝 on 2018/6/4.
//  Copyright © 2018年 shaowenty. All rights reserved.
//

#include "ToolFunction.h"
clock_t clockLast = clock();
void consumeTime(const char *  str,const bool neeedCout){
    auto current = clock();
    if(neeedCout){
        std::cout<< str << ":"  <<current - clockLast <<std::endl;
    }
    clockLast = current;
}

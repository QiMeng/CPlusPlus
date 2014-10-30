//
//  main.cpp
//  Sales
//
//  Created by 永生刘 on 14/10/30.
//  Copyright (c) 2014年 QiMENG. All rights reserved.
//

#include <iostream>

#include "Sales_item.h"
int main(int argc, const char * argv[]) {
    // insert code here...

    Sales_item item1,item2;
    
    std::cin >> item1 >> item2;
    
    if (item1.same_isbn(item2)) {
        std::cout << item1 + item2 << std::endl;
        return 0;
    }else {
        
        std::cerr << "必须是相同的ISBN" << std::endl;
        return -1;
    }
    
    
    return 0;
}

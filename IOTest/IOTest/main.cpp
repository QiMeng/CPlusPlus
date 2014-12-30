//
//  main.cpp
//  IOTest
//
//  Created by 永生刘 on 14/10/30.
//  Copyright (c) 2014年 QiMENG. All rights reserved.
//

#include <iostream>

using namespace std;

class Foo {
    
    
    
};  // 不要忘记有分号



int main(int argc, const char * argv[]) {
    
    //输入两个数返回两个数范围内的每个数
    cout << "输入两个整数" << endl;
    int v1,v2;
    cin >> v1 >> v2;
    
    int low, up;
    
    if (v1 > v2) {
        low = v2;
        up = v1;
    }else {
        
        low = v1;
        up = v2;
    }
    cout << "打印出两数之间的数" << endl;
    for (int i = low ; i < up; ++i) {
        cout << i << endl;
    }
    

//    int i , &ri = i;
//    i = 3;
//    ri = 19;
//    std::cout << i << ri << std::endl;
    
//    /**
//     *  输入两个数字, 打印出来
//     */
//    std::cout << "Enter two numbers:" << std::endl;
//    int v1,v2;
//    std::cin >>v1 >> v2;
//    std::cout << "The sum of " << v1 << " and " << v2 << std::endl;
    
//    string word;
//    while (std::cin >> word) {
//        
//        std::cout << word << std::endl;
//    }
//    while (getline(cin, word)) {
//        cout << word << endl;
//        for (string::size_type i= 0; i< word.size(); ++i) {
//            cout << word[i] << endl;
//        }
//    }
    
//    //读入两个string,分别比较字符, 比较长度
//    string temp1,temp2;
//    cout << "输入两个字符串" << endl;
//    cin >> temp1 >> temp2;
//    if (temp1 == temp2) {
//        cout << "两个字符串相同" << endl;
//    }
//    else if (temp1 > temp2) {
//        cout << "temp1大" << endl;
//    }
//    else {
//        cout << "temp2大" << endl;
//    }
//    if (temp1.size() >= temp2.size()) {
//        cout << temp1 << ">=" << temp2 << endl;
//    }else {
//        cout << temp1 << "<" << temp2 << endl;
//    }
    
//    int amount = 0, value;
//    
//    while (cin >> value)
//        if (value <= 0)
//            ++amount;
//    
//    cout << "amount: " << amount << endl;
    
    
    
    return 0;
}

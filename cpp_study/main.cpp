//
//  main.cpp
//  practice-demo
//
//  Created by manatea on 2017/10/22.
//  Copyright © 2017年 manatea. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int value,sum=0;
    while(cin >> value)
        sum += value;
    cout << "sum is " << sum << endl;
    return 0;
}

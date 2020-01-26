//  Raul Garcia
//  main.cpp
//  pelindrom_alg
//
//  Created by Iris on 2/20/18.
//  Copyright © 2018 raulyg. All rights reserved.
//

#include <iostream>
#include <assert.h>
#include <string.h>
#include <cstring>
#include <stdlib.h>

using namespace std;

bool isPalindrom(char *beg)
{
    //int n= 0;
    //size_t length = length(s-1)
    for(char  *end = strchr(beg,'\0'); --end> beg; ++beg)
    {
        if (*end != *beg)
        {
        return false;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {
    // insert code here..\.
    char str[20];
    //int index,length;
    
    cout << "Enter a string and we will tell you if the string is a palindrom..."<<endl;
    cin >> str;
    cout <<endl;
    
    if (isPalindrom(str))
    {
        cout <<"Is a palindrom" << endl;
    }else
    {
        cout<<"Not a palindrome" << endl;
    }
    
    
    
    return 0;
}

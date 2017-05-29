//
//  main.cpp
//  test
//
//  Created by Siddhartha Singh on 29/05/17.
//  Copyright © 2017 sidd. All rights reserved.
//

#include <stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main() {
    int testcases;
    int inputx_n[2];
    cin>>testcases;
    int temp_sum;
    int flag= 0;
    int i ;
    
    int input_element;
    
    while(--testcases>=0)
    {
        for( i = 0 ; i <2 ; i++)
        {
            cin>>inputx_n[i];
        }
        i = 0;
        
        vector<int> input_array;
        vector<int>::iterator i1;
        for(i = 0 ; i < inputx_n[0] ; i++)
        {
            cin>>input_element;
            input_array.push_back(input_element);
            
            
        }
        
        //starts the part to find, first doing using sorting method;
        sort(input_array.begin() , input_array.end());
        
        //two pointers, one from start, another from end;
        vector<int>::iterator first ;
        vector<int>::iterator second ;
        first = input_array.begin();
        second = input_array.end() - 1;
        
        while(first < second)
        {
            //cout<<"first"<<"\t"<<*first<<endl;
           //cout<<"second"<<"\t" <<*second<<endl;
            
            temp_sum = (*first) + (*second);
            
            //cout<<"temp_sum"<<temp_sum<<endl;
            
            if( temp_sum == inputx_n[1])
            {
                flag = 1;
                //cout<<"Flag = " <<flag;
                break;
            }
            else if( temp_sum < inputx_n[1])
                first++;
            else
                second--;
            
        }
        if(flag)
        {
            cout<<"YES";
            flag =0 ;
            cout<<endl;
            
        }
        else
        {
            cout<<"No";
            cout<<endl;
        }
        
        
        
        
    }
    
    return 0;
}

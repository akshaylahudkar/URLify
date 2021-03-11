//
//  main.cpp
//  URLify
//
//  Created by Akshay Lahudkar on 11/03/21.
//

#include <iostream>
#include<string>

int main(int argc, const char * argv[]) {
    // insert code hereajaa...
    std::string str="Mr John Smith    ";
    
   // std::cin.ignore();
    //getline(std::cin,str,'\n');
    
    
    int flag=0;
    int i=str.size()-1;
    while(i>=0)
    {
        if(flag==0 && str[i]!=' ')
        {
            flag=1;
            i--;
            
            
        }
        
        if(flag==1 && str[i]==' ')
        {
            //replace i with 3 characters
            //std::cout<<i<<" ";
            str.replace(i,1,"%20");
            i--;
            
        }
       else
        i--;
        
        
    }
    
    
        

    std::cout<<str<<"\n";
        


    return 0;
}

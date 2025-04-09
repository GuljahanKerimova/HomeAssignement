
#include "header.h"
int main()
{
    string word;
    cout<<"Hello World\n";
    while(true){
       std::cout<<"Enter a word:";
	   std::cin>>word;
	   if(word == "exit"){
		   break;
	   }
		
	   Hello(word);
	  
	   
    };
     return 0;
    
}

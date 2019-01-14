#include <iostream>
int main(){
    int n1=3;
    int n2=5;
    int limit=1000;
    int i;
    int sum=0;
    for(i=1;i<limit;i++){
       if(i%n1==0||i%n2==0){
           sum=sum+i; 
         //  std::cout<<i<<std::endl; 
	}
    }
     std::cout<<sum;
     return 0;
}

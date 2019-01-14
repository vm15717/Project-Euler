#include <iostream>
#include <vector>
int main(){
     int i1=1;
     int i2=2;
     std::vector<int> vectorints;
     vectorints.push_back(1);
     vectorints.push_back(2);
     int value=0;
     int sum=2;
     int i=1;
     std::vector<int>::iterator it;
     while(value<=4000000){
         it=vectorints.end();
         value=*(it-1)+*(it-2);
         vectorints.push_back(value);
         if(value%2==0){
	   sum=sum+value;
	}
         i++;
     }
     std::cout<<sum<<std::endl;
     return 0;
}

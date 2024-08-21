#include <iostream>
#include <cmath>



int math(int r, int j){
  int x = sqrt((2*r*j)-(j*j));
  return x;
}


int space(int r, int j){
  int x=r-math(r,j);
  for(int k=0;2*x>k;k++){
       std::cout << " ";
       }
  return 0;
}



char star(int r,int j){
   int p=math(r,j);
   
  for(int i=0;i<2*2*p;i++){
    std::cout << "*";
    
   }
    return 0;
}





int main(){
int r;
int j=0;
std::cout << "Enter Radius: " << std::endl;
std::cin >> r;
for (j;j<r;j++){
  //int p=j; 



space(r,j);
star(r,j);
std::cout << "" << std::endl;
}
j=j-5;
for (j;j>0;j--){
  //int p=j; 



space(r,j);
star(r,j);
std::cout << "" << std::endl;
}

return 0;
}




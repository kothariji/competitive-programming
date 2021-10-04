#include <iostream>
using namespace std;


int main()
{
   int T,A,B,i,C,D;
   cin>>T;
   for(i=0;i<T;i++)
   {
       int bag=1;
      cin>>A>>B>>C>>D;
      
      if((D-C)>=A)
      {
          if((D-(C+A))>=B)
          
          {}
          else{ 
              cout<<"bag value 1="<<bag<<"\n";
              bag++; }
      }
      if((D-C)<A){
          cout<<"bag value 2="<<bag<<"\n";
          bag++;
          if((D-A)>=B)
          {}
          else{
              
              cout<<"bag value 3="<<bag<<"\n";
              bag++;}
      }
      cout<<bag<<"\n";
   }

    return 0;
}

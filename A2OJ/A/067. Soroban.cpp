#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

void val0()
{
	cout<<"O-|-OOOO"<<endl;
}
void val1()
{
	cout<<"O-|O-OOO"<<endl;
}
void val2()
{
	cout<<"O-|OO-OO"<<endl;
}
void val3()
{
	cout<<"O-|OOO-O"<<endl;
}
void val4()
{
	cout<<"O-|OOOO-"<<endl;
}
void val5()
{
	cout<<"-O|-OOOO"<<endl;
}

void val6()
{
	cout<<"-O|O-OOO"<<endl;
}

void val7()
{
	cout<<"-O|OO-OO"<<endl;
}
void val8()
{
	cout<<"-O|OOO-O"<<endl;
}
void val9()
{
	cout<<"-O|OOOO-"<<endl;
}


 
int main()
{
 	string s;
 	cin>>s;
 	for(int i=s.length()-1; i >=0; i--)
 	{
 		switch(s[i])
 		{
 			case '0': 	val0();
 						break;
 			case '1': 	val1();
 						break;
 			case '2': 	val2();
 						break;
 			case '3': 	val3();
 						break;
 			case '4': 	val4();
 						break;
 			case '5': 	val5();
 						break;
 			case '6': 	val6();
 						break;
 			case '7': 	val7();
 						break;
 			case '8': 	val8();
 						break;
 			case '9': 	val9();
 						break;
 		}
 	}

 
 	
}
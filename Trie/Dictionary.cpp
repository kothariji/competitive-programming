#include<iostream>
using namespace std;

struct node{
	node *next[150] = {NULL};
	int eow = 0;
	string meaning = "kothariji";
}*head = NULL,t1;

void insert(string s, string mean)
{
	if(head == NULL)
		head  = new node;
	
	node *temp = head;
	int i = 0;
	while(i< s.length() and temp -> next[s[i]-'a'] != NULL)
	{
		temp = temp -> next[s[i]-'a'];
		i++;
	}
	while(i<s.length())
	{
		node *t1 = new node;
		temp -> next[s[i]-'a'] = t1;
		temp = t1;
		i++;
	}
		temp -> meaning = mean;
}

void search(string s)
{
	int i = 0,flag = 0;
	node *temp = head;
	while(i < s.length())
	{
		if(temp -> next[s[i]-'a'] == NULL)
		{
			flag =1;
			break;
		}
		temp = temp -> next[s[i]-'a'];
		i++;
	}
	if(flag == 0 and temp -> meaning != "kothariji")
		cout<<"Meaning: "<<" "<<temp -> meaning<<"\n\n"<<endl;
	else
		cout<<"No such word Found!"<<endl;
}

int main()
{
    string w, m;
	while(1)
	{
		int ch;
		cout<<"Press 1 to insert a word and its meaning"<<endl;
		cout<<"Press 2 to search meaning of a word"<<endl;
		cout<<"Press 3 to exit"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"Enter Word: ";
					cin>>w;
					cout<<"Enter meaning: ";
					cin>>m;
					insert(w,m);
					cout<<"\n\nWord inserted successfully\n\n"<<endl;
					break;

			case 2: cout<<"Enter Word to search: ";
					cin>>w;
					search(w);
					break;

			case 3: cout<<"Thanks for using our service!"<<endl;
					return 0;
					
			default: 	cout<<"Enter a valid input"<<endl;								
						break;
		}
	}
}

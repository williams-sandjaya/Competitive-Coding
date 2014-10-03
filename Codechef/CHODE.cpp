#include<iostream>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
	int t,d;scanf("%d",&t);
	char frq[27],alp[27],ch[10];
	char temp[150001],text[150001],str;
	int count[26];gets(ch);
	while(t--)
	{
		for(int i=0;i<26;i++)
			count[i]=0;
		gets(frq);
		cin.getline(temp,150000); // input into temp
		strcpy(text,temp); // copy input into text
		for(int i=0;text[i]!='\0';i++)
			text[i]=tolower(text[i]); // make all characters in text lowercase
		
		for(int i=0;i<strlen(text);i++)
		{
			if(isalpha(text[i]))
				count[int(text[i])-int('a')]++; // if text[i] has a character then count it
		}
		d=0;int v,v1=26,mn,mx;
		for(int i=0;i<26;i++)
			if(count[i]>0)
				d++; // count occurence of number of unique characters
		mx=0;
		mn=150000;
		for(int i=0;i<26;i++)
		{
			if(count[i]!=0)
				if(mn>count[i])
					mn=count[i]; // count the min occurence of the character that has occurred
		}
		for(int i=0;i<d;i++) // number of unique characters
		{
			mx=0;
			for(int j=25;j>=0;j--) // find the maximum occurence each time and replace it + reset its count
			{
				if(mx<count[j])
				{
					mx=count[j];
					v=j;
				}
			}
			alp[v]=frq[v1-1];
			v1--;
			count[v]=0;
		}
		for(int i=0;i<26;i++)
		{
			if(count[i]==mn)
				alp[i]=frq[26-d];
		}
		for(int i=0;i<strlen(text);i++)
		{
			if(!isalpha(text[i]))
				cout<<text[i];
			else 
			{
				char c=alp[int(text[i])-int('a')];
				if(isupper(temp[i]))
					putchar (toupper(c));
				else
					putchar (c);
			}
		}
		cout<<endl;
	}
}

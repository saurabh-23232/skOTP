#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

string OTPgenerator(int n) 
{
	string str = "0123456789";
    int len = str.length();
 	string otp;
    int j;
    srand(time(0));
	for(int i=1;i<=n;i++)
    {
	   int j = rand()%len;
       otp[i]=str[j];
	}
    for(int i=1;i<=n;i++)
    {
    	cout<<otp[i];
	}
    cout<<endl;
    cout<<"OTP will expire in 10 seconds....."<<endl;
    sleep(10);
	cout<<"Your OTP is expired !!\n\n";
    int choice;
	cout<<"press 1 for new OTP generation"<<endl;
	cout<<"press 2 for exit \n\n";
	cin>>choice;
	switch(choice)
	{
		case 1: system("CLS");
		        cout<<"New OTP : "<<OTPgenerator(n).c_str()<<endl;
		        sleep(5);
		        break;
		case 2: exit(0);
		        break;
	}
}
int main() 
{
    int n;
	cout<<"Enter length :";
	cin>>n;

	OTPgenerator(n);
    return 0;
}

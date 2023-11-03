#include<bits/stdc++.h>
using namespace std;
int main(){
	system("cls");
	system("Color f4");
	cout<<"\t\t\t\t*******************************************\n";
	cout<<"\t\t\t\t*                                         *\n";
	cout<<"\t\t\t\t*\tWelcome To Simple Calculator!!    *\n";
	cout<<"\t\t\t\t*                                         *\n";
	cout<<"\t\t\t\t*******************************************\n";
	//cout<<"Enter the two numbers:\n";
	cout<<"\n\n";
	float num1,num2;
	int choice;
	do{
	cout<<"1.Addition\n";
	cout<<"2.Substraction\n";
	cout<<"3.Multiplication\n";
	cout<<"4.Division\n";
	cout<<"5.Exit\n";
	cout<<"Enter your choice from above:\n";
	cin>>choice;
	if(choice>=1 && choice<=4){
	cout<<"Enter the two numbers:\n";
	cin>>num1>>num2;
}
	switch(choice){
		case 1:
			cout<<"Result= "<<num1+num2<<endl;
			break;
		case 2:
			cout<<"Result= "<<num1-num2<<endl;
			break;
		case 3:
			cout<<"Result= "<<num1*num2<<endl;
			break;
		case 4:
			cout<<"Result= "<<num1/num2<<endl;
			break;
		case 5:
	    cout<<"Thank you for using Simple Calculator......\n"; 
			return 0;
		default:
			cout<<"Please Enter the valid Choice\n"<<endl;
			break;
		}
		cout<<"\n----------------------------------------\n";
	}while(choice!=5);
	
}

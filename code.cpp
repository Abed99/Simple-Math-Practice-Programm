#include<iostream>
#include<ctime>
using std::cin;
using std::cout;
using std::endl;
int main() {
	int a=0 ,b=0 , c=0,d=0,first=0,second=0,third=0,fourth=0,z=0;
	int temp1=0 ,temp2=0 , temp3=0 , temp4=0 ;
	srand(time(0));
	int x=rand()%10;
	int y=rand()%10;
	int sum=x+y;
	cout<<x<<" + "<<y<<" = "<<endl;


	a=sum-3;
	b=sum-rand()%10;
	c=sum+rand()%10;
	d=sum;


//If the answers are equal
	while(1)
	{
		if(a==b || a==c || a==d)
			a+=1;
		else if (b==a || b==c || b==d)
			b+=1;
		else if (c==d)
			c+=1;
		else
			break;
	}

 //	Display answers randomly
	int counter=0;
	while(counter!=4)
	{
		z=rand();
		if(temp1==0 && z%2==0)
		{ 

			cout<<c<<" ";
			temp1++;
			counter++;
		}
		else if(temp2==0 && z%5==0)
		{

			cout<<a<<" ";
			temp2++;
			counter++;
		}
		else if(temp3==0 && z%3==0 )
		{

			cout<<b<<" ";
			temp3++;
			counter++;
		}
		else if(temp4==0)
		{

			cout<<d<<" ";
			temp4++;
			counter++;
		}
	}

int ans=0;
cout<<"\nEnter Your Anser : "<<endl;
cin>>ans;
if(ans==sum)
	cout<<"true"<<endl;
else
	cout<<"false The Anser is "<<sum<<endl;
return 0;
}
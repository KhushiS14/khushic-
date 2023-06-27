#include<iostream>
using namespace std;

class custemer
{
	private:
		
	int cust_id;
	char cust_name[100];
	int cust_age;
	char cust_telecome_brand_name[100]; 
	int cust_mobile_number;
	char cust_city[100];
	char cust_simcard_validity[100]; 
	
	public:
	
	void setdata()
	{
		cout<<"Enter cust_id : ";
		cin>>cust_id;
		cout<<"Enter cust_name : ";
		cin>>cust_name;
		cout<<"Enter cust_age : ";
		cin>>cust_age;
		cout<<"Enter cust_telecome_brand_name : ";
		cin>>cust_telecome_brand_name;
		cout<<"Enter cust_mobile_number : ";
		cin>>cust_mobile_number;
		cout<<"Enter cust_city : ";
		cin>>cust_city;
		cout<<"Enter cust_simcard_validity : ";
		cin>>cust_simcard_validity;	
	}
	
	void getdata()
	{
		cout<<"cust_id :"<<cust_id<<endl;
		cout<<"cust_name : "<<cust_name<<endl;
		cout<<"cust_age :"<<cust_age<<endl;
		cout<<"cust_telecome_brand_name :"<<cust_telecome_brand_name<<endl;
		cout<<"cust_mobile_number : "<<cust_mobile_number<<endl;
		cout<<"cust_city : "<<cust_city<<endl;
		cout<<"cust_simcard_validity : "<<cust_simcard_validity<<"years"<<endl;
	}	
		
};

int main()
{
	custemer c1,c2,c3,c4,c5;
	
	cout<<1<<endl;
	c1.setdata();
	cout<<2<<endl;
	c2.setdata();
	cout<<3<<endl;
	c3.setdata();
	cout<<4<<endl;
	c4.setdata();
	cout<<5<<endl;
	c5.setdata();
	
	cout<<1<<endl;
	c1.getdata();
	cout<<2<<endl;
	c2.getdata();
	cout<<3<<endl;
	c3.getdata();
	cout<<4<<endl;
	c4.getdata();
	cout<<5<<endl;
	c5.getdata();
	
	
}

#include<iostream>
using namespace std;
class student
{
	private:
		
	int stu_id;
	char stu_name[100];	
	int stu_age;
	char stu_course[100];
	char stu_email[100];
	char stu_city[100];
	char stu_college[100];
	
	public:
	
	void setdata()
	{
		cout<<"Enter stu_id ";
		cin>>stu_id;
		cout<<"Enter stu_name ";
		cin>>stu_name;
		cout<<"Enter  stu_age";
		cin>>stu_age;
		cout<<"Enter stu_course ";
		cin>>stu_course;
		cout<<"Enter stu_email ";
		cin>>stu_email;
		cout<<"Enter stu_city ";
		cin>>stu_city;
		cout<<"Enter stu_college ";
		cin>>stu_college;
	}
		
	void getdata()
	{
			cout<<"stu_id"<<stu_id<<endl;
			cout<<"stu_name"<<stu_name<<endl;
			cout<<"stu_age"<<stu_age<<endl;
			cout<<"stu_course"<<stu_course<<endl;
			cout<<"stu_email"<<stu_email<<endl;
			cout<<"stu_city"<<stu_city<<endl;
			cout<<"stu_college"<<stu_college<<endl;	
	}	
};

int main()
{
	student s1,s2,s3,s4,s5;
	
	cout<<1<<endl;
	s1.setdata();
	cout<<2<<endl;
	s2.setdata();
	cout<<3<<endl;
	s3.setdata();
	cout<<4<<endl;
	s4.setdata();
	cout<<5<<endl;
	s5.setdata();
	
	cout<<1<<endl;
	s1.getdata();
	cout<<2<<endl;
	s2.getdata();
	cout<<3<<endl;
	s3.getdata();
	cout<<4<<endl;
	s4.getdata();
	cout<<5<<endl;
	s5.getdata();
	
	return 0;	
}

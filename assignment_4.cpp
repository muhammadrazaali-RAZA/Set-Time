#include<iostream>
#include<map>
using namespace std;

class DateandTime
{
	private :
		int hr;
		int min;
		int sec;
		string format;
		int day;
		int	mon;
		int year;
		char c,s;
	public :
		DateandTime();
		DateandTime(int h);
		DateandTime(int h,int m);
		DateandTime(int h,int m,int s);
		DateandTime(string f);
		DateandTime(int h,int m,int s,string f, int date);
		DateandTime(int h,int m,int s,string f, int date,int month);
		DateandTime(int h,int m,int s,string f, int date,int month,int yr);
		~ DateandTime();
		void get();
		void out();
		int showHr();
		int showMin();
		int showSec();
		string showFormat();
		int showDay();
		int showMon();
		int showYear();
		void Time();
		void Date();
		void Engl();
			
};

DateandTime::DateandTime()
{
	hr=0;
	min=0;
	sec=0;
	format="AM";
	day=21;
	mon=8;
	year=2018;
	c=':';
	s='-';
}

DateandTime::DateandTime(int h)
{
	hr=h;
	min=0;
	sec=0;
	format="AM";
	day=1;
	mon=8;
	year=2018;
	c=':';
	s='-';
}

DateandTime::DateandTime(int h,int m)
{
	hr=h;
	min=m;
	sec=0;
	format="AM";
	day=23;
	mon=8;
	year=2018;
	c=':';
	s='-';
}

DateandTime::DateandTime(int h,int m,int s)
{
	hr=h;
	min=m;
	sec=s;
	format="AM";
	day=16;
	mon=8;
	year=2018;
	c=':';
	s='-';
}

DateandTime::DateandTime(string f)
{
	hr=0;
	min=0;
	sec=0;
	format=f;
	day=16;
	mon=8;
	year=2018;
	c=':';
	s='-';
}

DateandTime::DateandTime(int h,int m,int s,string f, int date)
{
	hr=h;
	min=m;
	sec=s;
	format=f;
	day=date;
	mon=8;
	year=2018;
	c=':';
	s='-';
}

DateandTime::DateandTime(int h,int m,int s,string f, int date,int month)
{
	hr=h;
	min=m;
	sec=s;
	format=f;
	day=date;
	mon=month;
	year=2018;
	c=':';
	s='-';
}

DateandTime::DateandTime(int h,int m,int s,string f, int date,int month,int yr)
{
	hr=h;
	min=m;
	sec=s;
	format=f;
	day=date;
	mon=month;
	year=yr;
	c=':';
	s='-';
}

DateandTime::~DateandTime()
{
	cout<<"Destructor call ..... "<<endl;
}


void DateandTime::get()
{
	cout<<"Enter Date (DD-MM-YYYY): ";
	cin>>day>>s>>mon>>s>>year;
	cout<<"Enter Time (HH:MM:SS): ";
	cin>>hr>>c>>min>>c>>sec;
	cout<<"Enter Format (AM or PM): ";
	cin>>format;
	for(int i=0; i<3 ;i++)
		format[i]=toupper(format[i]);
	
}

int DateandTime::showHr()
{
	return hr;
}

int DateandTime::showMin()
{
	return min;
}

int DateandTime::showSec()
{
	return sec;
}

string DateandTime::showFormat()
{
	return format;
}

int DateandTime::showDay()
{
	return day;
}

int DateandTime::showMon()
{
	return mon;
}

int DateandTime::showYear()
{
	return year;
}

void DateandTime::Time()
{
	cout<<"Short Time : ";
	cout<<hr<<c<<min<<" "<<format<<endl;
}

void DateandTime::Date()
{
	cout<<"Short Date : ";
	cout<<day<<s<<mon<<s<<year<<endl;
}

void DateandTime::Engl()
{
	cout<<"Date in English : ";
	map<int ,string> date;
	date[1]="1st";date[2]="2nd";date[3]="3rd";date[99]="th";
	map<int ,string> m;
	m[1]="January";m[2]="February";m[3]="March";m[4]="April";m[5]="May";m[6]="June";m[7]="July";m[8]="August";m[9]="September";m[10]="October";m[11]="November";m[12]="December";
	if (day>20 && day<24)
	{
		int a=day/10;
		int c=a*10;
    	int b=day-c;
		cout<<a<<date[b]<<" "<<m[mon]<<", "<<year<<endl;
	}
	else
	{
		if(day>3)
		{
			cout<<day<<date[99]<<" "<<m[mon]<<", "<<year<<endl;
		}
		else
		{
			cout<<date[day]<<" "<<m[mon]<<", "<<year<<endl;
		}
	}
}

void DateandTime::out()
{
	cout<<"Long Date : ";
	cout<<day<<s<<mon<<s<<year<<" , "<<hr<<c<<min<<c<<sec<<" "<<format<<endl;
}




int main()
{
	DateandTime dateTime;
	//dateTime.get();                                      ///////// get Date and time both         //////// 
	cout<<"Hour : "<<dateTime.showHr()<<endl;            ///////// display hr from Time           ////////  
	cout<<"Mint : "<<dateTime.showMin()<<endl;           ///////// display min from Time          ////////
	cout<<"Sec  : "<<dateTime.showSec()<<endl;           ///////// display Sec from Time          ////////
	cout<<"Format : "<<dateTime.showFormat()<<endl;      ///////// display Format of Time         ////////
	cout<<"Date : "<<dateTime.showDay()<<endl;           ///////// display date of the day        ////////
	cout<<"Month: "<<dateTime.showMon()<<endl;           ///////// display month only             //////// 
	cout<<"Year : "<<dateTime.showYear()<<endl;          ///////// display year only              //////// 
	dateTime.Time();                                     ///////// display only Time              ////////
	dateTime.Date();                                     ///////// display only Date              ////////
	dateTime.out();                                      ///////// Output Date and Time both      //////// 
	dateTime.Engl();                                     ///////// display in English             ////////
}

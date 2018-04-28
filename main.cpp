#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	{
		int d=0,m=0;
		char*st;
		int option;
		cout<<"For Finding \"Date of Birth\"\n"<<endl;
		cout<<"List of Dates 1={1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31}"<<endl;
		cout<<"Is your \"Date of Birth\" is Present or Not in \"List of Dates 1\"?"<<endl;
		cout<<"1.YES"<<endl<<"2.NO"<<endl<<"Enter option 1 or 2."<<endl;
		cin>>option;
		switch (option)
		{
		case 1 : d=d+1;
		break;
		case 2 : d=d+0;
		break;
		default: cout<<"Restart the Program and enter a proper choice";
		}
		cout<<"\nList of Dates 2={2, 3, 6, 7, 10, 11, 14, 15, 18, 19, 22, 23, 26, 27, 30, 31}"<<endl;
		cout<<"Is your \"Date of Birth\" is Present or Not in \"List of Dates 2\"?"<<endl;
		cout<<"1.YES"<<endl<<"2.NO"<<endl<<"Enter option 1 or 2."<<endl;
		cin>>option;
		switch (option)
		{
		case 1 : d=d+2;
		break;
		case 2 : d=d+0;
		break;
		default: cout<<"Restart the Program and enter a proper choice";
		}
		cout<<"\nList of Dates 3={4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 22, 23, 28, 29, 30, 31}"<<endl;
		cout<<"Is your \"Date of Birth\" is Present or Not in \"List of Dates 3\"?"<<endl;
		cout<<"1.YES"<<endl<<"2.NO"<<endl<<"Enter option 1 or 2."<<endl;
		cin>>option;
		switch (option)
		{
		case 1 : d=d+4;
		break;
		case 2 : d=d+0;
		break;
		default: cout<<"Restart the Program and enter a proper choice.";
		}
		cout<<"\nList of Dates 4={8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 26, 27, 28, 29, 30, 31}"<<endl;
		cout<<"Is your \"Date of Birth\" is Present or Not in \"List of Dates 4\"?"<<endl;
		cout<<"1.YES"<<endl<<"2.NO"<<endl<<"Enter option 1 or 2."<<endl;
		cin>>option;
		switch (option)
		{
		case 1 : d=d+8;
		break;
		case 2 : d=d+0;
		break;
		default: cout<<"Restart the Program and enter a proper choice";
		}
		cout<<"\nList of Dates 5={16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31}"<<endl;
		cout<<"Is your \"Date of Birth\" is Present or Not in \"List of Dates 5\"?"<<endl;
		cout<<"1.YES"<<endl<<"2.NO"<<endl<<"Enter option 1 or 2."<<endl;
		cin>>option;
		switch (option)
		{
		case 1 : d=d+16;
		break;
		case 2 : d=d+0;
		break;
		default: cout<<"Restart the Program and enter a proper choice";
		}
		cout<<"\n--------------------------------------------------------------------------------\n\nFor Finding \"Month of Birth\"\n";
		cout<<"\nList of Months 1={January, March, May, July, September, November}"<<endl;
		cout<<"Is your \"Month of Birth\" is Present or Not in \"List of Months 1\"?"<<endl;
		cout<<"1.YES"<<endl<<"2.NO"<<endl<<"Enter option 1 or 2."<<endl;
		cin>>option;
		switch (option)
		{
		case 1 : m=m+1;
		break;
		case 2 : m=m+0;
		break;
		default: cout<<"Restart the Program and enter a proper choice";
		}
		cout<<"\nList of Months 2={February, March, June, July, October, November}"<<endl;
		cout<<"Is your \"Month of Birth\" is Present or Not in \"List of Months 2\"?"<<endl;
		cout<<"1.YES"<<endl<<"2.NO"<<endl<<"Enter option 1 or 2."<<endl;
		cin>>option;
		switch (option)
		{
		case 1 : m=m+2;
		break;
		case 2 : m=m+0;
		break;
		default: cout<<"Restart the Program and enter a proper choice";
		}
		cout<<"\nList of Months 3={April, May, June, July, December}"<<endl;
		cout<<"Is your \"Month of Birth\" is Present or Not in \"List of Months 3\"?"<<endl;
		cout<<"1.YES"<<endl<<"2.NO"<<endl<<"Enter option 1 or 2."<<endl;
		cin>>option;
		switch (option)
		{
		case 1 : m=m+4;
		break;
		case 2 : m=m+0;
		break;
		default: cout<<"Restart the Program and enter a proper choice.";
		}
		cout<<"\nList of Months 4={August, September, October, November, December}"<<endl;
		cout<<"Is your \"Month of Birth\" is Present or Not in \"List of Months 4\"?"<<endl;
		cout<<"1.YES"<<endl<<"2.NO"<<endl<<"Enter option 1 or 2."<<endl;
		cin>>option;
		switch (option)
		{
		case 1 : m=m+8;
		break;
		case 2 : m=m+0;
		break;
		default: cout<<"Restart the Program and enter a proper choice";
		}
		switch(m)
		{
		case 1 : st="January";
		break;
		case 2 : st="February";
		break;
		case 3 : st="March";
		break;
		case 4 : st="April";
		break;
		case 5 : st="May ";
		break;
		case 6 : st="June";
		break;
		case 7 : st="July";
		break;
		case 8 : st="August";
		break;
		case 9 : st="September";
		break;
		case 10 : st="October";
		break;
		case 11 : st="November";
		break;
		case 12 : st="December";
		break;
		}
		cout<<"\n--------------------------------------------------------------------------------\nYour \"Date Of Birth\" is: "<<d<<"\nYour \"Month Of Birth\" is: "<<st<<endl;
		if (m==2 && d==30 || d==31)
			{cout<<"Your \"Date\" and \"Month\" of Birth is \"NOT VALID\", February has only 28 or 29 Days";}
		else if (m==4 && d==31)
			{cout<<"Your \"Date\" and \"Month\" of Birth is \"NOT VALID\", April has only 30 Days";}
		else if (m==6 && d==31)
			{cout<<"Your \"Date\" and \"Month\" of Birth is \"NOT VALID\", June has only 30 Days";}
		else if (m==9 && d==31)
			{cout<<"Your \"Date\" and \"Month\" of Birth is \"NOT VALID\", September has only 30 Days";}
		else if (m==11 && d==31)
			{cout<<"Your \"Date\" and \"Month\" of Birth is \"NOT VALID\", November has only 30 Days";}
		else
			{cout<<"Your \"Date\" and \"Month\" of Birth is \"VALID\"";}
		cout<<"\n--------------------------------------------------------------------------------\n";
		}
getch();
}


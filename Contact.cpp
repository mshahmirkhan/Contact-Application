#include<iostream>
#include<fstream>
#include<conio.h>
#include <stdlib.h>
#include<stdio.h>

using namespace std;

 main()
{
	char repeat;
	do{
	
   // clrscr();
     
     repeat='W';
	 int s,a,y=1;
	 string mobile_number,c,k;	 
	 
	 int house_number,street,year,month,date;
	 string filename[20],address[90],town,city,country;
	 char b=0,e;
	 
	cout<<"\n\n\n\t\t\t *****************";
	cout<<"\n\n\t\t\t *    CONTACT    *";
	cout<<"\n\n\t\t\t *****************";
	
	//select
	
	cout<<"\n\n\n\t1:- CREAT NEW CONTACT";
	cout<<"\n\t2:- CONTACT INFORMATION";
	cout<<"\n\t3:- EDIT A CONTACT";
	cout<<"\n\t4:- DELETE A CONTACT";
	cout<<"\n\t5:- QUIT";
	
	cout<<"\n\n  SELECT YOUR OPERATION : ";
	cin>>s;

	switch(s)
	{
		case 1:
			{
				
             	cout<<"\n\n\n\t\t *********************************";
             	cout<<"\n\n\t\t *    CREAT A NEW CONTACT    *";
             	cout<<"\n\n\t\t *********************************";
             	
             	cout<<"\n\n  HOW MANY CONTACT YOU WANT TO ADD : ";
             	cin>>a;
             	
             	for(int i=0;i<a;i++)
             	{
             		cout<<"\n\nENTER THE NAME OF THE CONTACT :";
             		cin>>filename[i];
                }
             		
             		ofstream file[a];
             		
             		for(int j=0;j<a;j++)
					 {
					 	cout<<"\n\n\t\t   **********   "<<filename[j]<<"  ************\n\n";
					 	
                 	     file[j].open(filename[j].c_str());
                 	     
                 	     file[j]<<"\n\n\n\t\t\t\t **************************";
             	      	 file[j]<<"\n\t\t\t\t *         CONTACT        *";
             	     	 file[j]<<"\n\t\t\t\t **************************";
             	
                 	     
                 	     file[j]<<"\n\n\n=> NAME";
                 	     file[j]<<"\n========";
                 	     file[j]<<"\n\t\t   ";
                 	     file[j]<<filename[j];
                 	     
                 	     
                 	     cout<<"\nENTER MOBLIE NUMBER :";
                 	     cin>>mobile_number;
                 	     
                 	     
                 	     file[j]<<"\n\n\n=> MOBILE NUMBER";
                 	     file[j]<<"\n================";
                 	     file[j]<<"\n\t\t   ";
                 	     file[j]<<mobile_number;
                 	     
                 	     
                 	     cout<<"\n DO YOU WANT TO ADD ADDRESS (Y/N)";
                 	     cin>>b;
                 	     if(b=='y' || b=='Y')
                 	     {
                 	     	cout<<"\n\n        (((  ADDRESS  )))";
                 	     	cout<<"\n\n HOUSE NUMBER #  ";
							cin>>house_number; 
                 	     	cout<<"\n STREET #  ";
							cin>>street; 
                 	     	cout<<"\n TOWN #  ";
							cin>>town; 
                 	     	cout<<"\n CITY #  ";
							cin>>city; 
                 	     	cout<<"\n COUNTRY #  ";
							cin>>country; 
							
							
							
                 	     file[j]<<"\n\n\n=> ADDRESS";
                 	     file[j]<<"\n==========";
                 	     file[j]<<"\n\t\t  ";
                 	     file[j]<<" HOUSE NUMBER # "<<house_number<<"  , STREET # "<<street ;
                 	     file[j]<<"  , TOWN # "<<town<<"  , CITY # "<<city ;
                 	     file[j]<<"  , COUNTRY # "<<country;
                 	     
						  }
						  
                 	     
                 	     cout<<"\n DO YOU WANT TO ADD DATE OF BIRTH (Y/N)";
                 	     cin>>b;
                 	     if(b=='y' || b=='Y')
                 	     {
                 	     	cout<<"\n\n        (((  DD/MM/YYYY  )))";
                 	     	cout<<"\n\n DATE #  ";
							cin>>date;
                 	     	cout<<"\n\n MONTH #  ";
							cin>>month; 
                 	     	cout<<"\n\n YEAR #  ";
							cin>>year; 
							
							
                 	     file[j]<<"\n\n\n=> DATE OF BIRTH";
                 	     file[j]<<"\n================";
                 	     file[j]<<"\n\t\t   ";
                 	     file[j]<<date<<"/"<<month<<"/"<<year;
                 	     
							
                 	     }//if
                 	     
                 	     file[j].close();
                 	     
                      }
                 	     
             		
	
  //repeater ==========================
						  
 cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] : ";
 cin>>repeat;
 
 if (repeat<89)
  {
  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
  }
						  
  if (repeat>=90 && repeat<121)
  {
  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
  }
						  
  if (repeat>=122)
  {
  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
  }						  
						  
					  

             		
			
             	
				 				
				break;
			}
		
		case 2://CONTACT INFORMATION
		{
			
             	cout<<"\n\n\n\t\t *********************************";
             	cout<<"\n\n\t\t *     CONTACT INFORMATION    *";
             	cout<<"\n\n\t\t *********************************";
             	
             	cout<<"\n\n  ENTER THE FILE NAME : ";
             	cin>>c;
             	
             	ifstream inputfile;
             	inputfile.open(c.c_str());
             	
             	inputfile>>mobile_number;
             	cout<<mobile_number;
             	
             	while(!inputfile.eof())
             	{
             		cout<<mobile_number<<"  ";
             		inputfile>>mobile_number;
				 }
             	inputfile.close();
             	
             	
	
  //repeater ==========================
						  
 cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] : ";
 cin>>repeat;
 
 if (repeat<89)
  {
  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
  }
						  
  if (repeat>=90 && repeat<121)
  {
  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
  }
						  
  if (repeat>=122)
  {
  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
  }						  
						  
					  

             	
			break;
		}	//case 2
		
		
		case 3://edit the file
			{
				
             	cout<<"\n\n\n\t\t *********************************";
             	cout<<"\n\n\t\t *    EDIT EXISTING CONTACT    *";
             	cout<<"\n\n\t\t *********************************";
             	
             	
             	cout<<"\n\n  ENTER THE FILE YOU WANT TO EDIT : ";
             	cin>>k;
             	
             	ofstream file;
             		
             		
					 	cout<<"\n\n\t\t   **********   "<<k<<"  ************\n\n";
					 	
                 	     file.open(k.c_str());
                 	     
                 	     file<<"\n\n\n\t\t\t\t **************************";
             	      	 file<<"\n\t\t\t\t *         CONTACT        *";
             	     	 file<<"\n\t\t\t\t **************************";
             	
                 	     
                 	     file<<"\n\n\n=> NAME";
                 	     file<<"\n========";
                 	     file<<"\n\t\t   ";
                 	     file<<k;
                 	     
                 	     
                 	     cout<<"\nENTER MOBLIE NUMBER :";
                 	     cin>>mobile_number;
                 	     
                 	     
                 	     file<<"\n\n\n=> MOBILE NUMBER";
                 	     file<<"\n================";
                 	     file<<"\n\t\t   ";
                 	     file<<mobile_number;
                 	     
                 	     
                 	     cout<<"\n DO YOU WANT TO ADD ADDRESS (Y/N)";
                 	     cin>>b;
                 	     if(b=='y' || b=='Y')
                 	     {
                 	     	cout<<"\n\n        (((  ADDRESS  )))";
                 	     	cout<<"\n\n HOUSE NUMBER #  ";
							cin>>house_number; 
                 	     	cout<<"\n STREET #  ";
							cin>>street; 
                 	     	cout<<"\n TOWN #  ";
							cin>>town; 
                 	     	cout<<"\n CITY #  ";
							cin>>city; 
                 	     	cout<<"\n COUNTRY #  ";
							cin>>country; 
							
							
							
                 	     file<<"\n\n\n=> ADDRESS";
                 	     file<<"\n==========";
                 	     file<<"\n\t\t  ";
                 	     file<<" HOUSE NUMBER # "<<house_number<<"  , STREET # "<<street ;
                 	     file<<"  , TOWN # "<<town<<"  , CITY # "<<city ;
                 	     file<<"  , COUNTRY # "<<country;
                 	     
						  }
						  
                 	     
                 	     cout<<"\n DO YOU WANT TO ADD DATE OF BIRTH (Y/N)";
                 	     cin>>b;
                 	     if(b=='y' || b=='Y')
                 	     {
                 	     	cout<<"\n\n        (((  DD/MM/YYYY  )))";
                 	     	cout<<"\n\n DATE #  ";
							cin>>date;
                 	     	cout<<"\n\n MONTH #  ";
							cin>>month; 
                 	     	cout<<"\n\n YEAR #  ";
							cin>>year; 
							
							
                 	     file<<"\n\n\n=> DATE OF BIRTH";
                 	     file<<"\n================";
                 	     file<<"\n\t\t   ";
                 	     file<<date<<"/"<<month<<"/"<<year;
                 	     
							
                 	     }//if
                 	     
                 	     file.close();
                 	     
                      
	
  //repeater ==========================
						  
 cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] : ";
 cin>>repeat;
 
 if (repeat<89)
  {
  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
  }
						  
  if (repeat>=90 && repeat<121)
  {
  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
  }
						  
  if (repeat>=122)
  {
  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
  }						  
						  
					  

             	
				break;
				
			}//case 3
		
		case 4://delete contact
			{
				
             	cout<<"\n\n\n\t\t ************************";
             	cout<<"\n\n\t\t *    DELETE CONTACT    *";
             	cout<<"\n\n\t\t ************************";
             	
             	
             	cout<<"\n\n  ENTER THE FILE YOU WANT TO DELETE : ";
             	cin>>k;
             	
			  	remove(k.c_str( ));
 			    if (remove(k.c_str( )) != 0)
				 {
 		     	    cout<<"\n\n        (((  DELETED SUCCESSFULLY  )))";
				 } 
     		    
	
  //repeater ==========================
						  
 cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] : ";
 cin>>repeat;
 
 if (repeat<89)
  {
  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
  }
						  
  if (repeat>=90 && repeat<121)
  {
  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
  }
						  
  if (repeat>=122)
  {
  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
  }						  
						  
					  

				  
				break;
			}
			
		case 5://QUIT
		{
			
			
			
	
  //repeater ==========================
						  
 
  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
 					  
					  

			
			break;
			}	
			
		default:
		{
			 cout<<"\n\n        (((  INVALID ENTRY  )))";
			 getch();
	
  //repeater ==========================
						  
 cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] : ";
 cin>>repeat;
 
 if (repeat<89)
  {
  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
  }
						  
  if (repeat>=90 && repeat<121)
  {
  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
  }
						  
  if (repeat>=122)
  {
  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
  }						  
						  
					  

			}	
			
	}//switch
	
					  
	
	
}//do
while( repeat == 'y'||repeat =='Y' );

	getch();
}//main

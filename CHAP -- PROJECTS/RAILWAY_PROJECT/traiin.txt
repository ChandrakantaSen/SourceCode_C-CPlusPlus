#include<iostream.h>
#include<math.h>
#include<string.h>
#include<fstream.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

class train
{	private:
			int tno;
			char tname[30];
			char destfrom[15], dest_to[15];
			char day[10];
			char arrival[10], departure[10];
			int seats1,seats2,seatsac;
			float fare1,fare2,fareac;


	public:
			void train_details();
			void add_entry();
			void modify_entry();
			void del_entry();
			void view_entry();
			int ret()
			{
				return tno;
			}
};  // CLASS DECLARATION

void train :: add_entry()
{
  clrscr();
  gotoxy(25,4);cout<<"*** ADD  TRAIN  DETAILS *** ";
  gotoxy(5,7);cout<<"Train No.: ";cin>>tno;
  gotoxy(5,9);cout<<"Train Name.: ";cin>>tname;
  gotoxy(5,11);cout<<"DESTINATION:";
  gotoxy(25,11);cout<<"From: ";cin>>destfrom;
  gotoxy(45,11);cout<<"To: ";cin>>dest_to;
  gotoxy(5,13);cout<<"Day Of Journey: ";cin>>day;
  gotoxy(5,15);cout<<"TIME:";
  gotoxy(20,15);cout<<"Arrival: ";cin>>arrival;
  gotoxy(40,15);cout<<"Departure: ";cin>>departure;
  gotoxy(5,17);cout<<"NO. OF SEATS:";
  gotoxy(25,17);cout<<"1st Class: ";cin>>seats1;
  gotoxy(45,17);cout<<"2nd Class: ";cin>>seats2;
  gotoxy(65,17);cout<<"A/C: " ;cin>>seatsac;
  gotoxy(5,19);cout<<"FARE:";
  gotoxy(25,19);cout<<"1st Class: ";cin>>fare1;
  gotoxy(45,19);cout<<"2nd Class: ";cin>>fare2;
  gotoxy(65,19);cout<<"A/C: ";cin>>fareac;
  gotoxy(5,21);cout<<"Train details entered";
  gotoxy(5,23);cout<<"Press any key to return to TRAIN DETAILS MENU";
  getch();
 }

 void train :: modify_entry()
 {
  clrscr();
  gotoxy(25,5);cout<<"*** MODIFY  TRAIN  DETAILS ***";
  gotoxy(5,9);cout<<"Train Name: ";cin>>tname;
  gotoxy(5,11);cout<<"DESTINATION:";
  gotoxy(25,11);cout<<"From: ";cin>>destfrom;
  gotoxy(45,11);cout<<"To: ";cin>>dest_to;
  gotoxy(5,13);cout<<"Day Of Journey: ";cin>>day;
  gotoxy(5,15);cout<<"TIME:";
  gotoxy(25,15);cout<<"Arrival: ";cin>>arrival;
  gotoxy(45,15);cout<<"Departure: ";cin>>departure;
  gotoxy(5,17);cout<<"NO. OF SEATS:";
  gotoxy(25,17);cout<<"1st Class: ";cin>>seats1;
  gotoxy(45,17);cout<<"2nd Class: ";cin>>seats2;
  gotoxy(65,17);cout<<"A/C: ";cin>>seatsac;
  gotoxy(5,19);cout<<"FARE:";
  gotoxy(25,19);cout<<"1st Class: ";cin>>fare1;
  gotoxy(45,19);cout<<"2nd Class: ";cin>>fare2;
  gotoxy(65,19);cout<<"A/C: ";cin>>fareac;
  gotoxy(5,22);cout<<"Train details modified";
  gotoxy(5,24);cout<<"Press any key to return to TRAIN DETAILS MENU ";
 }

 void train :: del_entry()
 {
  clrscr();
  gotoxy(25,4);cout<<"*** DELETE TRAIN  DETAILS ***";
  gotoxy(5,7);cout<<"Train No.: ";cout<<tno;
  gotoxy(5,9);cout<<"Train Name: ";cout<<tname;
  gotoxy(5,11);cout<<"DESTINATION:";
  gotoxy(25,11);cout<<"From: ";cout<<destfrom;
  gotoxy(45,11);cout<<"To: ";cout<<dest_to;
  gotoxy(5,13);cout<<"Day Of Journey: ";cout<<day;
  gotoxy(5,15);cout<<"TIME:";
  gotoxy(25,15);cout<<"Arrival: ";cout<<arrival;
  gotoxy(45,15);cout<<"Departure: ";cout<<departure;
  gotoxy(5,17);cout<<"NO. OF SEATS:";
  gotoxy(25,17);cout<<"1st Class: ";cout<<seats1;
  gotoxy(45,17);cout<<"2nd Class: ";cout<<seats2;
  gotoxy(65,17);cout<<"A/C: ";cout<<seatsac;
  gotoxy(5,19);cout<<"FARE:";
  gotoxy(25,19);cout<<"1st Class: ";cout<<fare1;
  gotoxy(45,19);cout<<"2nd Class: ";cout<<fare2;
  gotoxy(65,19);cout<<"A/C: ";cout<<fareac;
  gotoxy(5,23);cout<<"Press any key to return to TRAIN DETAILS MENU";
 }

 void train :: view_entry()
 {
  clrscr();
  gotoxy(25,4);cout<<"*** VIEW  TRAIN  DETAILS ***";
  gotoxy(5,7);cout<<"Train No.: ";cout<<tno;
  gotoxy(5,9);cout<<"Train Name: ";cout<<tname;
  gotoxy(5,11);cout<<"DESTINATION:";
  gotoxy(25,11);cout<<"From: ";cout<<destfrom;
  gotoxy(45,11);cout<<"To: ";cout<<dest_to;
  gotoxy(5,13);cout<<"Day Of Journey: ";cout<<day;
  gotoxy(5,15);cout<<"TIME: ";
  gotoxy(25,15);cout<<"Arrival: ";cout<<arrival;
  gotoxy(45,15);cout<<"Departure: ";cout<<departure;
  gotoxy(5,17);cout<<"NO. OF SEATS:";
  gotoxy(25,17);cout<<"1st Class: ";cout<<seats1;
  gotoxy(45,17);cout<<"2nd Class: ";cout<<seats2;
  gotoxy(65,17);cout<<"A/C: ";cout<<seatsac;
  gotoxy(5,19);cout<<"FARE:";
  gotoxy(25,19);cout<<"1st Class: ";cout<<fare1;
  gotoxy(45,19);cout<<"2nd Class: ";cout<<fare2;
  gotoxy(65,19);cout<<"A/C: ";cout<<fareac;
  gotoxy(5,23);cout<<"Press any key to return to TRAIN DETAILS MENU";
 }

 void add_tentry();
 void modify_tentry();
 void del_tentry();
 void view_tentry();

 void train_main()
 {
  int cht;
  do
  {
	do
   {
	clrscr();
	gotoxy(30,5);cout<<"*** TRAIN DETAILS ***";
	gotoxy(25,7);cout<<"1.ADD ENTRY";
	gotoxy(25,9);cout<<"2.MODIFY ENTRY";
	gotoxy(25,11);cout<<"3.DELETE ENTRY";
	gotoxy(25,13);cout<<"4.VIEW ENTRY";
	gotoxy(25,15);cout<<"5.GOTO MAIN MENU";
	gotoxy(25,17);cout<<"Enter Your Choice";
	gotoxy(45,17);cin>>cht;
  }while(cht<1 && cht>6);

 switch(cht)
 {case 1:{
			 add_tentry();
			 break;
			}

  case 2:{
			 modify_tentry();
			 break;
			}

  case 3:{
			 del_tentry();
			 break;
			}

  case 4:{
			 view_tentry();
			 break;
			}
  }
  }while(cht>=1 && cht<=4);

 }

 void add_tentry()
 {
  fstream f;
  f.open("train1.dat",ios::app | ios::binary);
  train T;
  if(!f)
  {
	cout<<"\n\tFile not found, can not add records!";
	getch();
	exit(0);
  }
  T.add_entry();
  f.write((char*)&T,sizeof(T));     //Write into the file
  f.close();
 }

void modify_tentry()
{
 fstream f,f1;
 f.open("train1.dat",ios::in | ios::binary);
 train T;
 if(!f)
 {
  cout<<"\n\tFile not found, can not modify record!";
  getch();
  exit(0);
 }
 f1.open("temp.dat",ios::out | ios::binary);
 int traino;
 char ans;
 gotoxy(5,23);cout<<"Enter the Train Number you want to modify: ";
 cin>>traino;
 f.read((char*)&T,sizeof(T));
 while(!f.eof())
 {
  if(T.ret()!=traino)            //Checks for the required train no.
	f1.write((char*)&T, sizeof(T));
  else
  {T.view_entry();
	gotoxy(5,25);cout<<"Do you want to modify(y/n): ";
	cin>>ans;
	if(ans=='Y' || ans=='y')
	{
	 T.modify_entry();
	 getch();
	 f1.write((char*)&T,sizeof(T));   //Modifies the record
	}
	else
	 f1.write((char*)&T,sizeof(T));
  }
  f.read((char*)&T,sizeof(T));
 }
 f.close();
 f1.close();
 remove("train1.dat");
 rename("temp.dat","train1.dat");
}

void del_tentry()
{
 fstream f,f1;
 f.open("train1.dat",ios::in | ios::binary);
 train T;
 if(!f)
 {
  cout<<"\n\tFile not found, can not delete records!";
  getch();
  exit(0);
 }
 f1.open("temp.dat",ios::out | ios::binary);
 int traino;
 char ans;
 cout<<"\n\tEnter the Train No. whose record you want to delete: ";
 cin>>traino;
 f.seekg(0);
 f.read((char*)&T,sizeof(T));
 while(!f.eof())
 {
  if(T.ret()!=traino)            //Checks for the required record
	f1.write((char*)&T,sizeof(T));
  else
  {T.view_entry();
	gotoxy(5,25);cout<<"Do you want to delete(y/n): ";
	cin>>ans;
	if(ans!='y' && ans!='Y')
	 f1.write((char*)&T,sizeof(T));
  }f.read((char*)&T,sizeof(T));
 }
 f.close();
 f1.close();
 remove("train1.dat");
 rename("temp.dat","train1.dat");
}

void view_tentry()
{
 fstream f;
 f.open("train1.dat",ios::in | ios::binary);
 train T;
 if(!f)
 {
  cout<<"\n\tFile not found, can not show details!";
  getch();
  exit(0);
 }
 f.seekg(0,ios::beg);
 f.read((char*)&T,sizeof(T));
 while(!f.eof())
 {
  T.view_entry();
  getch();
  f.read((char*)&T,sizeof(T));
 }
 f.close();
}


class reserve
{
	private:
			char name[20];
			int age;
			char sex;
			char add[50];
			long int phno;
			int tno;
			char tname[30];
			char destfrom[30],dest_to[30];
			char clas[10];
			int seatno;
			float fare;
			int tktno;

	public:
			void reservation();
			void add_rentry();
			void modify_rentry();
			void view_rentry();
			int ret()
			{
				return tktno;
			}
};  // CLASS DECLARATION

 void reserve :: add_rentry()  //member func of class
 {
  clrscr();
  gotoxy(25,3);cout<<"*** ADD RESERVATION DETAILS ***";
  gotoxy(28,6);cout<<"--- PASSENGER DETAILS ---";
  gotoxy(5,8);cout<<"Name: ";cin>>name;
  gotoxy(5,10);cout<<"Age: ";cin>>age;
  gotoxy(20,10);cout<<"Sex(M/F): ";cin>>sex;
  gotoxy(5,12);cout<<"Contact Address: ";cin>>add;
  gotoxy(5,14);cout<<"Contact Number: ";cin>>phno;
  gotoxy(26,17);cout<<"--- RESERVATION DETAILS ---";
  gotoxy(5,19);cout<<"Train No.: ";cin>>tno;
  gotoxy(5,21);cout<<"Train Name: ";cin>>tname;
  gotoxy(5,23);cout<<"DESTINATION:";
  gotoxy(25,23);cout<<"From: ";cin>>destfrom;
  gotoxy(45,23);cout<<"To: ";cin>>dest_to;
  gotoxy(5,25);cout<<"Type of Train: ";cin>>clas;
  gotoxy(5,27);cout<<"Seat Number: ";cin>>seatno;
  gotoxy(5,29);cout<<"Fare:";cin>>fare;
  gotoxy(5,31);cout<<"Ticket No.: ";cin>>tktno;
  gotoxy(5,35);cout<<"Press any key to return to RESERVATION MENU";
  getch();
 }

 void reserve :: modify_rentry()      //member func of class reserve
 {
  clrscr();
  gotoxy(25,3);cout<<"*** MODIFY  RESERVATION  DETAILS ***";
  gotoxy(28,6);cout<<"--- PASSENGER DETAILS ---";
  gotoxy(5,8);cout<<"Name: ";cin>>name;
  gotoxy(5,10);cout<<"Age: ";cin>>age;
  gotoxy(20,10);cout<<"Sex(M/F): ";cin>>sex;
  gotoxy(5,12);cout<<"Contact Address: ";cin>>add;
  gotoxy(5,14);cout<<"Contact Number: ";cin>>phno;
  gotoxy(26,17);cout<<"--- RESERVATION DETAILS ---";
  gotoxy(5,19);cout<<"Train No.: ";cin>>tno;
  gotoxy(5,21);cout<<"Train Name: ";cin>>tname;
  gotoxy(5,23);cout<<"DESTINATION:";
  gotoxy(25,23);cout<<"From: ";cin>>destfrom;
  gotoxy(45,23);cout<<"To: ";cin>>dest_to;
  gotoxy(5,25);cout<<"Type of Train: ";cin>>clas;
  gotoxy(5,27);cout<<"Seat Number: ";cin>>seatno;
  gotoxy(5,29);cout<<"Fare:";cin>>fare;
  gotoxy(5,31);cout<<"Ticket No:";cin>>tktno;
  gotoxy(5,33);cout<<"Reservation details modified";
  gotoxy(5,35);cout<<"Press any key to return to RESERVATIONMENU ";
  getch();
 }

void reserve :: view_rentry()         //member func of class reserve
{
  clrscr();
  gotoxy(25,3);cout<<"*** VIEW  RESERVATION  DETAILS ***";
  gotoxy(28,6);cout<<"--- PASSENGER DETAILS ---";
  gotoxy(5,8);cout<<"Name: ";cout<<name;
  gotoxy(5,10);cout<<"Age: ";cout<<age;
  gotoxy(20,10);cout<<"Sex(M/F): ";cout<<sex;
  gotoxy(5,12);cout<<"Contact Address: ";cout<<add;
  gotoxy(5,14);cout<<"Contact Phone No: ";cout<<phno;
  gotoxy(28,17);cout<<"--- RESERVATION DETAILS ---";
  gotoxy(5,19);cout<<"Train No.: ";cout<<tno;
  gotoxy(5,21);cout<<"Train Name: ";cout<<tname;
  gotoxy(5,23);cout<<"DESTINATION:";
  gotoxy(25,23);cout<<"From: ";cout<<destfrom;
  gotoxy(45,23);cout<<"To: ";cout<<dest_to;
  gotoxy(5,25);cout<<"Type of Train: ";cout<<clas;
  gotoxy(5,27);cout<<"Seat Number: ";cout<<seatno;
  gotoxy(5,29);cout<<"Fare: ";cout<<fare;
  gotoxy(5,31);cout<<"Ticket No.: ";cout<<tktno;
  gotoxy(5,33);cout<<"Press any key to return to RESERVATION MENU ";
 }

 void add_record();
 void modify_record();
 void view_record();

 void reservation_main()
 {
  int ch;
  do
  {
   do
   {
	clrscr();
	gotoxy(25,5);cout<<"*** RESERVATION  MENU ***";
	gotoxy(25,9);cout<<"1.ADD ENTRY";
	gotoxy(25,11);cout<<"2.MODIFY ENTRY";
	gotoxy(25,13);cout<<"3.VIEW ENTRY";
	gotoxy(25,15);cout<<"4.GOTO MAIN MENU";
	gotoxy(25,17);cout<<"Enter Your Choice..";
	gotoxy(45,17);cin>>ch;
  }
  while(ch<1 && ch>5);
   switch(ch)
   {
	case 1:{
			  add_record();
			  break;
			 }
   case 2:{
			  modify_record();
			  break;
			 }
   case 3:{
			  view_record();
			  break;
			 }
   }
  }
  while(ch>=1 && ch<=3);
 }


 void add_record()
 {fstream f;
  f.open("reserve.dat",ios::app | ios::binary);
  reserve R;
  if(!f)
  {
   cout<<"\n\tFile not found, can not add records";
   getch();
   exit(0);
  }
  R.add_rentry();
  f.write((char*)&R,sizeof(R));     //Write into the file
  f.close();
 }


void modify_record()
{fstream f,f1;
 f.open("reserve.dat",ios::in | ios::binary);
 reserve R;
 if(!f)
 {
  cout<<"\n\tFile not found, can not modify records";
  getch();
  exit(0);
 }
 f1.open("temp.dat",ios::out | ios::binary);
 int ticno;
 char ans;
 gotoxy(25,19);cout<<"\nEnter the reservation record (Ticket No.) you want to modify: ";
 cin>>ticno;
 f.read((char*)&R,sizeof(R));
 while(!f.eof())
 {
  if(R.ret()!=ticno)            //Checks for the required record
	f1.write((char*)&R,sizeof(R));
  else
  {
   R.view_rentry();
   gotoxy(5,37);cout<<"Do you want to modify(y/n): ";
   cin>>ans;
   if(ans=='Y' || ans=='y')
   {
	 R.modify_rentry();
	 cout<<"\nReservation details modified\n";
	 f1.write((char*)&R,sizeof(R));   			//Modifies the record
   }
   else
	 f1.write((char*)&R,sizeof(R));
  }
  f.read((char*)&R,sizeof(R));
 }
 f.close();
 f1.close();
 remove("reserve.dat");
 rename("temp.dat","train1.dat");
}


void view_record()
{
 fstream f;
 f.open("reserve.dat",ios::in | ios::binary);
 reserve R;
 if(!f)
 {
  cout<<"\n\tFile not found, can not show details";
  getch();
  exit(0);
 }
 f.seekg(0,ios::beg);
 f.read((char*)&R,sizeof(R));
 while(!f.eof())
 {
  R.view_rentry();
  getch();
  f.read((char*)&R,sizeof(R));
 }
 f.close();
}

void main()
{
 clrscr();
 gotoxy(34,15);cout<<"WELCOME TO";
 gotoxy(26,17);cout<<"RAILWAY MANAGEMENT SOFTWARE";
 gotoxy(5,21);cout<<"Press any key to continue..";
 getch();
 int chm;
 do{
	do{
	clrscr();
	gotoxy(26,5);cout<<"*** MAIN MENU ***";
	gotoxy(25,8);cout<<"1.TRAIN DETAILS";
	gotoxy(25,11);cout<<"2.RESERVATION DETAILS";
	gotoxy(25,14);cout<<"3.EXIT";
	gotoxy(25,17);cout<<"Enter Your Choice..";
	gotoxy(43,17);cin>>chm;
   } while(chm<1 && chm>3);
 switch(chm)
 {
	case 1: {
				train_main();
				break;
			  }

	case 2: {
				reservation_main();
				break;
			  }

	default: {
				 clrscr();
				 gotoxy(31,15);cout<<"THANK YOU";
				 gotoxy(31,18);cout<<"FOR USING";
				 gotoxy(23,23);cout<<"RAILWAY MANAGEMENT SOFTWARE";
				}
 }
 }
 while(chm>=1 && chm<=2);
 getch();
}

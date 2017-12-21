#include "Header.h"
#include "Windows.h"

#include <iostream>
using namespace std;

#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>


void University::displayMenu()
{
	
	int choosenum;

	do
	{
	       
			
			 cout << "************************************************************" <<endl;
			 cout << "************************************************************" <<endl;
			 cout << "*                       WELCOME TO UHD                      *" <<endl;
			 cout << "*************************************************************" <<endl;
			 cout << "************************************************************" <<endl;
			 cout << "*            Please Select Your Identity to Continue        *" <<endl;
			 cout << "*                      1 - STUDENT                          *" <<endl;
			 cout << "*                      2 - FACULTY                          *" <<endl;
			 cout << "*                      3 - STAFF                            *" <<endl;
			 cout << "*                      4 - QUIT                             *" <<endl;
			  cout << "************************************************************" <<endl;
			
			 cin>>choosenum;

			

	 if(choosenum ==1)
		{
			system ("COLOR 7");
			displayStudent();
		 
		}
	 if(choosenum ==2)
		 {
			 system ("COLOR 7");
		 displayFaculty();
		 }
	 if(choosenum ==3)
		 {
			 system ("COLOR 7");
		displayStaff();
		 
		 }
	  if(choosenum ==4)
		 {
			  exit(0);
		 }
	}
	 while(choosenum != 4);
}

void University::displayStudent()
{
	int choosenum;
	do
	{
	
			 cout << "-------------------------------------------------------------" <<endl;
			 cout << "-                  WELCOME TO STUDENT FEATURES              -" <<endl;
			
			 cout << "-            Please Select Your Choice to Continue          -" <<endl;
			 cout << "-                      1 - Play Card Game                   -" <<endl;
			  cout << "-                     2 - Essay Check                      -" <<endl;
			  cout << "-                     3 - Tree of Life                     -" <<endl;
			 cout << "-                      4 - Main Menu                        -" <<endl;
			 cout << "-                      5 - QUIT                             -" <<endl;
			  cout << "-------------------------------------------------------------" <<endl;
			
			 cin>>choosenum;

	 if(choosenum ==1)
		{
			playGame();
		 
		}
	 if(choosenum ==2)
		 {
           paragraphCheck();
		 
		 }
	  if(choosenum ==3)
		 {
           lifetree mytree;
	        
	          mytree.drawtree();
		 
		 }
	 if(choosenum ==4)
		 {
			  displayMenu();
		 }
	 if(choosenum ==5)
		 {
			  exit(0);
		 }
	}
	 while(choosenum != 4);
}

void University::displayFaculty()
{
	int choosenum;
	do
	{
	
		     cout << "#############################################################" <<endl;
			 cout << "#                  WELCOME TO FACULTY FEATURES              #" <<endl;
			
			 cout << "#            Please Select Your Choice to Continue          #" <<endl;
			 cout << "#                      1 - Test Scores                      #" <<endl;
			 cout << "#                      3 - Main Menu                        #" <<endl;
			 cout << "#                      4 - QUIT                             #" <<endl;
			  cout << "#############################################################" <<endl;
			
			 cin>>choosenum;

	 if(choosenum ==1)
		{
			SortSearch Test;
	        
	          Test.displaySortSearch();
		 
		}
	 if(choosenum ==2)
		 {
		  
		 }
	 if(choosenum ==3)
		 {

		 displayMenu();
		 }

	  if(choosenum ==4)
		 {
			  exit(0);
		 }
	}
	 while(choosenum != 4);
}

void University::displayStaff()
{
	int choosenum;
	do
	{
	
			 cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
			 cout << "~                  WELCOME TO STAFF FEATURES                 ~" <<endl;
			
			 cout << "~            Please Select Your Choice to Continue           ~" <<endl;
			 cout << "~                      1 - Database                          ~" <<endl;
			
			 cout << "~                      3 - Main Menu                         ~"<<endl;
			 cout << "~                      4 - QUIT                              ~"<<endl;
			  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
			
			 cin>>choosenum;

	 if(choosenum ==1)
		{
			List mylist;
			mylist.recorddata();
		 
		}
	 if(choosenum ==2)
		 {

		 
		 }
	 if(choosenum ==3)
		 {
          displayMenu();
		 
		 }
	  if(choosenum ==4)
		 {
			  exit(0);
		 }
	
	}
	while(choosenum != 4);
}

//Student Features:

		void playGame()
		{
			system ("COLOR A");

			int playernum1,playernum2,playernum3, computernum1,computernum2,computernum3;

			string playernuma,playernumb,playernumc, computernuma,computernumb,computernumc;
			char flip, rules;

			cout<< " Welcome to the CARD GAME" <<endl;
			cout<< " ------------------------" <<endl;
			cout<< " Press [S] to START Game or [Q] to Quit" <<endl;
			cout <<" Your input:  ";cin>> rules;


			if(( rules == 's' ) || (rules == 'S'))
					{

				cout << " -------------------------"<< endl; 
					cout << " Rules are:"<< endl; 
				cout << " Two players get three cards and" <<endl<<" winner is decided on the stregth of three cards."<< endl; 
				cout << " 1. First powerful is Triples."<<endl
					 << " 2. Second powerful is Sequence."<<endl
					 << " 3. Third powerful is  Doubles."<<endl
					 << " 4. Fourth powerful is Highest Card."<<endl<<endl;
		    
			

	

	
			srand(unsigned(time(0)));
			string playerone, playertwo;
			cin.ignore();
			cout << " -------------------------------------------"<< endl; 
			cout << " Type player1 name:  ";  getline(cin, playerone);
			cout << " Type player2 name:  ";  getline(cin, playertwo);

		  do
		  {

			  playernum1=0;playernum2=0;playernum3=0;computernum1=0;computernum2=0;computernum3=0;

			  cout<< " ------------------------" <<endl;

	
							playernum1=(rand()%13)+2; playernum2=(rand()%13)+2; playernum3=(rand()%13)+2; computernum1=(rand()%13)+2;computernum2=(rand()%13)+2;computernum3=(rand()%13)+2;
					
							playernuma = to_string(playernum1);
							playernumb = to_string(playernum2);
							playernumc = to_string(playernum3);
							computernuma = to_string(computernum1);
							computernumb = to_string(computernum2);
							computernumc = to_string(computernum3);

							if(playernum1 == 11)playernuma ="J";
							if(playernum1 == 12)playernuma ="Q";
							if(playernum1 == 13)playernuma ="K";
							if(playernum1 == 14)playernuma ="A";
							if(playernum2 == 11)playernumb ="J";
							if(playernum2 == 12)playernumb ="Q";
							if(playernum2 == 13)playernumb ="K";
							if(playernum2 == 14)playernumb ="A";
							if(playernum3 == 11)playernumc ="J";
							if(playernum3 == 12)playernumc ="Q";
							if(playernum3 == 13)playernumc ="K";
							if(playernum3 == 14)playernumc ="A";
							if(computernum1 == 11)computernuma ="J";
							if(computernum1 == 12)computernuma ="Q";
							if(computernum1 == 13)computernuma ="K";
							if(computernum1 == 14)computernuma ="A";
							if(computernum2 == 11)computernumb ="J";
							if(computernum2 == 12)computernumb ="Q";
							if(computernum2 == 13)computernumb ="K";
							if(computernum2 == 14)computernumb ="A";
							if(computernum3 == 11)computernumc ="J";
							if(computernum3 == 12)computernumc ="Q";
							if(computernum3 == 13)computernumc ="K";
							if(computernum3 == 14)computernumc ="A";
				   

	

							cout<< "\t" << playerone << " CARDS ! "<< "\t\t\t"  << playertwo << " CARDS !" <<endl;


							cout<<  " -------------------------"<< "\t" <<" -------------------------"<<endl;

							cout<< " |\t"<< "|\t" << "|\t|"<<"\t"<<" |\t"<< "|\t" << "|\t|"<<"\t"<<endl;

							cout<< " |  "<<playernuma<<   "   |   " << playernumb   <<"   |  "<< playernumc <<"    |  "<< "\t"

								   " |  "<<computernuma<< "   |  " << computernumb <<"    |   "<< computernumc <<  "   |  "<<endl;

							cout<< " |\t"<< "|\t" << "|\t|"<<"\t"<<" |\t"<< "|\t" << "|\t|"<<"\t"<<endl;
							cout<< " |\t"<< "|\t" << "|\t|"<<"\t"<<" |\t"<< "|\t" << "|\t|"<<"\t"<<endl;
							cout<<  " -------------------------"<< "\t" <<" -------------------------"<<endl;
							cout<<endl<<endl<<endl<< endl;
	
			int counter =0;
			if(counter == 0)
			{
	
					bool trialplayernum = false; bool trialcomputernum=false;
	
					if((playernum1 == playernum2) && (playernum1 == playernum3)) trialplayernum = true;

					if((computernum1 == computernum2) && (computernum1 == computernum3)) trialcomputernum = true;


					if ( (trialplayernum == true )&& (trialcomputernum == false))
					   {
                   

						   cout <<" WINNER IS  " << playerone << "!!!!!!!!!!!" <<endl<<endl<<endl;
							counter++;
					   }
					else if ( (trialplayernum == false )&& (trialcomputernum == true))
					   {
						   cout <<" WINNER IS  " << playertwo << "!!!!!!!!!!!" <<endl<<endl<<endl;
							counter++;
					   }
	

					else if((trialplayernum == true) && (trialcomputernum == true)&& (playernum1 > computernum1))
					{
						cout <<" WINNER IS  " <<playerone<< "!!!!!!!!!!!" <<endl<<endl<<endl;
						counter++;
					}

					 else if((trialcomputernum == true) && (trialplayernum == true)&& (playernum1 < computernum1))
					{
						cout <<" WINNER IS  " << playertwo << " !!!!!!!!!!!" <<endl<<endl<<endl;
						counter ++;
					}
			}




			if(counter == 0)
			{

				bool sequenceplayernum = false; bool sequencecomputernum = false;
	
				if((playernum1 == playernum2 +1) && (playernum1 == playernum3 +2))	sequenceplayernum = true;
				else if((playernum2 == playernum1 +1) && (playernum2 == playernum3 +2))  sequenceplayernum = true;
				else if((playernum3 == playernum1 +1) && (playernum3 == playernum2 +2))  sequenceplayernum = true;
				else if((playernum1 == playernum2 +2) && (playernum1 == playernum3 +1))  sequenceplayernum = true;
				else if((playernum2 == playernum1 +2 )&& (playernum2 == playernum3 +1))  sequenceplayernum = true;
				else if((playernum3 == playernum1 +2) && (playernum3 == playernum2 +1))   sequenceplayernum = true;


				if((computernum1 == computernum2 +1) && (computernum1 == computernum3 +2)) sequencecomputernum = true;
				else if((computernum2 == computernum1 +1) && (computernum2 == computernum3 +2)) sequencecomputernum = true;
				else if((computernum3 == computernum1 +1) && (computernum3 == computernum2 +2)) sequencecomputernum = true;
				else if((computernum1 == computernum2 +2) && (computernum1 == computernum3 +1)) sequencecomputernum = true;
				else if((computernum2 == computernum1 +2) && (computernum2 == computernum3 +1)) sequencecomputernum = true;
				else if((computernum3 == computernum1 +2) && (computernum3 == computernum2 +1)) sequencecomputernum = true;
	
			   if ( (sequenceplayernum == true )&& (sequencecomputernum == false))
			   {
				   cout <<" WINNER IS  " << playerone << "!!!!!!!!!!!" <<endl<<endl<<endl;
					counter++;
			   }
			   else if ( (sequenceplayernum == false )&& (sequencecomputernum == true))
			   {
				   cout <<" WINNER IS  " << playertwo << "!!!!!!!!!!!" <<endl<<endl<<endl;
					counter++;
			   }

			  else if((sequenceplayernum == true)&& (sequencecomputernum == true) && ((playernum1 +playernum2 + playernum3 ) > (computernum1 + computernum1 +computernum3 ) ))
					{
					cout <<" WINNER IS  " << playerone << "!!!!!!!!!!!" <<endl<<endl<<endl;
					counter++;
					}
			 else if((sequencecomputernum == true) &&(sequenceplayernum == true )&& ((playernum1 +playernum2 + playernum3 ) < (computernum1 + computernum1 +computernum3 ) ))
					{
					cout <<" WINNER IS  " << playertwo << " !!!!!!!!!!!" <<endl<<endl<<endl;
					counter++;
					}

			}


			if(counter == 0)
			{
				int playerdoublevalue, computerdoublevalue;
				bool doubleplayernum = false; bool doublecomputernum = false;
	
				if((playernum1 == playernum2) ||( playernum1 == playernum3)) { doubleplayernum = true; playerdoublevalue = playernum1;}
				else if((playernum2 == playernum1) ||( playernum2 == playernum3)) { doubleplayernum = true; playerdoublevalue = playernum2;}


				if((computernum1 == computernum2) || (computernum1 == computernum3)) {doublecomputernum = true; computerdoublevalue = computernum1;}
				else if ( (computernum2 == computernum1  ) || (computernum2 == computernum3 )) {doublecomputernum = true; computerdoublevalue = computernum1;}


				if((doubleplayernum == true) && (doublecomputernum == false))
					   {
							cout <<" WINNER IS  " <<playerone << "!!!!!!!!!!!" <<endl<<endl<<endl;
							counter++;
						}

					else if((doubleplayernum == false) && (doublecomputernum == true))
					   {
							cout <<" WINNER IS  " << playertwo << "  !!!!!!!!!!!" <<endl<<endl<<endl;
							counter++;
						}


				else if((doubleplayernum == true) && (doublecomputernum==true)  && (playerdoublevalue > computerdoublevalue))
					   {
							cout <<" WINNER IS  " << playerone << "!!!!!!!!!!!" <<endl<<endl<<endl;
							counter++;
						}

				else if((doublecomputernum == true) &&(doubleplayernum == true) && (playerdoublevalue < computerdoublevalue))
				{
					cout <<" WINNER IS  " << playertwo<< " !!!!!!!!!!!" <<endl<<endl<<endl;
					counter++;
				}

			}

		   if(counter == 0)
			{

					int Bplayernum =0 , Bcomputernum =0 , B2playernum =0, B2computernum,B3playernum =0, B3computernum=0;
	
					if((playernum1>playernum2) && (playernum1>playernum3)) Bplayernum = playernum1;
					else if((playernum2>playernum1) && (playernum2>playernum3)) Bplayernum = playernum2;
					else if((playernum3>playernum2) && (playernum3>playernum1)) Bplayernum = playernum3;
	    
					if((computernum1>computernum2) && (computernum1>computernum3)) Bcomputernum = computernum1;
					else if((computernum2>computernum1) && (computernum2>computernum3)) Bcomputernum = computernum2;
					else if((computernum3>computernum2) && (computernum3>computernum1)) Bcomputernum = computernum3;

					

					if(Bplayernum > Bcomputernum)
								{
							
									cout <<" WINNER IS  " << playerone << "!!!!!!!!!!!" <<endl<<endl<<endl;counter++;
								}

				   if(Bplayernum < Bcomputernum)
								{
							
									cout <<" WINNER IS  " << playertwo << "  !!!!!!!!!!!" <<endl<<endl<<endl;counter++;
								}
				 if(Bplayernum == Bcomputernum)
								{


					if((Bplayernum == Bcomputernum)&&(Bplayernum == playernum1 ) && (playernum2>playernum3) )	B2playernum = playernum2;
					if((Bplayernum == Bcomputernum)&&(Bplayernum == playernum1 ) && (playernum2<playernum3) )	B2playernum = playernum3;
					if((Bplayernum == Bcomputernum)&&(Bplayernum == playernum2 ) && (playernum3>playernum1) )	B2playernum = playernum3;
					if((Bplayernum == Bcomputernum)&&(Bplayernum == playernum2 ) && (playernum3<playernum1) )	B2playernum = playernum1;
					if((Bplayernum == Bcomputernum)&&(Bplayernum == playernum3 ) && (playernum1>playernum2) )	B2playernum = playernum1;
					if((Bplayernum == Bcomputernum)&&(Bplayernum == playernum3 ) && (playernum1<playernum2) )	B2playernum = playernum2;

					if((Bplayernum == Bcomputernum)&&(Bcomputernum == computernum1 ) && (computernum2>computernum3) )	B2computernum = computernum2;
					if((Bplayernum == Bcomputernum)&&(Bcomputernum  == computernum1 ) && (computernum2<computernum3) )	B2computernum = computernum3;
					if((Bplayernum == Bcomputernum)&&(Bcomputernum  == computernum2 ) && (computernum3> computernum1) )	B2computernum = computernum3;
					if((Bplayernum == Bcomputernum)&&(Bcomputernum  == computernum2 ) && (computernum3<computernum1) )	B2computernum = computernum1;
					if((Bplayernum == Bcomputernum)&&(Bcomputernum  == computernum3 ) && (computernum1>computernum2) )	B2computernum = computernum1;
					if((Bplayernum == Bcomputernum)&&(Bcomputernum  == computernum3 ) && (computernum1<computernum2) )	B2computernum = computernum2;


					if (B2playernum > B2computernum)
						{
						cout <<" WINNER IS  " << playerone << "!!!!!!!!!!!" <<endl<<endl<<endl;counter++;
						}

					if((B2playernum  < B2computernum))
					{
						cout <<" WINNER IS  " << playertwo << "!!!!!!!!!!!" <<endl<<endl<<endl;counter++;
					}
					if ((Bplayernum == Bcomputernum)&& (B2playernum == B2computernum))
					{

					if((Bplayernum == Bcomputernum)&& (B2playernum == B2computernum)&& (Bplayernum == playernum1 ) && (B2playernum == playernum2) )	B3playernum = playernum3;
					if((Bplayernum == Bcomputernum)&& (B2playernum == B2computernum)&& (Bplayernum == playernum2 ) && (B2playernum == playernum1) )	B3playernum = playernum3;
					if((Bplayernum == Bcomputernum)&& (B2playernum == B2computernum)&& (Bplayernum == playernum2 ) && (B2playernum == playernum3) )	B3playernum = playernum1;
					if((Bplayernum == Bcomputernum)&& (B2playernum == B2computernum)&& (Bplayernum == playernum3 ) && (B2playernum == playernum2) )	B3playernum = playernum1;
					if((Bplayernum == Bcomputernum)&& (B2playernum == B2computernum)&& (Bplayernum == playernum3) && (B2playernum == playernum1) )	B3playernum = playernum2;
					if((Bplayernum == Bcomputernum)&& (B2playernum == B2computernum)&& (Bplayernum == playernum1 ) && (B2playernum == playernum3) )	B3playernum = playernum2;

					if((Bplayernum == Bcomputernum)&& (B2playernum == B2computernum)&& (Bcomputernum == computernum1 ) && (B2computernum == computernum2) )	B3computernum = computernum3;
					if((Bplayernum == Bcomputernum)&& (B2playernum == B2computernum)&& (Bcomputernum == computernum2 ) && (B2computernum == computernum1) )	B3computernum = computernum3;
					if((Bplayernum == Bcomputernum)&& (B2playernum == B2computernum)&& (Bcomputernum == computernum2 ) && (B2computernum == computernum3) )	B3computernum = computernum1;
					if((Bplayernum == Bcomputernum)&& (B2playernum == B2computernum)&& (Bcomputernum == computernum3 ) && (B2computernum == computernum2) )	B3computernum = computernum1;
					if((Bplayernum == Bcomputernum)&& (B2playernum == B2computernum)&& (Bcomputernum == computernum3 ) && (B2computernum == computernum1) )	B3computernum = computernum2;
					if((Bplayernum == Bcomputernum)&& (B2playernum == B2computernum)&& (Bcomputernum == computernum1 ) && (B2computernum == computernum3) )	B3computernum = computernum2;



					if (B3playernum > B3computernum)
						{
						cout <<" WINNER IS  " << playerone << "!!!!!!!!!!!" <<endl<<endl<<endl;counter++;
						}

					if((B3playernum  < B3computernum))
					{
						cout <<" WINNER IS  " << playertwo << "!!!!!!!!!!!" <<endl<<endl<<endl;counter++;
					}
					if ((Bplayernum == Bcomputernum)&& (B2playernum == B2computernum)&& (B3playernum == B3computernum))
						{
						cout <<" DRAW " << "!!!!!!!!!!!" <<endl<<endl<<endl;counter++;
					}
					 
		           }
		   }
		   }

   
		   if(counter == 0)
			{

			

					
					{
						cout <<" cannot determine " << "!!!!!!!!!!!" <<endl<<endl<<endl;counter++;
					}
		   }
  
		  cout<< "Play again? Y OR N : "; cin>>flip;

		  }while (flip == 'Y'||flip=='y');
		  }
 
		 system("COLOR 7");

		}

		void paragraphCheck()
			{
				char wish;

				do

				{
			char choose;

			ifstream inputFile;
			inputFile.open("Paragraph.txt");
			cout << "Reading data from the your essay on file.\n";



			const int len=500;

			char para[len];
    
		   inputFile.getline(para, len);

    

			cout<<endl;

			cout<< "Your unarranged paragraph is " <<endl<<endl;

			for( int i=0; i<len; i++)
			 cout<< para[i];
			cout<<endl<<endl;

			cout<< "Press [C] to display the ARRANGED paragraph --------------- "; cin>>choose; cout <<endl<<endl;

			if(choose =='c'||choose=='C')
			{

					 int count =0;
					 for( int i=0; i<len; i++)
					 {
						 cout<< para[i];
						 count++;
						 if(count>60)
							 {
								if( isspace(para[i]))
								 {	
								 cout<<endl; count=0;
								 }
							 }
					 }
			}
		   cout <<endl<<endl;

   
			cout<< "Press [C] to display the INTEGERS present in paragraph --------------- "; cin>>choose; cout <<endl<<endl;

			if(choose =='c'||choose=='C')
			{

					   int *intptr = nullptr;
					   intptr = new int[len];

					   for( int i=0; i<len; i++)
					 {

								if( isdigit(para[i]))
								 {	
								 cout<<para[i] ;
								 *(intptr+i) = para[i];
								}
		 
					 }
			}
		   //deleting integers
			cout << endl <<endl;
		   for( int i=0; i<len; i++)
		 {

					if( isdigit(para[i]))
					 {	
					 para[i]=NULL ;
			
					}
		 
		 }

   			cout<< "Press [C] to display the PARAGRAPH after integer deletion---------- "; cin>>choose; cout <<endl<<endl;

			if(choose =='c'||choose=='C')
			{
					 int count1 =0;
					 for( int i=0; i<len; i++)
					 {
						 cout<< para[i];
						 count1++;
						 if(count1>60)
							 {
								if( isspace(para[i]))
								 {	
								 cout<<endl; count1=0;
								 }
							 }
					 }
					  cout << endl <<endl;
					   cout << endl <<endl;

			}

			cout <<" Press [R] to repeat OR [X] to exit "; cin>>wish;
			}

			while(wish =='r' ||wish =='R');
		}

		void lifetree::drawtree()

		{

			 char choose;
			lifetree classification;

			classification.insertnode (4.0, "OldestCell", "primitive one cell" );
			classification.insertnode (3.0, "Bacteria", "nucleus is circular");
			classification.insertnode (2.0, "Fungi", "porus structure");
			classification.insertnode (1.0, "Plants", "generally immovable");
			classification.insertnode (0.5, "Insects", "multilegs and bilateral");
			classification.insertnode (0.4, "Fish", "nolungs and scales");
			classification.insertnode (0.3, "Reptiles", "cold blooded and eggs");
			classification.insertnode (0.2, "Birds", "feathers and cold blooded");
			classification.insertnode (0.1, "Primates", "warm blooded and birth");

			do
			{
	
	

			cout << " press [1] INSERT or [2] DELETE or [3] DISPLAY or [4]EXIT " ; cin>>choose;cout<<endl;
			if (choose == '1')
					{
	
								double ageclass; string classname, classfeature;

								cout << " What is the age of the Class: "; cin>>ageclass;cin.ignore();
								cout <<" What is the name of the class: " ; getline(cin,classname);
								cout << " What is the feature of this Class: "; getline (cin,classfeature);
								classification.insertnode (ageclass, classname,classfeature );
								cout<<endl<<endl;

					}
			if (choose == '2')
					{
	
								double deleteage;

								cout << " What is the age of the Class you want to delete: "; cin>>deleteage;

								classification.deletion(deleteage);
								cout<<endl<<endl;

					}


			if (choose == '3')
							{

							cout << "Billion Years Ago" <<  "\tClass\t"  <<"\t\tFeatures" <<endl<<endl;
							classification.displayinorder();
							}

			cout<<endl<<endl;
			}
			while(choose!='4');
			
			
	
		}


//Staff Features:

void List::recorddata()
{
		cout <<" --------------------------------- " <<endl;
		cout <<"     WELCOME TO RECORD SECTION     " <<endl;

		List student, faculty, staff;

		string name, level; int id; double salary; char  response, wish, listname;

		do

		{
			cout<<endl<<endl;
			cout <<" --------------------------------- " <<endl;
			cout << "Which list do you want to modify? " <<endl 
				<< "Press [1] for STUDENT" <<endl 
				<< "Press [2] for FACULTY "<<endl 
				<< "Press [3] for STAFF " <<endl
			    << "Press Q to EXIT: " ; cin>> listname;
			cout<<endl;


			if(listname == '1')
			{
				   
					cout << "Now you are in Studentlist."<<endl<<endl;
					do
					{
		
							student.displayMenu();
							cin>>wish;
							cout<<endl<<endl;

							if( wish =='1')
										{
										cout<<"Please Enter the information of STUDENT: " <<endl;
										cout << " id: " ;cin>>id; cout<<endl; cin.ignore();
										cout << " name: " ; getline(cin, name); cout<<endl;
										cout << " level: " ; getline(cin, level); cout<<endl;
										cout << "GPA : " ; cin>> salary; cout<<endl;
										student.appendNode(id, name, level, salary);
										}
								if( wish =='2')
										{
										cout<<"Please Enter the information of STUDENT: " <<endl;
										cout << " id: " ;cin>>id; cout<<endl; cin.ignore();
										cout << " name: " ; getline(cin, name); cout<<endl;
										cout << " level: " ; getline(cin, level); cout<<endl;
										cout << "GPA : " ; cin>> salary; cout<<endl;
										student.insertNode(id, name, level, salary);
										}

								if( wish =='3')
										{
											int deletenum;
                                         
                                         cout<<endl<<endl;
										cout<< "Which ID do you want to delete ? : " ; cin>>deletenum;
										 student.deleteNode(deletenum) ;
										 cout<<endl<<endl;
										}
										
	                            if( wish =='4')
										{
										 student.displayList() ;
										} 


					}    while( (wish =='1' )||(wish =='2' )||(wish =='3' )||(wish =='4' ));

			}
			
		if(listname == '2')
			{
				   
					cout << "Now you are in Facultylist."<<endl<<endl;
					do
					{
		
							student.displayMenu();
							cin>>wish;
							cout<<endl<<endl;

							if( wish =='1')
										{
										cout<<"Please Enter the information of FACULTY: " <<endl;
										cout << " id: " ;cin>>id; cout<<endl; cin.ignore();
										cout << " name: " ; getline(cin, name); cout<<endl;
										cout << " level: " ; getline(cin, level); cout<<endl;
										cout << "SALARY : " ; cin>> salary; cout<<endl;
										student.appendNode(id, name, level, salary);
										}
								if( wish =='2')
										{
										cout<<"Please Enter the information of FACULTY: " <<endl;
										cout << " id: " ;cin>>id; cout<<endl; cin.ignore();
										cout << " name: " ; getline(cin, name); cout<<endl;
										cout << " level: " ; getline(cin, level); cout<<endl;
										cout << "SALARY : " ; cin>> salary; cout<<endl;
										student.insertNode(id, name, level, salary);
										}

								if( wish =='3')
										{
											int deletenum;
                                         
                                         cout<<endl<<endl;
										cout<< "Which ID do you want to delete ? : " ; cin>>deletenum;
										 student.deleteNode(deletenum) ;
										 cout<<endl<<endl;
										}
										
	                            if( wish =='4')
										{
										 student.displayList() ;
										} 


					}    while( (wish =='1' )||(wish =='2' )||(wish =='3' )||(wish =='4' ));

			}
		if(listname == '3')
			{
				   
					cout << "Now you are in STAFFlist."<<endl<<endl;
					do
					{
		
							student.displayMenu();
							cin>>wish;
							cout<<endl<<endl;

							if( wish =='1')
										{
										cout<<"Please Enter the information of STAFF: " <<endl;
										cout << " id: " ;cin>>id; cout<<endl; cin.ignore();
										cout << " name: " ; getline(cin, name); cout<<endl;
										cout << " level: " ; getline(cin, level); cout<<endl;
										cout << "SALARY: " ; cin>> salary; cout<<endl;
										student.appendNode(id, name, level, salary);
										}
								if( wish =='2')
										{
										cout<<"Please Enter the information of STAFF: " <<endl;
										cout << " id: " ;cin>>id; cout<<endl; cin.ignore();
										cout << " name: " ; getline(cin, name); cout<<endl;
										cout << " level: " ; getline(cin, level); cout<<endl;
										cout << "SALARY : " ; cin>> salary; cout<<endl;
										student.insertNode(id, name, level, salary);
										}

								if( wish =='3')
										{
											int deletenum;
                                         
                                         cout<<endl<<endl;
										cout<< "Which ID do you want to delete ? : " ; cin>>deletenum;
										 student.deleteNode(deletenum) ;
										 cout<<endl<<endl;
										}
										
	                            if( wish =='4')
										{
										 student.displayList() ;
										} 


					}    while( (wish =='1' )||(wish =='2' )||(wish =='3' )||(wish =='4' ));

			}


		cout << "Do you want to continue editing different list ? Press Y to continue.  "; cin>>response; 

		} while ( response == 'Y' || response == 'y' );
}


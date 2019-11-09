#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<time.h>
#include<process.h>
#include<stdlib.h>
char choice;
struct questions
{
  char q[200];
  char op1[50];
  char op2[50];
  char op3[50];
  char op4[50];
  char rtans1;
  char rtans2;
};
questions que1[]={ {"What is the function used to print statements of screen? ","print","cout","show","cin",'B','b'},
		   {"Size of the array is a part of definition, when: ","Initialization is a part of definition","It is a declartion","It is a formal parameter","All of these",'D','d'},
		   {"The const feature can be applied to:","an identifier","an array","an array argument","All of these",'D','d'},
		   {"While passing an array as an actual argument, \n\tthe function call must have the array name: ","with empty brackets","with its size","alone","none of the above",'C','c'},
		   {"C++ was originally developed by: ","Clocksin and Mellish","Donald E.Knuth","Sir Richard Hadlee","Bjame Stroustrup",'D','d'},
		   {"Reusability is a desirable feature of a language as it:","Decreases the testing time","Lowers the maintenance cost","reduces the compilation time","both A and B",'D','d'},
		   {"cout stands for:","class output","charactar output","common output","call output",'C','c'},
		   {"Which symbol is used to declare the preprocessor directives","#","$","*","^",'A','a'},
		   {"The fields in a structure of a C program are by default:","protected","public","private","personal",'B','b'},
		   {"How much is 1 Bronto byte?","1024 Yotta byte","1 Giga byte","1024 Exa byte","1024 Zetta byte",'A','a'},
		   {"What is meant by BIOS? ","Biotic Individual Over Sytem","Basic Individual Outpost Sytem","Basic Input Output System","Basic Inpost Output System",'C','c'},
		   {"The data elements in structure are also known as what?","objects","members","datas","parts",'B','b'},
		   {"Which of the following correctly declares an array?","int array[10];","int array;","array{10}","array array[10];",'A','a'},
		   {"What is the index number of the last element\n\t of an array with 9 elements?","9","8","0","Progammer-defined",'B','b'},
		   {"Which of the following accesses the seventh element \n\tstored in the array?","array[6];","array[7];","array(7);","array;",'A','a'},
		   {"What is this opertor ?: called?","conditional","relational","casting","equality",'A','a'},
		   {"The switch statement is also called as?","choosing structure","selective structure","certain structure","Bitwise structure",'B','b'},
		   {"The destination statement for goto label is indentified\n\t by what label?","$","@","*",":",'D','d'},
		   {"How many types of comments are there in C++?","1","2","3","4",'B','b'},
		   {"What is used to write multi line comment in C++","/*....*/","/$....$/","//","None of the above",'A','a'},
		   {"Where does the execution of the program starts?","User-defined function","main function","void function","structures",'B','b',},
		   {"Which keyword is used to define the marcos in C++ ?","marco","define","#define","none of these",'C','c'},
		   {"The variable that are listed in function's calls are called __","Actual parameters","Declared parameters","Passed parameters","none of these",'A','a'},
		   {"An object that can be used in accessing another object is known to be __","Pointer","Arrays","Structures","Refferences",'A','a'},
		   {"In linked list array, objects are reffered to as ?","Instances","Attributes","Nodes","Entity",'C','c'},
		   {"How problems can be veiwed in mathematical means ?","Operations","Functions","Mechanism","Design pattern",'B','b'},
		   {"What is the full form of ADT ?","Aray data type","Actual data type","Abstract data type",'C','c'},
		   {"What is the basic technique of using an array which is considered safer and easier ?","Built-in array","User defined array","Vector","Aggregate array",'C','c'},
		   {"A collection of objects that are residing in one unit are called ?","Structures","Aggregate","Domain","Array",'B','b'},
		   {"What is the primitive method of using an array ?","Vector","Aggregate array","User defined array","Built in array",'D','d'},
		   {"For parameters, a specific selection of values is called ?","Parameters","Instances","Member","Entity",'B','b'},
		   {"A problem defination should not include any __","Inputs","Outputs","Constraints","Steps",'C','c'},
		   {"Which term makes realization of a data type as a software component ?","Actual data type","Abstract data type","Visual data type","Component data type",'B','b'},
		   {"Which error is showed up when A keyword used as an identifier ?","Logical Error","Run-time Error","Syntax Error","None of these",'C','c'},
		   {"Rectangle symbol in a flow chart is called as ?","Action symbol","Terminating symbol","Begin symbol","Connector symbol",'A','a'},
		   {"Writing a keyword while a 'While Loop' causes ________ error.","fatal","syntax","terminating","none of these",'B','b'},
		   {"All kewords like bool, catch, private, public, this and throw ,were introduced in which launguage ?","C","C++","Both C and C++","None of these",'B','b'},
		   {"Which shape is used as a connector symbol in a flow chart ?","Oval","Rectangle","Small Circle","Triangle",'C','c'},
		   {"A structure that is executed in a repitition strucrture, \n\tskips remainning statements in a body of a structure and \n\tproceeds with next iteration of loops, is knows as ?","Break staement","Continue statement","Case statement","None of these",'B','b'},
		   {"An Uninitialised variable contains __","0 value",",Only two values","A garbage value","All of these",'C','c'},
		   {"Which of the following is related to 1st Generation computers?","Vaccum tubes","Transistors","Large scale integration","Multi-core processors",'A','a'},
		   {"What will happen if a string is empty ?","It can't be created","Raises an error","It can't be used","None of these",'C','c'},
		   {"Which is used for formatting purpose in C++ ?","&","Container","Whitespace","Vector",'C','c'},
		   {"How many macros are used by mathematical functions in the header file ?","1","2","3","4",'C','c'},
		   {"Which one of the following mathematical function is verloaded in <complex> and <valarray> ?","cos","tan","sin","mod",'B','b'},
		   {"Which is a constant defined in <stdlib.h> header file ?","RAND_MAX","rand","srand","none of these",'A','a'},
		   {"Which can be used to create a random number whithout duplication ?","Character","Time","Both A and B","None of these",'B','b'},
		   {"Which operattor is used to produce a certain number in a specific range ?","$","%","Modulo operator","Both B and C",'D','d'},
		   {"To which type of class, we can apply Run-Time Type Information ?","Encapsulation","Polymorphic","Derived","None of these",'B','b'},
		   {"Which keyword is used to handle the exception ?","try","throw","catch","none of these",'C','c'},
		   {"What is the other name of the marco","scripted directive","executed directive","link directive","none of these",'A','a'},
		   {"What does a default header file contains ?","prototype","implementation","declaration","none of these",'C','c'},
		   {"Which of the header file does not exist ?","<iostream>","<string>","<sstream>","none of these",'D','d'},
		   {"Which header file is used to pass unknow number of arguments to functions ?","srdlib.h","string.h","stdrag.h","none if these",'C','c'},
		   {"Which of the following is used to implement the C++ interface ?","Absolute variables","Abstract classes","Constant values","All of these",'B','b'},
		   {"Which operator is having the highest precedence in C++ ?","Array subscript","Scope resolution operator","static_cast","dynamic_cast",'B','b'},
		   {"Which concept does the preincrement uses ?","call by value","call by refference","queue","none of these",'B','b'},
		   {"Pick up the other name of operator function.","function overloading","operator overloading","member overloading","All of these",'B','b'},
		   {"Which interface determines how your class will be used by other program ?","public","private","protected","all of these",'A','a'},
		   {"How many kinds of entities are directly parameterized in C++","1","2","3","4",'C','c'} };

void correct(int mon, int x)
{
  clrscr();
   cout<<"\n\n\n";
  cout<<"           ____    _____   ____   _____   ____   _____  ______ "<<endl;
  cout<<"         /       /    /  /__ /  /____/  /___   /         /    "<<endl;
  cout<<"       /       /    /  / \\    / \\     /      /         /     "<<endl;
  cout<<"     /_____  /____/  /    \\  /    \\ /____  /_____    /      "<<endl;
  cout<<"\n\n\tCongrtulations! You win Rs."<<mon;
  if(x==5||x==10)
  cout<<"You passed a checkpoint and are now safe";
  getch();
}
void rules()
{ clrscr();
  cout<<"\t\t\t __            ___   __"<<endl;
  cout<<"\t\t\t|  | |  | |   |     |   "<<endl;
  cout<<"\t\t\t|__| |  | |   |___  |__ "<<endl;
  cout<<"\t\t\t|\\   |  | |   |        |"<<endl;
  cout<<"\t\t\t|  \\ |__| |__ |___  ___|"<<endl;
  cout<<"\n\n\n\t1. The quiz contains 15 questions";
  getch();
}
void loading()
{ clrscr();
  cout<<"\n\n\n\n\n\n\n\n\t\t\t            Loading...";
  cout<<"\n\n\t\t\t     ";
  for(int i=0;i<10;i++)
  {
    cout<<"|";
    delay(400);
  }
  for(i=0;i<10;i++)
  {
    cout<<"|";
    delay(50);
  }
  getch();
}
void kbc()
{  clrscr();
   cout<<"\n\n\n\n\t\t\t--------------------------";
   cout<<"\n\t\t\t| Kaun Banega Crorepati |";
   cout<<"\n\t\t\t--------------------------";
}
void wrong(char x,int y)
{ clrscr();
  cout<<"\n\n\n\tSorry! That was the wrong answer. The correct answer is: "<<x;
  if(y==0)
  cout<<"\n\t\tYou take home Rs. 0";
  else
  if(y==1)
  cout<<"\n\tYou take home Rs. 10,000";
  else
  if(y==2)
  cout<<"\n\tYou take home Rs. 3,20,000";
   getch();
   exit(0);
}
int lifelines( int flag)
{
  clrscr();
  int n;
  if(flag==0)
 {  x:
    cout<<"\n\n\t Your available lifelines are: ";
    cout<<"\n\t\t1. 50-50";
    cout<<"\n\t\t2. Expert Advice";
    cout<<"\n\t\t3. Double dip";
    cout<<"\n\t\t4. Audience poll"<<endl;
    cin>>n;
      if(n==1)
  { clrscr();
    cout<<"\n\n\tNow two wrong options will be eliminated ";
    getch();
  }
  else
  if(n==2)
  {
     clrscr();
      int t=9;
      while(t>0)
      {
	if(t%3==0)
	{
	  cout<<"\n\n\tCalling.";
	}
	if(t%3==1)
	{
	  cout<<"\n\n\tCalling...";
	}
	if(t%3==2)
	{
	  cout<<"\n\n\tCalling..";
	}
	t--;
	delay(1000);
	clrscr();
      }

  }
    else
     if(n==3)
    {
      clrscr();
      cout<<"Now, you will get two chances to give the answer. ";
      getch();
    }
    else
    if(n==4)
  {
      clrscr();
      int t=9;
      while(t!=0)
      {
	if(t%3==0)
	{
	  cout<<"\n\n\tVoting.";
	}
	if(t%3==1)
	{
	  cout<<"\n\n\tVoting...";
	}
	if(t%3==2)
	{
	  cout<<"\n\n\tVoting..";
	}
	t--;
	delay(1000);
	clrscr();
      }

  }
  else
  {
    cout<<"\n\tWrong option";
    goto x;
  }

}
 if(flag==2)
{   a:
   cout<<"\n\n\t Your available lifelines are: ";
    cout<<"\n\t\t2. Expert Advice";
    cout<<"\n\t\t3. Double dip";
    cout<<"\n\t\t4. Audience poll"<<endl;
    cin>>n;
      if(n==1)
  {
    cout<<"\n\tWrong option";
    goto a;

  }
  else
  if(n==2)
  {
      clrscr();
      int t=9;
      while(t!=0)
      {
	if(t%3==0)
	{
	  cout<<"\n\n\tCalling.";
	}
	if(t%3==1)
	{
	  cout<<"\n\n\tCalling...";
	}
	if(t%3==2)
	{
	  cout<<"\n\n\tCalling..";
	}
	t--;
	delay(1000);
	clrscr();
      }

  }
  else
     if(n==3)
    {
      clrscr();
      cout<<"\n\tNow, you will get two chances to give the answer. ";
      getch();
    }
    else
    if(n==4)
  {
      clrscr();
      int t=9;
      while(t!=0)
      {
	if(t%3==0)
	{
	  cout<<"\n\n\tVoting.";
	}
	if(t%3==1)
	{
	  cout<<"\n\n\tVoting...";
	}
	if(t%3==2)
	{
	  cout<<"\n\n\tVoting..";
	}
	t--;
	delay(1000);
	clrscr();
      }

  }
  else
  {
    cout<<"Wrong option";
    goto a;
  }

}
 if(flag==4)
 {  b:
    cout<<"\n\n\t Your available lifelines are: ";
    cout<<"\n\t\t1. 50-50";
    cout<<"\n\t\t3. Double dip";
    cout<<"\n\t\t4. Audience poll"<<endl;
    cin>>n;
      if(n==1)
  { clrscr();
    cout<<"\n\n\tNow two wrong options will be eliminated ";
    getch();
  }
  else
  if(n==2)
  { cout<<"Wrong option";
     goto b;
  }
  else
  if(n==3)
    {
      clrscr();
      cout<<"Now, you will get two chances to give the answer. ";
      getch();
    }
    else
    if(n==4)
  {
      clrscr();
      int t=9;
      while(t!=0)
      {
	if(t%3==0)
	{
	  cout<<"\n\n\tVoting.";
	}
	if(t%3==1)
	{
	  cout<<"\n\n\tVoting...";
	}
	if(t%3==2)
	{
	  cout<<"\n\n\tVoting..";
	}
	t--;
	delay(1000);
	clrscr();
      }

  }
  else
  {
     cout<<"Wrong option";
     goto b;
  }


 }
 if(flag==7)
 {   c:
    cout<<"\n\n\t Your available lifelines are: ";
    cout<<"\n\t\t1. 50-50";
    cout<<"\n\t\t2. Expert Advice";
    cout<<"\n\t\t4. Audience poll"<<endl;
    cin>>n;
      if(n==1)
  { clrscr();
    cout<<"\n\n\tNow two wrong options will be eliminated ";
    getch();
  }
  else
  if(n==2)
  {
      clrscr();
      int t=9;
      while(t!=0)
      {
	if(t%3==0)
	{
	  cout<<"\n\n\tCalling.";
	}
	if(t%3==1)
	{
	  cout<<"\n\n\tCalling...";
	}
	if(t%3==2)
	{
	  cout<<"\n\n\tCalling..";
	}
	t--;
	delay(1000);
	clrscr();
      }

  }
     else
     if(n==3)
    {
      cout<<"\n\tWrong option";
      goto c;
    }
    if(n==4)
  {
      clrscr();
      int t=9;
       while(t!=0)
      {
	if(t%3==0)
	{
	  cout<<"\n\n\tVoting.";
	}
	if(t%3==1)
	{
	  cout<<"\n\n\tVoting...";
	}
	if(t%3==2)
	{
	  cout<<"\n\n\tVoting..";
	}
	t--;
	delay(1000);
	clrscr();
      }
  }
  else
  {  cout<<"Wrong option";
     goto c;
  }

 }
 if(flag==12)
 {  d:
     cout<<"\n\n\t Your available lifelines are: ";
    cout<<"\n\t\t1. 50-50";
    cout<<"\n\t\t2. Expert Advice";
    cout<<"\n\t\t3. Double dip"<<endl;
    cin>>n;
     if(n==1)
  { clrscr();
    cout<<"\n\n\tNow two wrong options will be eliminated ";
    getch();
  }
  else
  if(n==2)
  {
      clrscr();
      int t=9;
       while(t!=0)
      {
	if(t%3==0)
	{
	  cout<<"\n\n\tCalling.";
	}
	if(t%3==1)
	{
	  cout<<"\n\n\tCalling...";
	}
	if(t%3==2)
	{
	  cout<<"\n\n\tCalling..";
	}
	t--;
	delay(1000);
	clrscr();
      }
  }
    else
     if(n==3)
    {
      clrscr();
      cout<<"Now, you will get two chances to give the answer. ";
      getch();
    }
    else
   {
     cout<<"Wrong option";
     goto d;
  }

 }
 if(flag==6)
 {   e:
    cout<<"\n\n\t Your available lifelines are: ";
    cout<<"\n\t\t3. Double dip";
    cout<<"\n\t\t4. Audience poll"<<endl;
    cin>>n;
     if(n==3)
    {
      clrscr();
      cout<<"Now, you will get two chances to give the answer. ";
      getch();
    }
    else
    if(n==4)
  {
      clrscr();
      int t=9;
       while(t!=0)
      {
	if(t%3==0)
	{
	  cout<<"\n\n\tVoting.";
	}
	if(t%3==1)
	{
	  cout<<"\n\n\tVoting...";
	}
	if(t%3==2)
	{
	  cout<<"\n\n\tVoting..";
	}
	t--;
	delay(1000);
	clrscr();
      }
   }
  else
  {
    cout<<"\n\tWrong option";
    goto e;
  }

 }
 if(flag==9)
  { f:
    cout<<"\n\n\t Your available lifelines are: ";
    cout<<"\n\t\t2. Expert Advice";
    cout<<"\n\t\t4. Audience poll"<<endl;
    cin>>n;

  if(n==2)
  {
      clrscr();
      int t=9;
      while(t!=0)
      {
	if(t%3==0)
	{
	  cout<<"\n\n\tCalling.";
	}
	if(t%3==1)
	{
	  cout<<"\n\n\tCalling...";
	}
	if(t%3==2)
	{
	  cout<<"\n\n\tCalling..";
	}
	t--;
	delay(1000);
	clrscr();
      }

  }
    else
    if(n==4)
  {
      clrscr();
      int t=9;
      while(t!=0)
      {
	if(t%3==0)
	{
	  cout<<"\n\n\tVoting.";
	}
	if(t%3==1)
	{
	  cout<<"\n\n\tVoting...";
	}
	if(t%3==2)
	{
	  cout<<"\n\n\tVoting..";
	}
	t--;
	delay(1000);
	clrscr();
      }

  }
  else
  {
    cout<<"\n\tWrong option";
    goto f;
  }

  }
  if(flag==14)
  {  g:
     cout<<"\n\n\t Your available lifelines are: ";
     cout<<"\n\t\t2. Expert Advice";
     cout<<"\n\t\t3. Double dip"<<endl;
    cin>>n;
     if(n==2)
  {
      clrscr();
      int t=9;
      while(t!=0)
      {
	if(t%3==0)
	{
	  cout<<"\n\n\tCalling.";
	}
	if(t%3==1)
	{
	  cout<<"\n\n\tCalling...";
	}
	if(t%3==2)
	{
	  cout<<"\n\n\tCalling..";
	}
	t--;
	delay(1000);
	clrscr();
      }
    }

    else
     if(n==3)
    {
      clrscr();
      cout<<"Now, you will get two chances to give the answer. ";
      getch();
    }
   else
  {
    cout<<"\n\tWrong option";
    goto g;
  }

  }
  if(flag==11)
  {  h:
     cout<<"\n\n\t Your available lifelines are: ";
      cout<<"\n\t\t1. 50-50";
      cout<<"\n\t\t4. Audience poll"<<endl;
      cin>>n;
       if(n==1)
  { clrscr();
    cout<<"\n\n\tNow two wrong options will be eliminated ";
    getch();
  }
    else
    if(n==4)
  {
      clrscr();
      int t=9;
      while(t!=0)
      {
	if(t%3==0)
	{
	  cout<<"\n\n\tVoting.";
	}
	if(t%3==1)
	{
	  cout<<"\n\n\tVoting...";
	}
	if(t%3==2)
	{
	  cout<<"\n\n\tVoting..";
	}
	t--;
	delay(1000);
	clrscr();
      }
  }
  else
  {
    cout<<"\n\tWrong option";
    goto h;
  }


  }
  if(flag==16)
  {  i:
    cout<<"\n\n\t Your available lifelines are: ";
    cout<<"\n\t\t1. 50-50";
    cout<<"\n\t\t3. Double dip"<<endl;
   cin>>n;
    if(n==1)
  { clrscr();
    cout<<"\n\n\tNow two wrong options will be eliminated ";
    getch();
  }
     else
     if(n==3)
    {
      clrscr();
      cout<<"Now, you will get two chances to give the answer. ";
      getch();
    }
  else
  {
    cout<<"\n\tWrong option";
    goto i;
  }

  }
  if(flag==19)
  {  j:
      cout<<"\n\n\t Your available lifelines are: ";
    cout<<"\n\t\t1. 50-50";
    cout<<"\n\t\t2. Expert Advice"<<endl;
    cin>>n;
     if(n==1)
  { clrscr();
    cout<<"\n\n\tNow two wrong options will be eliminated ";
    getch();
  }
  else
  if(n==2)
  {
      clrscr();
      int t=9;
      cout<<"\n\n\t\t";
      while(t!=0)
      {
	if(t%3==0)
	{
	  cout<<"\n\n\tCalling.";
	}
	if(t%3==1)
	{
	  cout<<"\n\n\tCalling...";
	}
	if(t%3==2)
	{
	  cout<<"\n\n\tCalling..";
	}
	t--;
	delay(1000);
	clrscr();
      }

  }
   else
  {
    cout<<"\n\tWrong option";
    goto j;
  }

  }
  if(flag==13)
  {  k:
   cout<<"\n\n\t Your available lifelines are: ";
    cout<<"\n\t\t4. Audience poll"<<endl;
    cin>>n;
       if(n==4)
  {
      clrscr();
      int t=9;
      while(t!=0)
      {
	if(t%3==0)
	{
	  cout<<"\n\n\tVoting.";
	}
	if(t%3==1)
	{
	  cout<<"\n\n\tVoting...";
	}
	if(t%3==2)
	{
	  cout<<"\n\n\tVoting..";
	}
	t--;
	delay(1000);
	clrscr();
      }
  }
  /*  { clrscr();
  if(n=='a'|| n=='A')
  { cout<<"100 |   "<<endl;
    cout<<" 90 |     "<<endl;
    cout<<" 80 |       "<<endl;
    cout<<" 70 |   *     "<<endl;
    cout<<" 60 |   *      "<<endl;
    cout<<" 50 |   *        "<<endl;
    cout<<" 40 |   *           * "<<endl;
    cout<<" 30 |   *     *     *  "<<endl;
    cout<<" 20 |   *     *     *     "<<endl;
    cout<<" 10 |   *     *     *     *  "<<endl;
    cout<<"    |__________________________"<<endl;
    cout<<"        A     B     C     D     "<<endl;
   }
   if(n=='b'|| n=='B')
  { cout<<"100 |   "<<endl;
    cout<<" 90 |     "<<endl;
    cout<<" 80 |         * "<<endl;
    cout<<" 70 |         * "<<endl;
    cout<<" 60 |         * "<<endl;
    cout<<" 50 |         *  "<<endl;
    cout<<" 40 |   *     *     * "<<endl;
    cout<<" 30 |   *     *     *  "<<endl;
    cout<<" 20 |   *     *     *     "<<endl;
    cout<<" 10 |   *     *     *     *  "<<endl;
    cout<<"    |__________________________"<<endl;
    cout<<"        A     B     C     D     "<<endl;

   }
   if(n=='c'|| n=='C')
  { cout<<"100 |   "<<endl;
    cout<<" 90 |     "<<endl;
    cout<<" 80 |       "<<endl;
    cout<<" 70 |               * "<<endl;
    cout<<" 60 |               *  "<<endl;
    cout<<" 50 |               *    "<<endl;
    cout<<" 40 |               * "<<endl;
    cout<<" 30 |         *     *     * "<<endl;
    cout<<" 20 |   *     *     *     *"<<endl;
    cout<<" 10 |   *     *     *     *  "<<endl;
    cout<<"    |__________________________"<<endl;
    cout<<"        A     B     C     D     "<<endl;
   }
   if(n=='d'|| n=='D')
  { cout<<"100 |   "<<endl;
    cout<<" 90 |     "<<endl;
    cout<<" 80 |       "<<endl;
    cout<<" 70 |                     * "<<endl;
    cout<<" 60 |                     *"<<endl;
    cout<<" 50 |                     *"<<endl;
    cout<<" 40 |                     *"<<endl;
    cout<<" 30 |                     *"<<endl;
    cout<<" 20 |               *     *"<<endl;
    cout<<" 10 |   *     *     *     *  "<<endl;
    cout<<"    |__________________________"<<endl;
    cout<<"	A     B     C     D     "<<endl;
   }
   getch();
   }*/

  else
  {
    cout<<"\n\tWrong option";
    goto k;
  }

  }
  if(flag==18)
  {  l:
     cout<<"\n\n\t Your available lifelines are: ";
    cout<<"\n\t\t3. Double dip"<<endl;
      cin>>n;

     if(n==3)
    {
      clrscr();
      cout<<"Now, you will get two chances to give the answer. ";
      getch();
    }

  else
  {
    cout<<"\n\tWrong option";
    goto l;
  }

  }
  if(flag==23)
  {  m:
     cout<<"\n\n\t Your available lifelines are: ";
    cout<<"\n\t\t1. 50-50"<<endl;

    cin>>n;
      if(n==1)
  { clrscr();
    cout<<"\n\n\tNow two wrong options will be eliminated ";
    getch();
  }

  else
  {
    cout<<"\n\tWrong option";
    goto m;
  }

  }
  if(flag==25)
  {
    cout<<"\n\tNo available lifeliines";
    getch();
  }



   return n;
}
char fiftyfifty( int x, int y)
{
	kbc();
	char ans;
       cout<<"\n\n\nQuestion "<<y<<": "<<que1[x].q;
       cout<<"\n\n\tA. "<<que1[x].op1;
       if(que1[x].rtans1=='B')
       {
	 cout<<"\n\tB. "<<que1[x].op2;
	 cout<<"\n\n\n\tE. Use a lifeline ";
	 cout<<"\n\tF. Quit the game ";
       }
       else
       if(que1[x].rtans1=='C')
       {
	cout<<"\n\n\tC. "<<que1[x].op3;
	cout<<"\n\n\tE. Use a lifeline ";
	cout<<"\n\tF. Quit the game ";
       }
       else
       if(que1[x].rtans1=='D')
       {
	cout<<"\n\n\n\tD. "<<que1[x].op4;
	cout<<"\n\tE. Use a lifeline";
	cout<<"F. Quit the Game" ;
       }
       cin>>ans;
       return ans;
}
char expert( int x, int y, char name[])
{ char a,b,ans;
  if(que1[x].rtans1=='A'||que1[x].rtans1=='B')
  {
    a='A';
    b='B';
  }
  else
  if(que1[x].rtans1=='C'||que1[x].rtans1=='D')
  {
    a='C';
    b='D';
  }
 if( y<10)
   {   clrscr();
  cout<<"     	         ________________________________________ "<<endl;
  cout<<"	         |                                      | "<<endl;
  cout<<"	         |                                      | "<<endl;
  cout<<"	         |                                      | "<<endl;
  cout<<"	         |               _______                | "<<endl;
  cout<<"	         | 	        /       \\               | "<<endl;
  cout<<"	         |             |         |              | "<<endl;
  cout<<"	         |             |         |              | "<<endl;
  cout<<"	         |             |         |              | "<<endl;
  cout<<"	         |            / \\       /\\              | "<<endl;
  cout<<"	         |          /     \\___/    \\            | "<<endl;
  cout<<"	         |        /                  \\          | "<<endl;
  cout<<"	         |      /                      \\        | "<<endl;
  cout<<"	         |     |                        |       | "<<endl;
  cout<<"	         |     |         EXPERT         |       | "<<endl;
  cout<<"	         |     |                        |       | "<<endl;
  cout<<"	         |     |                        |       | "<<endl;
  cout<<"	         |_____|________________________|_______| "<<endl;

     cout<<"\n\n\tGood going "<<name<<", I think that the right answer should be "<<que1[x].rtans1;
     getch();
   }
   else
   {
      clrscr();
      cout<<"\n\n\tYou are playing well "<<name<<", I am not sure of the answer to this question but i think it might be "<<a<<" or "<<b;
      getch();
   }
    cout<<"\n\n\nQuestion "<<y<<": "<<que1[x].q;
  cout<<"\n\n\tA. "<<que1[x].op1<<"\n\tB. "<<que1[x].op2;
  cout<<"\n\tC. "<<que1[x].op3<<"\n\tD. "<<que1[x].op4<<"\n\tE."<<" Use a Lifeline"<<"\n\tF."<<" Quit the game"<<endl;
  cin>>ans;
   return ans;
 }
 void doubledip(int x, int y, int z)
 {
  kbc();
  char ans;
  cout<<"\n\n\nQuestion "<<y<<": "<<que1[x].q;
  cout<<"\n\n\tA. "<<que1[x].op1<<"\n\tB. "<<que1[x].op2;
  cout<<"\n\tC. "<<que1[x].op3<<"\n\tD. "<<que1[x].op4<<endl;
  cin>>ans;
  if(ans==que1[x].rtans1||ans==que1[x].rtans2)
  {
    correct( z, y);
  }
  else
  {   clrscr();
      cout<<"Wrong answer, second chance:";
      getch();
      clrscr();
      cout<<"\n\n\nQuestion "<<y<<": "<<que1[x].q;
  cout<<"\n\n\tA. "<<que1[x].op1<<"\n\tB. "<<que1[x].op2;
  cout<<"\n\tC. "<<que1[x].op3<<"\n\tD. "<<que1[x].op4<<endl;
  cin>>ans;
  if(ans==que1[x].rtans1||ans==que1[x].rtans2)
  {
     correct(z, y);
  }
  else
  {  int a;
     if(y>5&&y<=10)
     a=1;
     else
     if(y<=5)
     a=0;
     else
     if(y>10)
     a=2;
     wrong(que1[x].rtans1,a);
  }

 }
}
void play(char x[])
{ rules();
  loading();
  char ans;
  unsigned int seedval;
  time_t t;
  seedval=(unsigned)time(&t);
  srand(seedval);
  int i,money=0,flag=0,qno=0,n,life=0;
  kbc();
  qno=1;
  i=(rand()%2)+0;
  cout<<"\n\n\nQuestion 1: "<<que1[i].q;
  cout<<"\n\n\tA. "<<que1[i].op1<<"\n\tB. "<<que1[i].op2;
  cout<<"\n\tC. "<<que1[i].op3<<"\n\tD. "<<que1[i].op4<<"\n\tE."<<" Use a Lifeline"<<"\n\tF."<<" Quit the game"<<endl;
  cin>>ans;

  if(ans==que1[i].rtans1||ans==que1[i].rtans2)
  {
      money=1000;
     correct(money,qno);
  }
  else
  { if(ans=='E'||ans=='e')
   {  f:
    n=lifelines(life);

      if(n==1)
      {  life+=2;
	 ans=fiftyfifty(i, qno);
	 if(ans==que1[i].rtans1||ans==que1[i].rtans2)
  {
      money=1000;
     correct(money,qno);
  }
     else
     {
	if(ans=='E'||ans=='e')
	{
	  goto f;
	}
	  else
    if(ans=='F'||ans=='f')
    {
      clrscr();
      cout<<"\n\n\tWell Played. You take home Rs. 0 ";
      exit(0);
    }
    else
      wrong( que1[i].rtans1, flag);
     }
    }
      else
      if(n==2)
      {
	life+=4;
	ans=expert(i, qno, x);
	 if(ans==que1[i].rtans1||ans==que1[i].rtans2)
  {
      money=1000;
     correct(money,qno);
  }
     else
     {
	if(ans=='E'||ans=='e')
	{
	  goto f;
	}
	  else
    if(ans=='F'||ans=='f')
    {
      clrscr();
      cout<<"\n\n\tWell Played. You take home Rs. 0 ";
      exit(0);
    }
    else
      wrong( que1[i].rtans1, flag);
      }
      }
      else
      if(n==3)
      {
	life+=7;
	money=1000;
	doubledip( i, qno ,money);
      }

    else
    if(ans=='F'||ans=='f')
    {
      clrscr();
      cout<<"\n\n\tWell Played. You take home Rs. 0 ";
      exit(0);
    }
    else
    wrong( que1[i].rtans1, flag);
  }
}
  kbc();
  qno=2;
  i=(rand()%5)+3;
  cout<<"\n\n\nQuestion 2: "<<que1[i].q;
  cout<<"\n\n\tA. "<<que1[i].op1<<"\n\tB. "<<que1[i].op2<<"\n\tC. "<<que1[i].op3<<"\n\tD. "<<que1[i].op4<<"\n\tE. Use a lifeline"<<"\n\tF. Quit the Game";
  cin>>ans;
  if(ans==que1[i].rtans1||ans==que1[i].rtans2)
  {
    money=2000;
    correct(money,qno);
  }
  else
  { if(ans=='E'||ans=='e')
    n= lifelines(life);
    else
    if(ans=='F'||ans=='f')
    {
      clrscr();
      cout<<"\n\n\tWell Played. You take home Rs. 1000 ";
      exit(0);
    }

  wrong( que1[i].rtans1,flag);
  }
  kbc();
  qno=3;
  i=(rand()%8)+6;
  cout<<"\n\n\nQuestion 3: "<<que1[i].q;
  cout<<"\n\n\tA."<<que1[i].op1<<"\n\tB."<<que1[i].op2<<"\n\tC."<<que1[i].op3<<"\n\tD."<<que1[i].op4<<"\n\tE. Use a lifeline"<<"\n\tF. Quit the Game";
  cin>>ans;
  if(ans==que1[i].rtans1||ans==que1[i].rtans2)
  {
    money=3000;
    correct(money,qno);
  }
  else
  { if(ans=='E'||ans=='e')
    n=lifelines(life);
    else
    if(ans=='F'||ans=='f')
    {
      clrscr();
      cout<<"\n\n\tWell Played. You take home Rs. 2000 ";
      exit(0);
    }

  wrong( que1[i].rtans1,flag);
  }
  kbc();
  qno=4;
  i=(rand()%11)+9;
  cout<<"\n\n\nQuestion 4: "<<que1[i].q;
  cout<<"\n\n\tA."<<que1[i].op1<<"\n\tB."<<que1[i].op2<<"\n\tC."<<que1[i].op3<<"\n\tD."<<que1[i].op4<<"\n\tE. Use a lifeline"<<"\n\tF. Quit the Game";
  cin>>ans;
  if(ans==que1[i].rtans1||ans==que1[i].rtans2)
  {
    money=5000;
    correct(money,qno);
  }
  else
  { if(ans=='E'||ans=='e')
    n= lifelines(life);
    else
    if(ans=='F'||ans=='f')
    {
      clrscr();
      cout<<"\n\n\tWell Played. You take home Rs. 3000 ";
      exit(0);
    }

  wrong( que1[i].rtans1,flag);
  }
  kbc();
  qno=5;
  i=(rand()%14)+12;
  cout<<"\n\n\nQuestion 5: "<<que1[i].q;
  cout<<"\n\n\tA."<<que1[i].op1<<"\n\tB."<<que1[i].op2<<"\n\tC."<<que1[i].op3<<"\n\tD."<<que1[i].op4<<"\n\tE. Use a lifeline"<<"\n\tF. Quit the Game";
  cin>>ans;
  if(ans==que1[i].rtans1||ans==que1[i].rtans2)
  {
    money=10000;
    correct(money,qno);
  }
  else
  { if(ans=='E'||ans=='e')
    n=lifelines(life);
    else
    if(ans=='F'||ans=='f')
    {
      clrscr();
      cout<<"\n\n\tWell Played. You take home Rs. 5000 ";
      exit(0);
    }

  wrong( que1[i].rtans1,flag);
  }
  kbc();
  qno=6;
  i=(rand()%17)+15;
  cout<<"\n\n\nQuestion 6: "<<que1[i].q;
  cout<<"\n\n\tA."<<que1[i].op1<<"\n\tB."<<que1[i].op2<<"\n\tC."<<que1[i].op3<<"\n\tD."<<que1[i].op4<<"\n\tE. Use a lifeline"<<"\n\tF. Quit the Game";
  cin>>ans;
  if(ans==que1[i].rtans1||ans==que1[i].rtans2)
  {
    money=20000;
    correct(money,qno);
  }
  else
  { if(ans=='E'||ans=='e')
    n=lifelines(life);
    else
    if(ans=='F'||ans=='f')
    {
      clrscr();
      cout<<"\n\n\tWell Played. You take home Rs. 10000 ";
      exit(0);
    }

  wrong( que1[i].rtans1,flag);
  }
  kbc();
  qno=7;
  i=(rand()%19)+18;
  cout<<"\n\n\nQuestion 7: "<<que1[i].q;
  cout<<"\n\n\tA."<<que1[i].op1<<"\n\tB."<<que1[i].op2<<"\n\tC."<<que1[i].op3<<"\n\tD."<<que1[i].op4<<"\n\tE. Use a lifeline"<<"\n\tF. Quit the Game";
  cin>>ans;
  if(ans==que1[i].rtans1||ans==que1[i].rtans2)
  {
    money=40000;
    correct(money,qno);
  }
  else
  { if(ans=='E'||ans=='e')
    n=lifelines(life);
    else
    if(ans=='F'||ans=='f')
    {
      clrscr();
      cout<<"\n\n\tWell Played. You take home Rs. 40000 ";
      exit(0);
    }

  wrong( que1[i].rtans1,flag);
  }




}
void start(char x[])
{

  cout<<"\n\n\n\n\n\n\n\t\t -----------------------------------------";
  cout<<"\n\t\t|    WELCOME TO KAUN BANEGA CROREPATI      | ";
  cout<<"\n\t\t -----------------------------------------";
  cout<<"\n\n\n\t\tProgram by Pratyush Garg and Subham Kumar\n\t\t\t\tClass XI B";
  cout<<"\n\nEnter your name to start: ";
  gets(x);
}
char menu(char y[])

{  int choice;
 clrscr();
  cout<<"Welcome "<<y;
  cout<<"\n\n\n\n\n\t\t -----------------------------------------";
  cout<<"\n\t\t|    WELCOME TO KAUN BANEGA CROREPATI     | ";
  cout<<"\n\t\t -----------------------------------------";
  cout<<"\n\n\n\tChoose from the menu: ";
  cout<<"\n\n\t  1.Play the Game";
  cout<<"\n\t  2.Rules of the Game";
  cout<<"\n\t  3.Credits";
  cout<<"\n\t  4.Exit"<<endl;
  cin>>choice;
  return choice;
}
void credits()
{
  clrscr();
  cout<<"\n\n\n\n\t Program made by Subham Kumar and Pratyush Garg in Turbo C++.";
  cout<<"\n\t      We study in Class XI B, Army public School, NOIDA.";
  cout<<"\n\n\t This project was submitted to Shaili Ma'am.";
  cout<<"\n\t We would like to thank our teacher for their constant support";
  getch();
  }
void exit()
{  clrscr();
   cout<<"\n\n\t\t Thanks for Playing. Goodbye ";
}
void main()
{
   clrscr();
   char name[30],choice;
   start(name);
   clrscr();
   x:
   choice=menu(name);
   if(choice==1)
   {
     play(name);
   }
   if(choice==2)
   {
     rules();
     goto x;
   }
   if(choice==3)
  {  credits();
     goto x;
  }
   if(choice==4)
   exit();











   getch();
}





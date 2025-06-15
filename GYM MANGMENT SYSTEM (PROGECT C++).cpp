#include <iostream>
using namespace std;

void payment(float& subcost); // payment function --> call by refrence ( subcost with subscription has the same memory location and value )

bool isLeapYear(int year); // leap year (returning value function) --> to check if year is leap year or not

int daysInMonth(int month , int year); // daysInMonth (returning value function) --> to check the number of days in month entered by subscriber

void addmonths(int & day , int& month , int& year , int monthofsub); // add moths function to check the date and to know the ending date of registration

void printdate(int day , int month , int year); // function to print the ending date of registration --> to organize the date format

int main()
{
    int age;//age of member
    do // using do while to making the program continuously
    {
    cout<<"\t\t\t\t <<< WELCOME TO DIAMOND GYM >>> \n\n"; //starting of the program --> welcoming
    string first_name , last_name;
    cout<<" ENTER YOUR FIRST NAME : "; // first name of member
    cin>>first_name;
    cout<<endl;
    cout<<" ENTER YOUR LAST NAME : "; // last name of member
    cin>>last_name;
    
    for (int i = 1; i <= 10; i++)
    {
     cout<< "_";
    }
     
    cout<<"\n\n ENTER YOUR AGE : ";
    cin>>age;
    while (age < 18)
    {
    cout<<" YOUR AGE IS NOT LEGAL TO BE WITH US "<<endl;
    cout<<" ENTER ANOTHER AGE PLEASE :";
    cin>>age;
    }
    
    cout<<" YOUR AGE IS LEGAL , LET'S COMPLETE THE REGISTRATION  : "<<endl;
    
    for (int i = 1; i <= 10; i++)
    {
     cout<<"_";
    }
    
    cout<<"\n\n WE HAVE MORE THAN ONE TYPE OF SUBSCRIPITION "<<endl; // subscription area (type of subscription with prices)
    cout<<" HERE'S OUR PAKAGES : "<<endl;
    cout<<" <1>  MONTH : 55$ "<<endl;
    cout<<" <3>  MONTH : 120$ "<<endl;
    cout<<" <6>  MONTH : 185$ "<<endl;
    cout<<" <12> MONTH : 260$ "<<endl;
    cout<<endl;
    
    int month;    // month ---> is for subscription period 
    float subscription = 0;  // subscription ---> is for subscription cost  
    
    cout<<" PLEASE SELECTE BETWEEN THE FOLLOWING PAKAGES ---> [ 1 , 3 , 6 , 12 ] : "; 
    cin>>month;
    
    if (month == 1)
    {
        subscription += 55;
    }
    else if (month == 3)
    {
        subscription += 120;
    }
    else if (month == 6)
    {
        subscription += 185;
    }
    else if (month == 12)
    {
        subscription += 260;
    }
    else
    {
    cout<<" THE PACKAGE NUMBER ENTERED IS INCORRECT "<< endl;
    }
    cout<<"\tTHE TOTAL AMOUNT OF YOUR SUBSCRIPITION "<<subscription<<"$"<<endl;
    
    for (int i = 1; i <=10 ; i++)
    {
    cout<<"_";
    }
    // trainer area 
    char choice0; // choice0 ---> to answering (yes / no) question for subscription with a personal trainer
    
    cout<<"\n\n WOULD YOU PREFER TO SUBSCRIBE WITH A PERSONAL TRAINER? [Y / N] : ";
    cout<<endl;
    cout<<" * NOTE * "<<endl<<" IF YOU WANT TO SUBSCRIBE WITH A PERSONAL TRAINER, THE SUBSCRIPTION COST WILL INCREASE BY 60$ FOR EACH PACKAGE :" ;
    cin>>choice0;
    
    if (choice0 == 'Y' || choice0 == 'y')
   {
    cout<<" PLEASE CHOOSE ONE OF OUR PROFESSIONAL AND OUTSTANDING TRAINERS "<<endl;
    cout<<endl;
    cout<<" <A> BODY BUILDING AREA TRAINER : Chris Bumstead."<<endl<<endl;
    cout<<" <B> SWIMMING AREA TRAINERS : Michael Phelps & Yusra Mardini"<<endl<<endl;
    cout<<" <C> CARDIO AREA TRAINERS : Jessica Smith "<<endl<<endl;
    cout<<" <D> BOXING AREA TRAINERS : Habib Nurmagomedov "<<endl<<endl;
    cout<<" <E> LIFTING AREA TRAINERS : Eddie Hall "<<endl<<endl;

    char choice1; // choice1 ---> to choosing a trainers
    cout<<" PLEASE CHOOSE ONE OF THEM USING LETTERS LIKE [A/B/C/D/E] :";
    cin>>choice1;
    char choice2; //choice2 ---> to choosing  the gender of swimming area trainer 
    
    switch (choice1)
   {
    case 'A':
    case 'a': cout<<" Chris Bumstead FROM  BUILDING AREA WILL BE WHITH YOU "<<endl;
    break;

    case 'B':
    case 'b':
    cout<<" WOULD YOU PREFER A FEMALE OR MALE SWIMMING TRAINER (WHERE (F) REPRESENT (FEMALES) & (M) REPRESENT (MALES)) : ";
    cin>>choice2; 
    if (choice2 == 'f' || choice2 == 'F')
   {
    cout<<" Yusra Mardini WILL BE WITH YOU \n "<<endl;
   }
   else if (choice2 == 'm' || choice2 == 'M')
   cout<<" Michael Phelps WILL BE WITH YOU \n "<<endl;
   break;
   
   case 'C':
   case 'c': 
   cout<<" Jessica Smith FROM CARDIO AREA WILL BE WITH YOU "<<endl;
   break;
   case 'D':
   case 'd': 
   cout<<" Habib Nurmagomedov FROM BOXING AREA WILL BE WITH YOU "<<endl;
   break;
   case 'E':
   case 'e':
   cout<<" Eddie Hall FROM  LIFTING  AREA WILL BE WHITH YOU "<<endl;
   break;
   default: 
   cout<<" The PACKAGE NUMBER ENTERED IS INCORRECT "<<endl;
   }
   subscription += 60;
   
   cout<<"\tTHE TOTAL AMOUNT OF YOUR SUBSCRIPITION "<<subscription<<"$"<<endl;  
   }
   
   for (int i = 1; i <= 10; i++)
    {
   cout<<"_";
    }
    
    // meals area 
   char choice3; // choice3 ---> to answering (yes / no) question for  a meals subscription 
   cout<<"\n\n WOULD YOU LIKE TO ADD MEALS TO YOUR SUBSCRIBTION ? [Y/N] :";
   cin>>choice3;
   switch (choice3)
    {
    case 'Y':
    case 'y':
    cout<<"\tTHIS OUR MEALS SUBSCRIBTION IN MONTHS :"<<endl;
    cout<<endl; 
    cout<<" <1> MEALS PER DAY : 30$ "<<endl<<endl; 
    cout<<" <2> MEALS PER DAY : 50$ "<<endl<<endl;
    cout<<" <3> MEALS PER DAY : 75$ "<<endl<<endl;
    cout<<endl;
    
    int meals; // meals ---> for types of meals
    
    cout<<" CHOOSE ONE OF OUR MEALS PAKAGES [ 1 , 2 , 3 ] : ";
    cin>>meals;
    
    if (meals == 1)
    {
    subscription += 30;
    cout<<" YOU ARE CHOOSING NORMAL PAKAGE MEALS WITH AMOUNT 30$ "<<endl<<endl;
    cout<<"\tTHE TOTAL AMOUNT OF YOUR SUBSCRIPITION "<<"$"<<subscription<<endl;       
    }
    else if (meals == 2)
    {
    subscription += 50;
    cout<<" YOU ARE CHOOSING CUTTING PAKAGE MEALS WITH AMOUNT 50$ "<<endl;
    cout<<endl;
    cout<<" HERE OUR CUTTING MEALS : "<<endl<<endl;
    cout<<" <1> EGG WHITES WITH AVOCADO ON TOAST "<<endl<<endl;
    cout<<" <2> TUNA SALAD "<<endl<<endl;
    cout<<" <3> GRILLED CHICKEN WITH QUINOA AND VEGETABLES "<<endl<<endl;
    cout<<"\tTHE TOTAL AMOUNT OF YOUR SUBSCRIPITION "<<"$"<<subscription<< endl;   
    }
    else if (meals == 3)
    {
    subscription += 75;
    cout<<" YOU ARE CHOOSING BULKING PAKAGE MEALS WITH AMOUNT 75$ "<<endl;
    cout<<endl;
    cout<<" HERE OUR BULKING MEALS : "<<endl<<endl;
    cout<<" <1> OATMEAL WITH FRUITS AND PEANUT BUTTER "<<endl<<endl;
    cout<<" <2> STEAK WITH SWEET POTATOE "<<endl;
    cout<<" <3> GRILLED CHICKEN WITH RICE AND VEGETABLES "<<endl<<endl;
   cout<<"\tTHE TOTAL AMOUNT OF YOUR SUBSCRIPITION "<<subscription<<"$"<<endl;   
   }
   break;
   case 'N':
   case 'n': 
   cout<<"\tTHE TOTAL AMOUNT OF YOUR SUBSCRIPITION "<<subscription<<"$"<<endl;   
   break;
    }
    
   for (int i = 1; i <= 10; i++)
    {
   cout<<"_";
    }

   payment(subscription); // payment function 
   cout<<endl;
   
   for (int i = 1; i <= 10; i++)
    {
    cout<< "_";
    }

   // calorise area
   
   char gender; // gender ---> to choosing the gender of member to calculate the needs and burns calorise 
   
   float height , weight , calorise; //  needs these three variables to calculating calorise body needs
   
   int choise4; // choise4 ---> to choosing the METABOLIC EQUIVALENT OF TASK (MET)
   
   float minutes , calorise_burns; // nedds two these variables to calculating calorise body burns
   
   cout<<"\n\nNOW WE NEED TO CLACULATE YOUR BODY'S CALORIE REQUIRMENTS & THE CALORISE YOUR BODY BURNS  :"<<endl;
   cout<<" CAN YOU PLEASE CHOOSE YOUR GENDER (WHERE (F) REPRESENT (FEMALES) & (M) REPRESENT (MALES)) : ";
   cin >> gender;
   
   if (gender == 'F' || gender == 'f')  // if gender is a female
   {
   cout<<" CAN YOU PLEASE ENTER YOUR HEIGHT IN (cm) :";
   cin>>height;
   cout<<" CAN YOU PLEASE ENTER YOUR WEIGHT IN (kg) :";
   cin>>weight;
   calorise = (10 * weight) + (6.25 * height) - (5 * age) - 161;  // equation to calculating the calorise the body of females needs 
   cout<<" THE CALORISE YOUR BODY'S NEED IS : "<<calorise<<endl;
   cout<<endl;
   
   cout<<" TO CALCULATE THE CALORISE YOUR BODY BURNS : "<<endl;
   cout<<" CAN YOU PLEASE ENTER THE NUMBER OF MINUTES YOU HAVE BEEN ACTIVE :";
   cin>>minutes;
   cout<<" CAN YOU PLEASE CHOOSE YOUR METABOLIC EQUIVALENT OF TASK (MET) FROM THE FOLLWING LIST :"<<endl;
   cout<<" <1> STRENGTH TRAINING ( 6.5 MET ) "<<endl;
   cout<<" <2> CARDIO EXERCISES ( 7 MET ) "<<endl;
   cout<<" <3> LIGHT WEIGHT EXERCISES ( 7.5 MET ) "<<endl;
   cin>>choise4;
   
   switch (choise4)
   {
   case 1:
   calorise_burns = (6.5 * weight) * (minutes / 60);
   cout<<" THE CALORISE YOUR BODY'S BURNS IS : "<<calorise_burns<<endl;
   break;
   case 2:
   calorise_burns = (7 * weight) * (minutes / 60);
   cout<<" THE CALORISE YOUR BODY'S BURNS IS : "<<calorise_burns<<endl;  // these three equations to calculating the body burns calorise depends on avg of (MET)
   break;
   case 3:
   calorise_burns = (7.5 * weight) * (minutes / 60);
   cout<<" THE CALORISE YOUR BODY'S BURNS IS : "<<calorise_burns<<endl;
   break;
   }

   }
   else if (gender == 'M' || gender == 'm') // if gender is male
   {
   cout<<" CAN YOU PLEASE ENTER YOUR HEIGHT IN (cm) :";
   cin>>height;
   cout<<" CAN YOU PLEASE ENTER YOUR WEIGHT IN (kg) :";
   cin>>weight;
   calorise = (10 * weight) + (6.25 * height) - (5 * age) + 5; // equation to calculating the calorise the body of males needs 
   cout<<" THE CALORISE YOUR BODY'S NEED IS : "<<calorise<<" kcal"<<endl;
   cout<<endl;
   
   cout<<" TO CALCULATE THE CALORISE YOUR BODY BURNS : "<<endl;
   cout<<" CAN YOU PLEASE ENTER THE NUMBER OF MINUTES YOU HAVE BEEN ACTIVE :";
   cin>>minutes;
   cout<<" CAN YOU PLEASE CHOOSE YOUR METABOLIC EQUIVALENT OF TASK (MET) FROM THE FOLLWING LIST :"<<endl;
   cout<<" <1> STRENGTH TRAINING WITH AVERAGE ( 6.5 MET ) "<<endl;
   cout<<" <2> CARDIO EXERCISES AVERAGE ( 7 MET ) "<<endl;
   cout<<" <3> LIGHT WEIGHT EXERCISES AVERAGE ( 7.5 MET ) "<<endl;
   cin>>choise4;
   
   switch (choise4)
   {
   case 1:
   calorise_burns = (6.5 * weight) * (minutes / 60);
   cout<<" THE CALORISE YOUR BODY'S BURNS IS : "<<calorise_burns<<endl;
   break;
   case 2:
   calorise_burns = (7 * weight) * (minutes / 60);
   cout << " THE CALORISE YOUR BODY'S BURNS IS : "<<calorise_burns<<endl;
   break;
   case 3:
   calorise_burns = (7.5 * weight) * (minutes / 60);
   cout<<" THE CALORISE YOUR BODY'S BURNS IS : "<<calorise_burns<<endl;
   break;
    }
    
    }
    
   for (int i = 1; i <= 10; i++)
    {
    cout<<"_";
    }
           // Table area ---> for organizing subscriber information
    cout<<endl;
    cout<<endl;    
    cout<<""<< "THE MEMBER < " <<first_name<<" "<<last_name<<" > INFORMATION : "<<endl;
    cout<<" THE CALORISE YOUR BODY'S NEED IS : "<<calorise<<" kcal"<<endl;
    cout<<" THE CALORISE YOUR BODY'S BURNS IS : "<<calorise_burns<<endl;
    cout<<endl;
    cout<<"|\t\t|"<<"\t\t\t|"<<"\t|"<<"\t\t |"<< "\t|"<<"\t\t   |"<<endl;
    cout<<"|\t\t|"<<"\t\t\t|"<<"\t|"<<"\t\t |"<< "\t|"<<"\t\t   |"<<endl;
    cout<<"| AGE -> {"<<age<<"}\t|"<<"HOW MANY MONTHS -> {"<<month<<"}|        |"<<" P.T [Y,N] ->{"<<choice0<<"}|\t|"<<" MEALS [Y,N] ->{"<<choice3<<"}"<<"|"<<endl;
    cout<<"|\t\t|"<<"\t\t\t|"<<"\t|"<<"\t\t |"<<"\t|"<<"\t\t   |"<<endl;
    cout<<"|\t\t|"<<"\t\t\t|"<<"\t|"<<"\t\t |"<<"\t|"<<"\t\t   |"<<endl;
   
   for (int i = 1; i <= 10; i++)
    {
   cout<<"_";
    }
    cout<<endl; 
    cout<<endl; 
    cout<<endl;
    cout<<"THIS IS YOUR EXERCISE PLAN."<<endl; 
   cout<<endl; 
    string week_plan[5][3] = {                        //week plan ----> week plan for the members in DIAMOND GYM 
        {"Push-ups", "Sit-ups", "Squats"},   // Monday
        {"Lunges", "Jumping Jacks", "Plank"}, // Tuesday
        {"Burpees", "Plank", "Push-ups"},    // Wednesday
        {"Deadlifts", "Pull-ups", "Rows"},   // Thursday
        {"Push-ups", "Squats", "Lunges"}     // Saturday
    };

   
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Saturday"};       //the week days 
    int num_days = sizeof(days) / sizeof(days[0]);       //  number of days in week 
    cout<<"YOUR REST DAY IS "<<endl<<"SUNDAY AND FRIDAY"<<endl;  
    for (int i = 0; i < num_days; i++) {
        cout << "Exercise for the day " << days[i] << ":" << endl;
        for (int j = 0; j < 3; j++) {
            cout << "  - " << week_plan[i][j] << endl;
        }
        cout << endl;
    }

   

   cout<<endl;
   int day , month1 , year; // these three variables need for the date of registration in addmonths &  daysInMonth & isLeapYear functions 
   
   cout<<" \n\n PLEASE ENTER THE DATA IN [ DAY / MONTH / YEAR ]"<<endl; 
   cin>>day>>month1>>year;
   
   addmonths( day , month1 , year , month ); // aad months function 
   cout<<endl; 
   cout<<" ** YOUR SUBSCRIBTION ENDING IN ";
   printdate( day , month1 , year ); // print the ending date registration function 
   cout<<endl;                                                                 
   cout<<endl; 

   for (int i = 1; i <= 25; i++)
    {
   cout<<"=====";
    }  
    
   cout<<endl;
   cout<<endl;
   cout<<endl; 
   }
   while(age>=18); // these while continued to do above
   
   return 0;
   }
   
void payment( float& subcost ) 
{
    
    float remainingcost = subcost; // remainingcost --> memory location has the same value of subcost 
    float amountPaid = 0;  // amountPaid --> memory location with intial value zero  
    
    cout<<"\n\n TO ACTIVATE YOUR SUBSCRIBTION , YOU NEED TO PAY THE TOTAL AMOUNT OF YOUR SUBSCRIBTION "<<remainingcost<<"$"<<endl;
    cout<<" * NOTE * THE FULL SUBSCRIBTION FEE WILL BE DEDCTED FROM THE ENTERED AOMOUNT : ";
    cin>>amountPaid;
    
    while (amountPaid < remainingcost)
    {
        remainingcost -= amountPaid; // An equation to know how much remains from the paid amount
        cout<<" PLEASE COMPLETE THE REMAiNING PAYMENTS , YOU STILL HAVE OUTSTANDING PAYMENTS AMOUNTING TO :"<<remainingcost<<"$"<<endl;
        cin>>amountPaid;
    } 
    
    if (amountPaid > remainingcost)
    {
     amountPaid = amountPaid - remainingcost ; // by equation, if a member pays an amount exceeding the required value, the excess amount will be refunded
        cout<<" YOU STILL HAVE AMOUNT REMAiNING = "<<amountPaid<<"$"<<endl;
        cout<<" THE REMAINING AMOUNT WILL BE REFUNDED TO YOUR ACCOUNT."<<endl;
    }
    
    cout<<"\tPAYMENTS COMPLETED SUCCESSFFULLY "<<endl;
    cout<<"\tYOUR SUBSCRIBTION HAS BEEN SUCCESSFFULLY ACTIVATED"<<endl;
        
    }
    
bool isLeapYear( int year )   
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0); // by equation --> testing the year entered by subscriber is leap or not 
}

int daysInMonth( int month , int year )  
{
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28; // calling isLeapYear function if the days in the enterd month are 28 or 29 Which is February month
        default:
            return 0;
    }
}

void addmonths(int& day , int& month , int& year , int monthofsub ) 
{
    
/*call by refrence function { day with day , month with month1 , year with year} entered by subscriber in line 338 in int main function
and monthofsub taking the same value of month*/

 month += monthofsub; // equation to add the month of registration to month of subscription                                                
 while(month > 12)
 {                                                              
  month-=12;
  year++; 
 }
 
 int maxday = daysInMonth( month , year ); // max day its a variable has the result of days in month function to check days
 if(day > maxday)
 {
  day = maxday;
 }                                                              
}

void printdate(int day , int month , int year) 
{ 
  if(day < 10)                                 
  {
  cout<<"0";
  }
  cout<<day<<"/";
  if(month < 10 )
  {                                         
   cout<<"0"; 
  }
 cout<<month<<"/";
 cout<<year<<".";
}
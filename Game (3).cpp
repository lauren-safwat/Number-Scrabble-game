#include <iostream>
using namespace std;
int main()
{
char List[]={'1','2','3','4','5','6','7','8','9','\0'};
int p1;  int p2;
int sum1=0;  int sum2=0;
int counter1=0;  int counter2=0;  int End=0;
int first[6]={0,0,0,0,0,0};
int second[5]={0,0,0,0,0};
char sub[]={'-','\0'};
int length;
int length1;
int length2;
int product;
bool Fs=false;
length= sizeof(List)/sizeof(List[0]);

cout <<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t Welcome to Number Scrabble Game \n\n" << "How to play? \n" << "\t\t This game is played with a list of numbers between 1 and 9.  Each player takes turns picking a number from the list. Once a number has been picked, it cannot be picked again. If a player has picked three numbers that add up to 15, that player wins the game. However, if all the numbers are used and no player gets exactly 15, the game is a draw.";

for(int i=0 ; i<5 ; i++){
cout<<"\nFirst Player Turn:\n";
cout << "{";
for (int  a=0 ; a<length ; a++)
cout<< List[a] << ",";
cout<< "}";
cout<<"Enter a number from the list: ";
cin>>p1;
while(p1<=0 || p1>9 || List[p1-1]==sub[0]){
cout<<"INVALID NUMBER,enter a new one from the list: ";
cin>>p1;}
length1=sizeof(first)/sizeof(first[0]);
first[counter1]=p1;
List[p1-1]=sub[0];
cout<<"Player 1: your list is: ";
cout << "{";
for(int i=0 ; i<counter1+1 ; i++)
    cout<< first[i] << ",";
cout<< "}";
counter1++;
if (counter1>=3){
for(int x=0 ; x<length1 ; x++){
for(int y=x+1 ; y<length1 ; y++){
for(int z=y+1 ; z<length1 ; z++){
if (first[x]*first[y]*first[z]==0)
break;
sum1=first[x]+first[y]+first[z];
if (sum1==15){cout<<"\n CONGRATULATIONS *_*, Player 1 Won!";
Fs=true;
if (Fs==true)
return 0;
}}}}}
End++;
if (End==5){
cout<<"\nThe game is a draw, Play again!";
return 0;}
cout<<"\nSecond Player Turn:\n";
cout << "{";
for (int  a=0 ; a<length ; a++)
cout<< List[a] << ",";
cout<< "}";
cout<<"Enter a number from the list: ";
cin>>p2;
while(p2<=0 || p2>9 || List[p2-1]==sub[0]){
cout<<"INVALID NUMBER, enter a new one from the list: ";
cin>>p2;}
length2=sizeof(second)/sizeof(second[0]);
second[counter2]=p2;
List[p2-1]=sub[0];
cout<<"Player 2: your list is: ";
cout << "{";
for(int i=0 ; i<counter2+1 ; i++)
    cout<< second[i] << ",";
cout<< "}";
counter2++;
if(counter2>=3){
for(int x=0 ; x<length2 ; x++){
for(int y=x+1 ; y<length ; y++){
for(int z=y+1 ; z<length2 ; z++){
if (second[x]*second[y]*second[z]==0)
break;
sum2=second[x]+second[y]+second[z];
if (sum2==15){
cout<< "\n CONGRATULATIONS *_*, Player 2 Won!";
Fs=true;}
if(Fs==true)
return 0;}
}
}
}
}}
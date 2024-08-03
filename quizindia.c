#include<stdio.h>
int main()
{
int ans1,ans2,ans3,ans4,ans5,ans6,i;
int point1=0;
printf("WELCOME !");
printf("\n\nEnter 7 to start");
printf("\nEnter 0 to quit\n");
scanf("%d",&i);
if(i==7)
printf("The game has started");
else if(i==0){
printf("The game has stopped");
}
else{
printf("INVALID");
}
if(i==7){
printf("\nWho is the Prime minister of India?");
printf("\n1)Ravindranath Tagore");
printf("\n2)Narendhra Modi");
printf("\n3)Rahul Gandhi");
printf("\n4)Ambani");
printf("\nEnter your answer:");
scanf("%d",&ans1);
if(ans1==2)
{
point1++;
printf("Your answer is right!!");
}
else
{
printf("Wrong answer");
}
printf("\n\n\nWhat is the speciality of August 15?");
printf("\n1)New year");
printf("\n2)Republic day");
printf("\n3)World healthcare day");
printf("\n4)Independence day");
printf("\nEnter your answer:");
scanf("%d",&ans2);
if(ans2==4)
{
point1++;
printf("Your answer is right!!");
}
else
{
printf("Wrong answer");
}
printf("\n\n\nWho is the Vice President of India?");
printf("\n1)Jagdeep Dankar");
printf("\n2)Draupathi murmu");
printf("\n3)Rahul Gandhi");
printf("\n4)Mahua Moithra");
printf("\nEnter your answer:");
scanf("%d",&ans3);
if(ans3==1)
{
point1++;
printf("\nYour answer is right!!");
}
else
{
printf("\nWrong answer");
}
printf("\n\n\nWho is the father of the nation?");
printf("\nRavindranath Tagore");
printf("\nSardhar vallabhai Patel");
printf("\nMahatma Gandhi");
printf("\nRaja ram mohan roy");
printf("\nEnter your answer\n");
scanf("%d",&ans4);
if(ans4==3)
{
point1++;
printf("Your answer is right!!");
}
else
printf("\nWrong answer");
printf("\n\n\nIn year year India was got Independence?");
printf("\n1987");
printf("\n1947");
printf("\n1969");
printf("\n1938");
printf("\nEnter your answer");
scanf("%d",&ans5);
if(ans5==2)
{
point1++;
printf("\nYour answer is right!!");
}
else
printf("\nWrong answer");
printf("\n\n\nWho is the Finance minister of India?");
printf("\nNirmala Seetharam");
printf("\nSonia Gandhi");
printf("\nArvind kejriwal");
printf("\nAmbani");
printf("\nEnter your answer\n");
scanf("%d",&ans6);
if(ans6==1)
{
point1++;
printf("Your answer is right!!");
}
else
printf("\nWrong answer");
printf("\nQuiz has ended");
printf("\nYour total score:%d out of 6",point1);
printf("\nThank  you!");
return 0;
}
}

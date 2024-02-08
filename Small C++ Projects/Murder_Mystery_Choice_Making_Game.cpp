#include <iostream>
#include <string>
using namespace std;

//Theme: Murder Mystery

//Beginning: You are at a party and all of a sudden you find a dead body

//Three Endings: You find the killer, The Killer gets away but you're alive, The Killer gets away but you're dead.


//Story: You arrive at the party (given decision to greet people/shake hands or not), you stay there for a while and have a couple drinks, after a while you need to use the bathrooom, you get in the bathroom and there is a horrible smell (given decision to get curious and check behind shower curtains or not), if you do not then you will never find the dead body behind the shower curtains and the killer gets away, if you do get curious and check, you will find dead body and depending on certain decisions you will either catch the killer or die and the killer gets away or live and the killer gets away.


int main(){

int intro, branch1, branch2, branch3, branch2_twig1;

intro=branch1=branch2=branch3=branch2_twig1=0;

string end1="*************\nYou Found the Killer!\n*************\n";
string end2="*************\nYou're alive, but the Killer got away!\n*************\n";
string end3="*************\nYou're dead! And the Killer got away!\n*************\n";

cout << "-==================================================================-\n";

cout << "This is a text story based purely on your decisions, what you choose will decide how the story goes.\n\nEnter the number corresponding with the choice to make your decision when prompted.\n";

cout << "-==================================================================-\n";

do{
cout << "\n\nYou arrive at a House Party, you walk in and see everyone is having a nice time, do you greet the people by the door or just walk in?\n\n\n"; //intro
cout << "1) Say Hello\n\n";
cout << "2) Continue walking in\n\n";

cin >> intro;

if(intro!=1 && intro!=2)
{
    cout << "\n\n*That is not a choice! Pick a number within the selection of choices!*\n";
    cin.clear();
    cin.ignore(1000000,'\n');
}
}while(intro!=1 && intro!=2);

switch(intro){

  case 1:
    cout << "\nYou say Hello and end up having some small talk with the people by the door. After a bit of chatting you begin walking in and start looking for an area to chill at.\n\n";
  break;
  case 2:
    cout << "\nYou continue walking in and you start looking for an area to chill at.\n\n";
  break;
}
do{
cout << "\nYou finally find an area you're comfortable with and sit down. You have a couple of drinks and talk to the people in that area. An hour later you have the urge to go pee. What do you do?\n\n";
cout << "1) Go use the bathroom upstairs\n\n";
cout << "2) Wait until you get home\n\n";

cin >> branch1;

if(branch1!=1 && branch1!=2)
{
  cout << "\n\n*That is not a choice! Pick a number within the selection of choices!*\n";
  cin.clear();
  cin.ignore(1000000,'\n');
}
}while(branch1!=1 && branch1!=2);

switch(branch1){

  case 1:
    cout << "\nYou make your way upstairs, go to the bathroom, knock and find out it's empty. You go inside the bathroom and sit on the toilet. But then you realize a foul smell";
  break;
  case 2:
    cout << "\nYou decide to go home early because you need to use the bathroom. Once you get home you take a shower and get ready for bed. You wake up the next morning and turn on the news, your jaw drops due to what you hear and you begin to feel glad that you left early from the party last night.\n\n";
    cout << end2;
    return 0;
  break;
}
do{
cout << "\nYour instincts tell you to check behind the shower curtain, so that's exactly what you do. Only to find a dead body laying in the tub! So you...\n\n";
cout << "1) Leave the party immediately without saying anything\n\n";
cout << "2) Tell everyone at the party\n\n";
cout << "3) Call the cops\n\n";

cin >> branch2;

if(branch2!=1 && branch2!=2 && branch2!=3)
{
  cout << "\n\n*That is not a choice! Pick a number within the selection of choices!*\n";
  cin.clear();
  cin.ignore(1000000,'\n');
}
}while(branch2!=1 && branch2!=2 && branch2!=3);

switch(branch2){
  case 1:
    cout << "\nYou leave the party and call the cops, after a few minutes they finally arrive. They shut down the party and open a case to find the killer.\n\n";
    cout << end2;
    return 0;
  break;
  case 2:
    cout << "\nYou go back downstairs and have the people at the party turn the music off. You announce the dead body in the bathroom, and that nobody can leave the house until the killer is found.\n\n";
  break;
  case 3:
    cout << "\nYou take your phone out your pocket and dial 911, the cops immediately pick up. In the middle of you talking to the cops a man comes in the bathroom but you dont hear anything.\n\n";
    cout << end3;
    return 0;
  break;
}
do{
cout << "\nYou and a few people try to figure out who was the last person in the bathroom before me. So we go around asking people certain questions to get the answers we need and make sure that nobody leaves. After a while of asking questions you are unsure if you should continue asking questions or if you have a good idea of who the suspect may be.\n\n";
cout << "1) Go around and ask more questions.\n\n";
cout << "2) You know who the suspect is.\n\n";

cin >> branch2_twig1;

if(branch2_twig1!=1 && branch2_twig1!=2)
{
  cout << "\n\n*That is not a choice! Pick a number within the selection of choices!*\n";
  cin.clear();
  cin.ignore(1000000,'\n');
}
}while(branch2_twig1!=1 && branch2_twig1!=2);

switch(branch2_twig1){
  case 1:
    cout << "\nYou go and ask a couple more questions and now you're more sure of who the suspect is.\n\n";
  break;
  case 2:
    cout << "\nYou call the cops and have the suspect arrested. A few weeks later you find out the the suspect which you chose was actually not the killer...\n\n";
    cout << end2;
    return 0;
  break;
}
do{
cout << "\nNow that you're completely sure, who is the suspect?\n\n";

cout << "1) Andrew (Was last seen near the stairs coming from the bathroom before I went in, the people who seen him say they are not completely sure if he was the last one in the bathroom)\n\n";
cout << "2) Susan (Was the first person who tried to leave as soon as the dead body was announced to the public)\n\n";
cout << "3) Danny (Seemed to be the most nervous and hesitant when answering questions)\n\n";

cin >> branch3;

if(branch3!=1 && branch3!=2 && branch3!=3)
{
  cout << "\n\n*That is not a choice! Pick a number within the selection of choices!*\n";
  cin.clear();
  cin.ignore(1000000,'\n');
}

}while(branch3!=1 && branch3!=2 && branch3!=3);

switch(branch3){
  case 1:
    cout << "\nYou think the Killer is Andrew so you have a few people keep a good eye on him while you calls the cops. He hands over his weapons and admits he was the Killer.\n\n";
    cout << end1;
  break;
  case 2:
    cout << "\nYou tell everyone that you think Susan is the killer and she begins to have an argument with you. Then the real killer pulls out a gun and shoots both of you and runs out the place.\n\n";
    cout << end3;
  break;
  case 3:
    cout << "\nYou think the Killer is Danny so you have a few people keep a good eye on him while you calls the cops. The cops arrive and arrest Danny, and take him to jail. But a few weeks later you hear that Danny turns out to be innocent and that someone else was the Killer.\n\n";
    cout << end2;
  break;
}
return 0;
}
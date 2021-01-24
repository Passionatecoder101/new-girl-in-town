#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main() {
char name[50];
	cout << "What is your name?" << endl;
	cin.getline(name, 50);
	cout << "It's so good to finally meet you " << name << " ! Your cousin Jenny has told me a lot about you, I'm Jamie!" << endl;
	cout << "here, let me show you around town, unless you still need to unpack all of your stuff" ;
	cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
	system("cls");
	int choiceOne_Path;
	cout << "# What would you like to do?" << endl;
	cout << "\t >> Enter '1' to agree to a tour?" << endl;
	cout << "\t >> Enter '2' to unpack all of your stuff first?" << endl;
	retry:
	cout << "\nEnter your choice: ";
	cin >> choiceOne_Path;
	if(choiceOne_Path == 1) //if the player chose to go on the tour first
	{
	    system("cls");
		cout << "\n!!!----------------------Chapter One: New Girl in Town----------------------!!!" << endl;
    cout <<"\n You: I suppose a tour couldn't hurt, since I don't know any places around here" << endl;
    cout <<"\n Jamie: that's great! I know all the best places to go in Maplewood so don't you\n worry about a thing, " << name << "!" << endl;
	cout <<"\n Jenny: sorry i'm late. since we are already doing the tour, lets get going" << endl;
	}
	else if(choiceOne_Path == 2) //if the player chose to unpack their stuff and then go on the tour
	{
	    system("cls");
		cout << "\n!!!----------------------Chapter One: New Girl in Town----------------------!!!" << endl;
    cout <<"\n You: I should probably unpack my stuff first, that way it's out of the way." << endl;
    cout <<"\n Jamie: That makes sense, I'll wait for you outside with Jenny okay?" << endl;
    cout <<"\n You: Okay, I will meet you outside once I am done since I only have a few more things to pack." << endl;
    cout <<"\n You quickly unpack your things and put them on the various shelves in your room before heading outside and see Jenny\n standing there with Jamie" << endl;
	cout <<"\n Jenny: sorry i was late. since we are doing the tour, lets get going" << endl;
	}
	else
    {
        cout << "\n that isn't an option! press '1' or '2', nothing else!" << endl;
    goto retry;
    }
cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
system("cls");
	int tourPath;
	cout <<"\n You: so where are we starting on this tour?" << endl;
	cout <<"\n Jamie: Well, I thought maybe we could go to the mall first?" << endl;
	cout <<"\n Jenny: No way, she should see the cool roller rink they just finished building! It's super popular right now!" << endl;
	cout <<"\n Jamie: Okay, we will have " << name << " decide where we go first!" << endl;
	cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
	system("cls");
	int choiceTwo_Path;
	cout << "# What would you like to do?" << endl;
	cout << "\t >> Enter '1' to go to the the mall" << endl;
	cout << "\t >> Enter '2' to go to the roller rink" << endl;
	retry2:
	cout << "\nEnter your choice: ";
	cin >> choiceOne_Path;
	if(choiceOne_Path == 1) //if the player chose to go on the mall first
	{
	    system("cls");
		cout << "\n!!!----------------------You chose the mall----------------------!!!" << endl;
    cout <<"\n You: I think we should go to the mall first, it could be fun!" << endl;
    cout <<"\n Jamie: Good Idea, " << name << ", then we can go to the roller rink afterwards!" << endl;
    cout <<"\n Jenny: Okay, I mean at least we get to go right?" << endl;
    cout <<"\n Jenny seems pretty okay with the decision as you all head to the mall" << endl;
    cout <<"\n To be continued in Chapter 2." << endl;
	}
	else if(choiceOne_Path == 2) //if the player chose to go to the roller rink first
	{
	    system("cls");
		cout << "\n!!!----------------------You chose the roller rink----------------------!!!" << endl;
    cout <<"\n You: I think we should go to the roller rink first, after all it is new and I have never gone rollerskating before" << endl;
	cout <<"\n Jenny: Good Idea, " << name << ", then we can go to the mall afterwards!" << endl;
	cout <<"\n Jamie: But I wanted to go to the mall first!" << endl;
	cout <<"\n Jenny: Jamie, it was your idea to let " << name << " pick where we went to first, so stop whining." << endl;
	cout <<"\n Jamie continued to whine as you and Jenny ignored the whining as much as you could." << endl;
	cout <<"\n To be continued in Chapter 2." << endl;
	}
	else
    {
        cout << "\n that isn't an option! press '1' or '2', nothing else!" << endl;
    goto retry2;
    }
cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
}

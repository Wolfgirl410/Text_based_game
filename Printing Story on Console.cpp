#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	cout<<"On a peaceful night,the tiny,icelandic village whispered to the dancing trees...\n\nYou, um...what is your name...?";
	cout<<"\n\nAh, that is a powerful name...A name from a Myth...";
	cout<<"\n\nOh...You are him...and you have come to save us!";
	cout<<"\n\nWhy do I know you? Well a great prophecy stated that you would save us from this demon terrorizing our weathers and ruining our crops...Dnmairy";
	cout<<"\n\nStill don't believe me? Come, we must get to the Scrolls of History!\n\n";

	int playerHealth;
	int livesCount;
	char PlayerId[25];
	int winPercentage;
	bool playerWon;
	int typePlayer;

	cout<<"Enter your name here: ";
	cin>>PlayerId;

	cout<<"Enter number of Lives you would like to start with: ";
	cin>>livesCount;
	
	cout<<"Enter your health that you would like to start with: ";
	cin>>playerHealth;
	return 0;
}

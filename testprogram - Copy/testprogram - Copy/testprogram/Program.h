#pragma once
#include <list>
#include <vector>
#include <stack>
#include <string>
#include <queue>
#include <iostream>
#include <string.h>
#include"User.h"
#include "Message.h"
using namespace std;
class Program
{
public:
	vector<User>users;

	list<Message> sentmessages;
	stack<int> reciepientIDs;
	//list<Message> favourites;
	void readdata();
	Program();
	~Program();
	void run();
	void login();
	void reg();
	int random();
	int chooseid();
	void programcontent();
	void addtoyourcontact(User n);
	void search();
	bool alreadyadded(User n);

	/// shotar functions
	void sendmessage();
	void undosentmessage();
	void searchaboutcontact();
	void viewallmyrecievedmessages();
	void viewmessagesihavesent();
	void viewallcontacts();
	void addtofavourites();
	void viewfavourites();
	void popoldestFavourite();
};
#include <iostream> 
#include <bits/stdc++.h>
 
using namespace std;
 
void resetPoints(int& leftPoints, int& rightPoints, int& leftGames, int& rightGames, int& server, int& receiver) {
	if(leftPoints > rightPoints) { // left won
		leftGames++;
		server = 0;
		receiver = 1;
	}
	else {
		rightGames++;
		server = 1;
		receiver = 0;
	}
	leftPoints = 0;
	rightPoints = 0;
 
	return;
}
 
bool gameHasFinished(int leftPoints, int rightPoints) {
	// first to get to 10 pts or:
	// if diff > 1 and greater >= 5
	if(leftPoints >= 10 || rightPoints >= 10 ||
		 (abs(leftPoints - rightPoints) >= 2 && max(leftPoints, rightPoints) >= 5))
		 return true;
	
	return false;
}
 
bool matchHasFinished(int leftGames, int rightGames) {
	if (max(leftGames, rightGames) >= 2)
		return true;
	return false;
}
 
void printFinished(int leftGames, int rightGames, int leftPoints, int rightPoints, int server) {
	if(leftGames > rightGames) {
		printf("%d (winner) - %d\n", leftGames, rightGames);
	}
	else if (rightGames > leftGames) {
		printf("%d - %d (winner)\n", leftGames, rightGames);
	}
	return;
}
 
void printOngoing( int leftGames, int rightGames, int leftPoints, int rightPoints, int server) {
	if(server == 1) { // right server
		printf("%d (%d) - %d (%d*)\n", leftGames, leftPoints, rightGames, rightPoints);
	}
	else { // left server
		printf("%d (%d*) - %d (%d)\n", leftGames, leftPoints, rightGames, rightPoints);
	}
}
 
int main() 
{ 
	string events;
 
	cin >> events;
 
	int noEvents = events.size();
	
	bool hasFinished = false;
 
	int leftPoints  = 0;
	int rightPoints = 0;
	// lets call left 0 and right 1
	int server = 0; // left starts serving
	int receiver = 1;
	int rightGames = 0, leftGames = 0;
	for (int i = 0; i < noEvents; i++)
	{
		
		while(events[i] != 'Q' && i < noEvents) {
			if(events[i] == 'S') {
				if(server == 0) { // left won
					leftPoints++;
					server = 0;
					receiver = 1;
					// check if games has finished
					if(gameHasFinished(leftPoints, rightPoints))
						resetPoints(leftPoints, rightPoints, leftGames, rightGames, server, receiver);
					
				}
				else { // right won
					rightPoints++;
					server = 1;
					receiver = 0;
					// check if games has finished
					if(gameHasFinished(leftPoints, rightPoints))
						resetPoints(leftPoints, rightPoints, leftGames, rightGames, server, receiver);
					
				}
			}
			else if (events[i] == 'R') {
				if(receiver == 0) { // left won
					leftPoints++;
					server = 0;
					receiver = 1;
					// check if games has finished
					if(gameHasFinished(leftPoints, rightPoints))
						resetPoints(leftPoints, rightPoints, leftGames, rightGames, server, receiver);
					
				}
				else { // right won
					rightPoints++;
					server = 1;
					receiver = 0;
					// check if games has finished
					if(gameHasFinished(leftPoints, rightPoints))
						resetPoints(leftPoints, rightPoints, leftGames, rightGames, server, receiver);
					
				}
			}
			
			i++;
		}
		if(events[i] == 'Q') {
			
			if(matchHasFinished(leftGames, rightGames))
				printFinished(leftGames, rightGames, leftPoints, rightPoints, server);
			else
				printOngoing(leftGames, rightGames, leftPoints, rightPoints, server);
		}
		
		
	}
	
	
 
	return 0; 
}

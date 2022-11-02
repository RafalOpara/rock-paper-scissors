#include <iostream>
#include <conio.h>
#include <string>


using namespace std;
int rounds;
int wins=0;
int winsPC=0;
int counter = 0;

bool isRight(string error_msg)
{
	if (cin.rdstate())
	{
		cin.clear();
		cin.ignore(1024, '\n');
		system("cls");
		cout << error_msg;
		return false;
	}
	return true;
}

void pressEnter()
{
	cout << "wcisnij enter aby kontynuowac" << endl;
	while (_getch() != 13);
}

void Menu()
{
	
	do {
		cout << endl;
			cout << "====================\n";
			cout << "rock paper scissors!\n";
			cout << "====================\n";

			cout << "How many round do you want to play?" << endl;
		
		
			cin >> rounds; 
		} while (!isRight("Give numbers"));
	
}
void Game()
{
	char choose = '0';
	do
	{
		


		cout << "Wybierz jedna z opcji!" << endl;
		cout << endl;
		cout << "1.ROCK" << endl;
		cout << "2.PAPER" << endl;
		cout << "3.SCISSORS" << endl;
		cout << endl;
		cout << endl;
		cout << "My points:" << wins << "                PC points:" << winsPC << endl;
		cout << "ROUND:" << counter;
		cout << endl;

		cin >> choose;
		system("cls");
	} while (choose != '1' && choose != '2' && choose != '3');

	switch (choose)
	{
	case'1':
		choose = 1;
		break;
	case'2':
		choose = 2;
		break;
	case'3':
		choose = 3;
		break;
	default:
		cout << "invalid options" << endl;
	}

	srand(time(NULL));
	int computer = rand() % 3 + 1;
	system("cls");
	cout << "YOUR CHOICE:";
	if (choose == 1)
		cout << "rock";
	else if (choose == 2)
		cout << "paper";
	else if (choose == 3)
		cout << "scissors";

		cout << "                ENEMY CHOICE:";
		if (computer == 1)
			cout << "rock";
		else if (computer == 2)
			cout << "paper";
		else if (computer == 3)
			cout << "scissors";

		cout << endl;
		cout << endl;



	if (choose == computer) {
		std::cout << "Draw Game" << endl;
	}
	else if (choose == 1 && computer == 3) {
		std::cout << "You Win" << endl;
		wins++;
		counter++;
	}
	else if (choose == 3 && computer == 2) {
		std::cout << "You Win" << endl;
		wins++;
		counter++;
	}
	else if (choose == 2 && computer == 1) {
		std::cout << "You Win" << endl;
		wins++;
		counter++;
	}
	else {
		std::cout << "Computer Wins!"<<endl;
		winsPC++;
		counter++;
	}

	
	
	cout << endl;
	
	pressEnter();
}




int main()
{
	Menu();
	while (rounds>counter)
	{
		Game();
		system("cls");
	}
	if (wins > winsPC)
		cout << "CONGRATULATION, YOU WIN!";
	else if (wins < winsPC)
		cout << "YOU LOSE";
	else
		cout << "DRAW!";
	return 0;
}

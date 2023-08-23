// RockPaperScissor.cpp : Create by Jonathan Cavallaro.
#include <iostream>
#include <string>
struct RPCStruct {
	enum RockPaperScissor { ROCK = 1, PAPER = 2, SCISSOR = 3 };
};
int SetRounds(void);
void SetSeeds(void);
int UserSelectChoice(std::string RockPaperScissorForShow[]);
int GenerateNumber(void);
int MessageLose(std::string RockPaperScissorForShow[], int computer);
int MessageWin(std::string RockPaperScissorForShow[], int computer);
int MessageTie(std::string RockPaperScissorForShow[], int computer);
void ShowMessageWhenEndGame(int scoreWIN, int scoreLOSE, int scoreTIE);
int SetRounds(void) {
	int gameRound = 0;
	std::cout << "Rock Paper Scissor by Jonathan Cavallaro" << std::endl;
	std::cout << "How many rouds you want to play?" << std::endl;
	std::cout << ": > ";
	std::cin >> gameRound;
	return gameRound;
}
void SetSeeds(void) {
	std::srand(std::time(nullptr));
}
int UserSelectChoice(std::string RockPaperScissorForShow[]) {
	int user = 0;
	std::cout << std::endl << "--------------------------------------------------------------" << std::endl;
	std::cout << "Select choice : 1).Rock 2).Paper 3).Scissor" << std::endl;
	std::cout << ": > ";
	std::cin >> user;
	std::cout << "You select : " << RockPaperScissorForShow[user - 1] << std::endl;
	return user;
}
int GenerateNumber(void) {
	int computer = 4;
	while (computer > 3) {
		computer = 1 + std::rand() / ((RAND_MAX + 1) / 3);
	}
	return computer;
}
int MessageLose(std::string RockPaperScissorForShow[], int computer) {
	std::cout << "Computer : " << RockPaperScissorForShow[computer - 1] << std::endl;
	std::cout << "YOU LOSE" << std::endl;
	return 1;
}
int MessageWin(std::string RockPaperScissorForShow[], int computer) {
	std::cout << "Computer : " << RockPaperScissorForShow[computer - 1] << std::endl;
	std::cout << "YOU WIN" << std::endl;
	return 1;
}
int MessageTie(std::string RockPaperScissorForShow[], int computer) {
	std::cout << "Computer : " << RockPaperScissorForShow[computer - 1] << std::endl;
	std::cout << "TIE" << std::endl;
	return 1;
}
void ShowMessageWhenEndGame(int scoreWIN, int scoreLOSE, int scoreTIE) {
	std::cout << std::endl << "--------------------------------------------------------------" << std::endl;
	std::cout << "YOU WIN = " << scoreWIN << " YOU LOSE = " << scoreLOSE << " TIE = " << scoreTIE;
	std::cout << std::endl << "--------------------------------------------------------------" << std::endl;
	std::cout << "Thank you for playing my game." << std::endl;
}
int main(void)
{
	std::string RockPaperScissorForShow[] = { "ROCK" ,"PAPER" , "SCISSOR" };
	int scoreTIE = 0;
	int scoreWIN = 0;
	int scoreLOSE = 0;
	int user = 0;
	int gameRound = 0;
	int computer = 0;
	RPCStruct RPCstruct;
	gameRound = SetRounds();
	SetSeeds();
	for (int i = 1; i <= gameRound; i++) {
		user = UserSelectChoice(RockPaperScissorForShow);
		computer = GenerateNumber();
		if (user == computer) {
			scoreTIE += MessageTie(RockPaperScissorForShow, computer);
		}
		else if (user == RPCstruct.ROCK && computer == RPCstruct.PAPER) {
			scoreLOSE += MessageLose(RockPaperScissorForShow, computer);
		}
		else if (user == RPCstruct.PAPER && computer == RPCstruct.ROCK) {
			scoreWIN += MessageWin(RockPaperScissorForShow, computer);
		}
		else if (user == RPCstruct.PAPER && computer == RPCstruct.ROCK) {
			scoreWIN += MessageWin(RockPaperScissorForShow, computer);
		}
		else if (user == RPCstruct.ROCK && computer == RPCstruct.PAPER) {
			scoreLOSE += MessageLose(RockPaperScissorForShow, computer);
		}
		else if (user == RPCstruct.SCISSOR && computer == RPCstruct.ROCK) {
			scoreLOSE += MessageLose(RockPaperScissorForShow, computer);
		}
		else if (user == RPCstruct.ROCK && computer == RPCstruct.SCISSOR) {
			scoreWIN += MessageWin(RockPaperScissorForShow, computer);
		}
		else if (user == RPCstruct.SCISSOR && computer == RPCstruct.PAPER) {
			scoreWIN += MessageWin(RockPaperScissorForShow, computer);
		}
		else if (user == RPCstruct.PAPER && computer == RPCstruct.SCISSOR) {
			scoreLOSE += MessageLose(RockPaperScissorForShow, computer);
		}
		else {
			std::cout << "Error!" << std::endl;
		}
	}
	ShowMessageWhenEndGame(scoreWIN, scoreLOSE, scoreTIE);
	return 0;
}
int SetRounds(void) {
	int gameRound = 0;
	std::cout << "Rock Paper Scissor by Jonathan Cavallaro" << std::endl;
	std::cout << "How many rouds you want to play?" << std::endl;
	std::cout << ": > ";
	std::cin >> gameRound;
	return gameRound;
}
void SetSeeds(void) {
	std::srand(std::time(nullptr));
}
int UserSelectChoice(std::string RockPaperScissorForShow[]) {
	int user = 0;
	std::cout << std::endl << "--------------------------------------------------------------" << std::endl;
	std::cout << "Select choice : 1).Rock 2).Paper 3).Scissor" << std::endl;
	std::cout << ": > ";
	std::cin >> user;
	std::cout << "You select : " << RockPaperScissorForShow[user - 1] << std::endl;
	return user;
}
int GenerateNumber(void) {
	int computer = 4;
	while (computer > 3) {
		computer = 1 + std::rand() / ((RAND_MAX + 1) / 3);
	}
	return computer;
}
int MessageLose(std::string RockPaperScissorForShow[], int computer) {
	std::cout << "Computer : " << RockPaperScissorForShow[computer - 1] << std::endl;
	std::cout << "YOU LOSE" << std::endl;
	return 1;
}
int MessageWin(std::string RockPaperScissorForShow[], int computer) {
	std::cout << "Computer : " << RockPaperScissorForShow[computer - 1] << std::endl;
	std::cout << "YOU WIN" << std::endl;
	return 1;
}
int MessageTie(std::string RockPaperScissorForShow[], int computer) {
	std::cout << "Computer : " << RockPaperScissorForShow[computer - 1] << std::endl;
	std::cout << "TIE" << std::endl;
	return 1;
}
void ShowMessageWhenEndGame(int scoreWIN, int scoreLOSE, int scoreTIE) {
	std::cout << std::endl << "--------------------------------------------------------------" << std::endl;
	std::cout << "YOU WIN = " << scoreWIN << " YOU LOSE = " << scoreLOSE << " TIE = " << scoreTIE;
	std::cout << std::endl << "--------------------------------------------------------------" << std::endl;
	std::cout << "Thank you for playing my game." << std::endl;
}
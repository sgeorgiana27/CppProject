#pragma once
#include <cstdint>
#include <vector>
#include <string>
#include <fstream>
#include "Chat.h"
#include "Player.h"
#include "Settings.h"

class Game
{
public:
	Game(std::string roomcode, uint16_t timer, uint16_t indexDrawer, Settings settings
	/*std::vector<std::string> wordList, std::vector<std::string> wordChoices, Chat chat*/);

	const std::string& GetRoomcode() const;
	const uint16_t GetTimer() const;
	const uint16_t GetIndexDrawer() const;
	Settings GetSettings() const;
	const std::vector<std::string>& GetUsers() const;
	//const std::vector<std::string>& GetWordList();
	//const std::vector<std::string>& GetWordChoices();
	//const Chat& GetChat();

	void SetRoomcode(const std::string roomcode);
	void SetTimer(const uint16_t timer);
	void SetIndexDrawer(const uint16_t indexDrawer);
	void SetSettings(const Settings settings);
	//void SetWordList(const std::vector<std::string>& wordList);
	//void SetWordChoices(const std::vector<std::string>& wordChoices);
	//void SetChat(const Chat& chat);

	void AddPlayer(const std::string& user);
	//void ReadWordList(std::ifstream& file);
	std::vector<uint16_t> TotalScore(const std::vector<std::vector<uint16_t>>& scores);
	uint16_t NumberLines(std::ifstream& file);
	//void ChooseWords();

private:
	uint16_t GenerateRandomNumber(uint16_t min, uint16_t max);

private:
	std::string m_roomcode;
	uint16_t m_timer;
	uint16_t m_indexDrawer;
	Settings m_settings;
	std::vector<std::string> m_users;
};


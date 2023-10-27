#include "Game.h"

Game::Game(uint16_t timer, uint16_t indexDrawer, uint16_t round, 
	std::vector<std::string> wordList, std::vector<std::string> wordChoices, Chat chat):
	m_timer(timer),
	m_indexDrawer(indexDrawer),
	m_round(round),
	m_wordList(wordList),
	m_wordChoices(wordChoices),
	m_chat(chat)
{}

const uint16_t Game::getTimer()
{
	return m_timer;
}

const std::vector<std::string>& Game::getWordList()
{
	return m_wordList;
}

const std::vector<std::string>& Game::getWordChoices()
{
	return m_wordChoices;
}

const Chat& Game::getChat()
{
	return m_chat;
}

const uint16_t Game::getIndexDrawer()
{
	return m_indexDrawer;
}

const uint16_t Game::getRound()
{
	return m_round;
}

uint16_t Game::setTimer(const uint16_t timer)
{
	m_timer = timer;
}

std::vector<std::string>& Game::setWordList(const std::vector<std::string>& wordList)
{
	m_wordList = wordList;
}

std::vector<std::string>& Game::setWordChoices(const std::vector<std::string>& wordChoices)
{
	m_wordChoices = wordChoices;
}

Chat& Game::setChat(const Chat& chat)
{
	m_chat = chat;
}

uint16_t Game::setIndexDrawer(const uint16_t indexDrawer)
{
	m_indexDrawer = indexDrawer;
}

uint16_t Game::setRound(const uint16_t round)
{
	m_round = round;
}


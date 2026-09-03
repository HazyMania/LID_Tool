#pragma once
#include <Windows.h>
#include <cstdint>
#include <functional>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <thread>

class CConsole
{
public:
	CConsole() {}
	virtual ~CConsole() {}

	void Init(const char*);

private:
	std::string m_Command;

	void Worker();
	bool Help();

protected:
	std::map<std::string, std::function<bool()>> m_Commands;
	std::map<std::string, std::string> m_CommandDescriptions;

	virtual void RegisterCommands() = 0;
};


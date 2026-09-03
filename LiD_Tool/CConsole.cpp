#include "CConsole.h"

void CConsole::Init(const char* ConsoleName)
{
	//
	if (!AllocConsole())
		AttachConsole(ATTACH_PARENT_PROCESS);
	else
	{
		FILE *conin, *conout;
		freopen_s(&conin, "conin$", "r", stdin);
		freopen_s(&conout, "conout$", "w", stdout);
		freopen_s(&conout, "conout$", "w", stderr);
	}

	SetConsoleTitleA(ConsoleName);
	std::cout << "[NOTICE] Enter 'Help' to show commands." << std::endl << std::endl;
	//*/

	RegisterCommands();

	m_Commands.insert(std::pair<std::string, std::function<bool()>>("Help", std::bind(&CConsole::Help, this)));
	m_CommandDescriptions.insert(std::pair<std::string, std::string>("Help", "Displays this prompt."));

	CConsole::Worker();
	//std::thread t(&CConsole::Worker, this);
	//t.detach();
}
void CConsole::Worker()
{
	while (1)
	{
		std::cout << ">";
		std::cin >> m_Command;

		auto it = m_Commands.find(m_Command);
		if (it != m_Commands.end())
		{
			if (!it->second())
			{
				std::cerr << "[ERROR] '" << it->first << "' Command failed." << std::endl << std::endl;
				continue;
			}

			std::cout << std::endl << "[NOTICE] '" << it->first << "' Command success." << std::endl << std::endl;
		}
		else
			std::cerr << "[ERROR] '" << m_Command << "' Command does not exist." << std::endl << std::endl;
	}
}
bool CConsole::Help()
{
	for (auto const& command : m_Commands)
	{
		std::cout << "[" << command.first << "] ";

		auto cmd = m_CommandDescriptions.find(command.first);
		if (cmd != m_CommandDescriptions.end())
			std::cout << cmd->second;

		std::cout << std::endl;
	}

	return true;
}
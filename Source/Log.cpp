#include "Log.h"

namespace Log
{
	void Init(std::string logFileName)
	{
		g_pLogManager = new LogManager();
		g_pLogManager->Init(logFileName);
	}

	void WriteLog(std::string tag, std::string str)
	{
		g_pLogManager->WriteLog(tag, str);
	}

	void Destroy()
	{
		delete g_pLogManager;
	}
}
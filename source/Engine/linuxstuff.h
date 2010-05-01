#ifndef __LINUXSTUFF_H__
#define __LINUXSTUFF_H__

struct cmdlineSettingsStruct
{
	bool languageSet;
	unsigned int languageID;
	bool fullscreenSet;
	bool userFullScreen;
};

void printCmdlineUsage();
bool parseCmdlineParameters(int argc, char *argv[]);
#endif
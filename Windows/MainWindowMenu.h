#pragma once

#include "Common/CommonWindows.h"
#include "Common/KeyMap.h"
#include <Windowsx.h>

namespace MainWindow {
	void MainWindowMenu_Process(HWND hWnd, WPARAM wParam);
	void TranslateMenus(HWND hWnd, HMENU menu);
	void BrowseAndBoot(std::string defaultPath, bool browseDirectory = false);
	void BrowseAndBootDone();
	void setTexScalingMultiplier(int level);
	void ChangeMenu();
}

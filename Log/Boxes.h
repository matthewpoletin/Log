#pragma once

#include <string>

#include <Windows.h>

void CreateBox(std::string header, std::string text)
{
	LPCTSTR s = L"char";

	MessageBox(
		NULL,
		L"������!",
		L"��� ����",
		MB_YESNO | //�� ��� (������)
		MB_DEFBUTTON1 | //��������� ������
		MB_ICONEXCLAMATION | //��� ������
		MB_DEFAULT_DESKTOP_ONLY
		);

}

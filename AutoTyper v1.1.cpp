#include <iostream>
#include <Windows.h>

bool autoTyperSwitch = false;


void keyUpAndDown(BYTE vkOption)
{
	keybd_event(vkOption, 0, 0, 0);
	keybd_event(vkOption, 0, KEYEVENTF_KEYUP, 0);
	Sleep(15);
}

void inBetweenSleep()
{
	Sleep(15000);
}

int main()
{
	SetConsoleTitle(L"Dank Meme Farmer");
	system("color 70");
	printf("To turn on and off press f10.\n");
	while (true)
	{
		if (GetAsyncKeyState(VK_F10) & 1)
		{
			autoTyperSwitch = !autoTyperSwitch;
		}
		if (autoTyperSwitch)
		{
			std::cout << "AutoTyper: On" << std::endl;

				// Beg
				keyUpAndDown(0x50); // P
				keyUpAndDown(0x4C); // L
				keyUpAndDown(0x53); // S
				keybd_event(VK_SPACE, 0, 0, 0);// Space
				keyUpAndDown(0x42); // B
				keyUpAndDown(0x45); // E
				keyUpAndDown(0x47); // G
				keybd_event(VK_RETURN, 0, 0, 0);// Enter

				inBetweenSleep();

				// Post Meme
				keyUpAndDown(0x50); // P
				keyUpAndDown(0x4C); // L
				keyUpAndDown(0x53); // S
				keybd_event(VK_SPACE, 0, 0, 0);// Space
				keyUpAndDown(0x50); // P
				keyUpAndDown(0x4D); // M
				keybd_event(VK_RETURN, 0, 0, 0);// Enter

				Sleep(5000);

				// Meme Selection
				keyUpAndDown(0x46); // F
				keybd_event(VK_RETURN, 0, 0, 0);// Enter

				inBetweenSleep();

				// Hunt
				keyUpAndDown(0x50); // P
				keyUpAndDown(0x4C); // L
				keyUpAndDown(0x53); // S
				keybd_event(VK_SPACE, 0, 0, 0);// Space
				keyUpAndDown(0x48); // H
				keyUpAndDown(0x55); // U
				keyUpAndDown(0x4E); // N
				keyUpAndDown(0x54); // T
				keybd_event(VK_RETURN, 0, 0, 0);// Enter

				inBetweenSleep();

				// Fish
				keyUpAndDown(0x50); // P
				keyUpAndDown(0x4C); // L
				keyUpAndDown(0x53); // S
				keybd_event(VK_SPACE, 0, 0, 0);// Space
				keyUpAndDown(0x46); // F
				keyUpAndDown(0x49); // I
				keyUpAndDown(0x53); // S
				keyUpAndDown(0x48); // H
				keybd_event(VK_RETURN, 0, 0, 0);// Enter

				inBetweenSleep();
		}
	}
}

#include <iostream>
#include <Windows.h>

bool autoTyperSwitch = false;


void keyUpAndDown(BYTE vkOption)
{
	keybd_event(vkOption, 0, 0, 0);
	keybd_event(vkOption, 0, KEYEVENTF_KEYUP, 0);
	Sleep(15);
}

int main()
{
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
			while (true)
			{
				keyUpAndDown(0x50); // P
				keyUpAndDown(0x4C); // L
				keyUpAndDown(0x53); // S
				keybd_event(VK_SPACE, 0, 0, 0);// Space
				keyUpAndDown(0x42); // B
				keyUpAndDown(0x45); // E
				keyUpAndDown(0x47); // G
				keybd_event(VK_RETURN, 0, 0, 0);// Enter
				Sleep(30000);
				keyUpAndDown(0x50); // P
				keyUpAndDown(0x4C); // L
				keyUpAndDown(0x53); // S
				keybd_event(VK_SPACE, 0, 0, 0);// Space
				keyUpAndDown(0x50); // P
				keyUpAndDown(0x4D); // M
				keybd_event(VK_RETURN, 0, 0, 0);// Enter
				Sleep(5000);
				keyUpAndDown(0x46); // F
				keybd_event(VK_RETURN, 0, 0, 0);// Enter
				Sleep(30000);
				
			}
		}
	}
}
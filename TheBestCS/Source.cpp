#include"Weapon.h"
using namespace std;

int main()
{
	setlocale(0, "ru");
	short choise = 0;
	bool e = true;
	while (e)
	{
		cout << "����� ������\n1 - ���\n2 - ��������\n3 - �������\n4 - ��������\n5 - ��������-������\n6 - ���������\n7 - ����̨�";
		choise = _getch();
		system("cls");
		if (choise == 49)
		{
			Knife a;
			bool end = true;
			while (end)
			{
				cout << "����� ���� ������.\n��� �� ������ �������?\n";
				cout << "R - ���������� ���������� ��������\nENTER - ������� ��� � ����\nSPACE - �����������\n0 - ������� ������\n";

				int action = _getch();
				if (action == 224)
				{
					action = _getch();
				}
				cout << "\n";
				if (action == a.R || action == a.r) a.Action1();
				else if (action == a.ENTER) a.Action2();
				else if (action == a.SPACE) a.Action3();
				else if (action == 48)
				{
						end = false;
						system("cls");
				}
				else cout << "�� ���������, �� �������� ��� ���!\n";
			}
		}
		else if (choise == 50)
		{
			Pistol a;
			bool end = true;
			while (end)
			{
				cout << "����� ���� ������.\n��� �� ������ �������?\n";
				cout << "R - �����������\nENTER - ����������\nSPACE - �����������\n0 - ������� ������\n";

				int action = _getch();
				if (action == 224)
				{
					action = _getch();
				}
				cout << "\n";
				if (action == a.R || action == a.r) a.Action1();
				else if (action == a.ENTER) a.Action2();
				else if (action == a.SPACE) a.Action3();
				else if (action == 48)
				{
					end = false;
					system("cls");
				}
				else cout << "�� ���������, �� �������� ��� ���!\n";
			}
		}
		else if (choise == 51)
		{
			Rifle a;
			bool end = true;
			while (end)
			{
				cout << "����� ���� ������.\n��� �� ������ �������?\n";
				cout << "R - �����������\nENTER - ����������\nSPACE - �����������\n0 - ������� ������\n";

				int action = _getch();
				if (action == 224)
				{
					action = _getch();
				}
				cout << "\n";
				if (action == a.R || action == a.r) a.Action1();
				else if (action == a.ENTER) a.Action2();
				else if (action == a.SPACE) a.Action3();
				else if (action == 48)
				{
					end = false;
					system("cls");
				}
				else cout << "�� ���������, �� �������� ��� ���!\n";
			}
		}
		else if (choise == 52)
		{
			Shotgun a;
			bool end = true;
			while (end)
			{
				cout << "����� ���� ������.\n��� �� ������ �������?\n";
				cout << "R - �����������\nENTER - ����������\nSPACE - �����������\n0 - ������� ������\n";

				int action = _getch();
				if (action == 224)
				{
					action = _getch();
				}
				cout << "\n";
				if (action == a.R || action == a.r) a.Action1();
				else if (action == a.ENTER) a.Action2();
				else if (action == a.SPACE) a.Action3();
				else if (action == 48)
				{
					end = false;
					system("cls");
				}
				else cout << "�� ���������, �� �������� ��� ���!\n";
			}
		}
		else if (choise == 53)
		{
			SubmachineGun a;
			bool end = true;
			while (end)
			{
				cout << "����� ���� ������.\n��� �� ������ �������?\n";
				cout << "R - �����������\nENTER - ����������\nSPACE - �����������\n0 - ������� ������\n";

				int action = _getch();
				if (action == 224)
				{
					action = _getch();
				}
				cout << "\n";
				if (action == a.R || action == a.r) a.Action1();
				else if (action == a.ENTER) a.Action2();
				else if (action == a.SPACE) a.Action3();
				else if (action == 48)
				{
					end = false;
					system("cls");
				}
				else cout << "�� ���������, �� �������� ��� ���!\n";
			}
		}
		else if (choise == 54)
		{
		SniperRifle a;
		bool end = true;
		    while (end)
		    {
		    	cout << "����� ���� ������.\n��� �� ������ �������?\n";
		    	cout << "R - �����������\nENTER - ����������\nSPACE - �����������\n0 - ������� ������\n";
		    
		    	int action = _getch();
		    	if (action == 224)
		    	{
		    		action = _getch();
		    	}
		    	cout << "\n";
		    	if (action == a.R || action == a.r) a.Action1();
		    	else if (action == a.ENTER) a.Action2();
		    	else if (action == a.SPACE) a.Action3();
		    	else if (action == 48)
		    	{
		    		end = false;
		    		system("cls");
		    	}
		    	else cout << "�� ���������, �� �������� ��� ���!\n";
		    }
		}
		else if (choise == 55)
		{
		    MachineGun a;
		    bool end = true;
		    while (end)
		    {
		    	cout << "����� ���� ������.\n��� �� ������ �������?\n";
		    	cout << "R - �����������\nENTER - ����������\nSPACE - �����������\n0 - ������� ������\n";
		    
		    	int action = _getch();
		    	if (action == 224)
		    	{
		    		action = _getch();
		    	}
		    	cout << "\n";
		    	if (action == a.R || action == a.r) a.Action1();
		    	else if (action == a.ENTER) a.Action2();
		    	else if (action == a.SPACE) a.Action3();
		    	else if (action == 48)
		    	{
		    		end = false;
		    		system("cls");
		    	}
		    	else cout << "�� ���������, �� �������� ��� ���!\n";
		    }
		}
		else
	    {
		cout << "������� �� ���������!\n";
	    }

	}
}
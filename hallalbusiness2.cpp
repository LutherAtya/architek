#include <iostream>

int fn() {
	return 20;
}

void fn2() {
	_asm {
		mov eax, 25;
	}
}

int main()
{
	int a=2;
	_asm {
		mov a, 2 
	}

	int b = a;
	_asm {
		mov eax, a;
		mov b, eax;
	}
	
	int c = a + 2;
	_asm {
		mov eax, a;
		add eax, 2;
		mov c, eax;
	}

	int d = 25;
	d = d + d + d + 1;
	_asm{
		mov eax, d;
		add eax d;
		add eax d;
		add eax 1;
		mov d, eax;
	}

	char c1 = 'A'; // "A"
	_asm {
		mov c1, 'A';
	}

	char c2 = c1;
	_asm {
		mov al, c1;
		add al, 1;
		mov c2 al;
	}

	_asm {
		mov al 4;
		rol al, 10;
	}

	//elõjel kiterjesztése
	int szam1 = 10;
	char szam2 = (char)szam1;
	_asm {
		mov eax, szam1;
		mov szam2, al;
	}
	_asm {
		mov eax, 0;
		mov al, szam2;
		mov szam1, eax;
	}
	_asm {
		mov al, szam2;
		// convert byte(8) to word(16)
		cbw;
		// convert word(16) to dword(32) AX:DX
		cwd;
	}
	return 0;
}


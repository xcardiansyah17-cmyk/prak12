#include<stdio.h>
int main (){
	char IP;
	char nilai;
	printf("Masukkan nilai huruf:");
	scanf("%c""%i", &IP);
	switch (IP)
	{
		case 'A': printf("IP Anda 4\n");
		break;
		case 'B': printf("IP Anda 3\n");	
		break;
		case 'C': printf("IP Anda 2\n");
		break;
		case 'D': printf("IP Anda 1\n");
		break;
		case 'E': printf("IP Anda 0\n");
		break;
	
	default: printf("Input anda salah");
		break;
	}
	switch (nilai)
	{
	case 0:
		puts("E");
		break;
	case 1:
		puts("E");
		break;
	case 2:
	case 3:
		puts("E");
		break;
	case 4:
		puts("D");
		break;
	default:
		puts("Nilai tidak dikenali");
		break;
		/* code */
		break;
	}
}
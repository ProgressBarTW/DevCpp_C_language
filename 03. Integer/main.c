#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// �o�O����, �L���|�Q�sĶ
	
	/*
	�o�]�O����
	���O�i�H���Ѧh��
    �ĤT�� 
	*/ 
	
	// �ŧi����ܼ� number 
	int number = 10;
	
	// �L�X�ܼ� number 
	printf("number ���� %d \n", number);

    // �ܼ� number �[�W 2 
	number = number + 2;
	
	// �A�L�@���ܼ� number 
	printf("number �[2�� ���� %d \n", number);
	
	// �ܼ� number �20 
	number = number - 20;
	
	// �A�L�@���ܼ� number 
	printf("number ��20�ᵥ�� %d \n", number);
	
	// �ŧi�@�ӷs���ܼƥs number1 
	int number1 = 50;
	
	// �L�X�s�ܼ�number1 
	printf("number1 ���� %d \n", number1);

	
	// �� number �[�W number1 
	number = number + number1;
	
	// �L�X�ܼ� number 
	printf("number �[�W number1 ���� %d \n", number);
	
	// number1 �èS���Q����
	printf("number1 ���Ȥ��|�]��number���ܦӧ���, �ҥH�٬O���� %d \n", number1);
	
	int result = 0;
	 
	return result;
}

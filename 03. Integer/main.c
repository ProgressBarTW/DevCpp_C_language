#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// 這是註解, 他不會被編譯
	
	/*
	這也是註解
	但是可以註解多行
    第三行 
	*/ 
	
	// 宣告整數變數 number 
	int number = 10;
	
	// 印出變數 number 
	printf("number 等於 %d \n", number);

    // 變數 number 加上 2 
	number = number + 2;
	
	// 再印一次變數 number 
	printf("number 加2後 等於 %d \n", number);
	
	// 變數 number 減掉20 
	number = number - 20;
	
	// 再印一次變數 number 
	printf("number 減20後等於 %d \n", number);
	
	// 宣告一個新的變數叫 number1 
	int number1 = 50;
	
	// 印出新變數number1 
	printf("number1 等於 %d \n", number1);

	
	// 讓 number 加上 number1 
	number = number + number1;
	
	// 印出變數 number 
	printf("number 加上 number1 等於 %d \n", number);
	
	// number1 並沒有被改變
	printf("number1 的值不會因為number改變而改變, 所以還是等於 %d \n", number1);
	
	int result = 0;
	 
	return result;
}

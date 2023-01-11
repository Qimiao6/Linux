#include<stdio.h>
 #include<string.h>
 #include<unistd.h>
 int main()
 {
   const char* pp = "\\|/——\0";
   char str[103];
   memset(str, 0, 103 * sizeof(char));
   int i = 0;
	   while (i < 20)
		   {
		     str[i] = '>';
		     printf("[%-20s][%c]\r", str, pp[i % 3]);
		     fflush(stdout);//清空输出缓冲区
		     usleep(300000);//程序延迟0.1秒
		     //sleep(1);//程序延迟1秒
			 str[i] = '=';
			     i++; 
	   }
	     printf("\n加载成功\n");
	     return 0;
 }

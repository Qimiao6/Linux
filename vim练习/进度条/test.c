#include<stdio.h>
 #include<string.h>
 #include<unistd.h>
 int main()
 {
   const char* pp = "\\|/����\0";
   char str[103];
   memset(str, 0, 103 * sizeof(char));
   int i = 0;
	   while (i < 20)
		   {
		     str[i] = '>';
		     printf("[%-20s][%c]\r", str, pp[i % 3]);
		     fflush(stdout);//������������
		     usleep(300000);//�����ӳ�0.1��
		     //sleep(1);//�����ӳ�1��
			 str[i] = '=';
			     i++; 
	   }
	     printf("\n���سɹ�\n");
	     return 0;
 }

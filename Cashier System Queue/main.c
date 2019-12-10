#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linkedlist.h"
#include "createHTML.h"
#include "displayTechnical.h"
#include "account.h"

int main(){
	createHTML("NO QUEUE", 0);
	delay();
	system("display.html");
	
	FILE* fp;
	fp = fopen("user.dat", "rb+");
	fread(&user1,sizeof(user1),1,fp);
	fclose(fp);
	
    system("cls");
    int value = -1;
    //int countQueue=0;
    char menu[2][20] = {"New Queue", "Account"};
    while(value != 0)
    {
        value = display("Queue System", "" ,menu, "\n Select you choice here", 2);
        switch(value)
        {
        case 1 : countQueue++;
                 add(&queue, countQueue);
                 system("cls");
                 break;
        case 2 : accountMenu(); break;
        }
    }
    return 0;
}


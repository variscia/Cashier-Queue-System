int countQueue=0;

int display(char title[], char intro[], char menu[][20], char choice[], int maxNumber)
{
    int input;
    int a;
    printf("\t-----%s-----\n\n", title);
    printf("%s", intro);
    printf("Queue : ");
	printQueue(queue, 2);
	
	printf("Cashier 1 : ");
	printQueue(plat1, 1);
	
	printf("Cashier 2 : ");
	printQueue(plat2, 1);
	
	printf("Cashier 3 : ");
	printQueue(plat3, 1);
    printf("\n------------\n");
    for(a = 0; a < maxNumber; a++)
    {
        printf("%d. %s\n", a+1, menu[a]);
    }
    printf("0. Exit/Back\n");
    printf("%s : ", choice);
    scanf("%d", &input);
    if(input==0){system("cls");}
    while(input < 0 || input > maxNumber)
    {
        printf("\nChoice Unavailable. Enter again your choice here : \n");
        scanf("%d", &input);
    }
    return input;
}

void technicianInterface(){
    int value = -1, tempQueue;
	char select, strTemp[10], tempDesc[30];
    char menu[4][20] = {"New Queue", "Next(Cashier 1)", "Next(Cashier 2)", "Next(Cashier 3)"};
    while(value != 0)
    {
    	system("cls");
        value = display("Queue System", "" ,menu, "\n Select you choice here", 4);
        switch(value)
        {
        case 1 : 
			countQueue++;
        	add(&queue, countQueue);
        	system("cls");
        	break;
        case 2 :
			pop(&plat1);
			if(queue!=NULL){
				tempQueue = queue->data;
				//memcpy(tempDesc, queue->desc, sizeof(tempDesc));
				//addPlatform(&plat1, tempQueue, tempDesc);
				add(&plat1, tempQueue);
				pop(&queue);
				sprintf(strTemp, "%d", tempQueue);
				createHTML(strTemp, 1);
				printf("\a");
			}
			break;
		case 3 : 
			pop(&plat2);
			if(queue!=NULL){
				tempQueue = queue->data;
				//memcpy(tempDesc, queue->desc, sizeof(tempDesc));
				//addPlatform(&plat2, tempQueue, tempDesc);
				add(&plat2, tempQueue);
				pop(&queue);
				sprintf(strTemp, "%d", tempQueue);
				createHTML(strTemp, 2);
				printf("\a");
			}
			break;
		case 4 :
			pop(&plat3);
			if(queue!=NULL){
				tempQueue = queue->data;
				//memcpy(tempDesc, queue->desc, sizeof(tempDesc));
				//addPlatform(&plat3, tempQueue, tempDesc);
				add(&plat3, tempQueue); 
				pop(&queue);
				sprintf(strTemp, "%d", tempQueue);
				createHTML(strTemp, 3);
				printf("\a");
			}
			break;
        }
    }
    return;
}





struct Node{
	int data;
	//char desc[30];
	//char payment[10];
	struct Node *next;
}*queue=NULL, *plat1=NULL, *plat2=NULL, *plat3=NULL;

void add(struct Node** head, int input){
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	struct Node *last = *head;
	
	newNode->data = input;
	//printf("Add Descriptions : ");
	//scanf(" %[^\n]s", &newNode->desc);
	newNode->next = NULL;
	
	if(*head == NULL){
		*head = newNode;
		return;
	}
	
	while(last->next != NULL){
		last = last->next;
	}
	
	last->next = newNode;
	return;
}

/*void addPlatform(struct Node** head, int input, char inputDesc[]){
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	struct Node *last = *head;
	
	newNode->data = input;
	memcpy(newNode->desc, inputDesc, sizeof(struct Node));
	newNode->next = NULL;
	
	if(*head == NULL){
		*head = newNode;
		return;
	}
	
	while(last->next != NULL){
		last = last->next;
	}
	
	last->next = newNode;
	return;
}*/

void pop(struct Node **head){
	struct Node* temp = *head;
	if(temp == NULL) return;
	*head = temp->next;
	free(temp);
	return;
}

void printQueue(struct Node *head, int type) {
	if (head == NULL){
		printf("NO QUEUE\n");
	}
	
	else if(type == 1){
		struct Node *temp = head;
		while(temp != NULL){
			if(temp->next == NULL) printf(" %d ",temp->data);
			temp = temp->next;
    	}
    	printf("\n");
	}
	
	else if(type == 2){
		struct Node *temp = head;
    	while(temp != NULL){
			printf(" %d ", temp->data);
			//printf("%s ",temp->desc);
			temp = temp->next;
    	}
    	printf("\n");
	}
} 



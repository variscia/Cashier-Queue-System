struct account{
    char username[6];
    char password[6];
}user1;

void LogIn(){
    system("cls");
    FILE *user;
    user=fopen("user.dat","rb");
    fread(&user1,sizeof(user1),1,user);
    char uname[6], pass[6];
    printf("\t-----Log In-----\n\n");
    printf(" Username : ");
    scanf("%s", &uname);
    printf(" Password : ");
    scanf("%s", &pass);
    int result, result1;
    result = strcmp(user1.username, uname);
    result1 = strcmp(user1.password, pass);
    if((result1 == 0) && (result == 0))
    {
        technicianInterface();
	}
    else
    {
        system("cls");
        printf("Invalid Username/Password.\n\n");
        printf("Please manage your account or try again.\n");
        printf("Press any key to continue.");
        getch();
        system("cls");
    }
    fclose(user);
};

void manageAccount(){
    system("cls");
    FILE *fp;
    int choice,choose;
    char user, pass;
    char uname[6], upass[6];
    
    printf("\t----Manage My Account----\n");
    printf("\n1. Add new Account\n2. Edit my Account\n0. Back/Exit\n");
    printf("\nSelect your choice : ");
    scanf("%d", &choice);
    switch(choice){
        case 1 :system("cls");
        		fp = fopen("user.dat", "wb");
                printf("\t\t\t-----New Acccount-----\n");
                printf("\n*****NOTE : USERNAME AND PASSWORD MUST CONSIST OF 5 CHARACTERS ONLY*****\n");
                printf("\n Enter Username : ");
                scanf("%s", &user1.username);
                printf(" Enter Password : ");
                scanf("%s", &user1.password);
                printf("\nAccount has been registered.\n");
                fwrite(&user1,sizeof(user1),1,fp);
                fclose(fp);
                getch();
                system("cls");
                break;
        case 2 :system("cls"); 

				printf("\t-----Edit Acccount-----\n");
        		printf("Please log in first\n");
        		printf(" Username : ");
    			scanf("%s", &uname);
    			printf(" Password : ");
    			scanf("%s", &upass);
    			int result, result1;
    			result = strcmp(user1.username, uname);
    			result1 = strcmp(user1.password, upass);
    			
    			if((result1 == 0) && (result == 0))
    			{
    			system("cls");
				fp = fopen("user.dat", "wb"); 
				printf("\t-----Edit Acccount-----\n");
        		printf("\n 1. Edit Username\n 2. Edit Password\n\n Select your choice :");
                scanf("%d", &choose);
                if(choose == 1){
                    printf("Enter new username : ");
                    scanf("%s", &user1.username);
                    printf("Your username is successfully changed");
					}
                if(choose == 2){
                    printf("Enter new password : ");
                    scanf("%s", &user1.password);
                    printf("Your password is successfully changed");
                	}
                fwrite(&user1,sizeof(user1),1,fp);
                getch();
                fclose(fp);
				}
    			else
    			{
        		system("cls");
        		printf("Invalid Username/Password.\n\n");
        		printf("Please manage your account or try again.\n");
        		printf("Press any key to continue.");
        		getch();
        		system("cls");
    			}

                system("cls");
                break;
        //case 0 : {accountMenu();}
    }
};

void accountMenu(){
    int value = -1;
    char menu[2][20] = {"Log in", "Manage my Account"};
    while(value != 0)
    {
    	system("cls");
        value = display("Account Menu", "",menu, "\n Select you choice here", 2);
        switch(value)
        {
        case 1 : LogIn(); break;
        case 2 : manageAccount(); break;
        }
    }
    return;
}

char platform1[10], platform2[10], platform3[10];

void delay(){
	int c, d;

	printf("Opening display on browser, please wait...");
	for (c = 1; c <= 32767; c++)
       for (d = 1; d <= 32767; d++)
       {}
   return;
}

void createHTML(char input[], int type){
        FILE * fp;
        fp = fopen("display.html", "w+");
        if(type == 0){
        	memcpy(platform1, input, sizeof platform1);
        	memcpy(platform2, input, sizeof platform2);
        	memcpy(platform3, input, sizeof platform3);
        	//memcpy(cashier, input, sizeof cashier);
		}
        else if(type == 1) memcpy(platform1, input, sizeof platform1);
        else if(type == 2) memcpy(platform2, input, sizeof platform2);
        else if(type == 3) memcpy(platform3, input, sizeof platform3);
        //else if(type == 4) memcpy(cashier, input, sizeof cashier);

        fputs("<meta http-equiv=\"refresh\" content=\"2\">", fp);
        //fputs("<script type=\"text/javascript\" src=\"http://livejs.com/live.js\"></script>", fp);
        fputs("<style> body{ background-color: #f4f4f4; } table, th, td { border: 2px solid black; } </style>", fp);
        fputs("<h1 style=\"text-align: center; font-family:helvetica; color: #232020;\">CASHIER QUEUE</h1>", fp);
        fputs("<table style=\"height: 387px; font-family:verdana; border-color: #f4f4f4; margin-left: auto; margin-right: auto;\" width=\"989\">", fp);
        fputs("<tbody>", fp);
        fputs("<tr style=\"height: 28px; border-color: #900C3F;\"><td style=\"width: 237px; height: 28px; text-align: center; border-color: #3a3535;\"><span style=\"color: #3a3535;\"><strong>CASHIER 1</strong></span></td><td style=\"width: 239px; height: 28px; text-align: center; border-color: #3a3535;\"><span style=\"color: #3a3535;\"><strong>CASHIER 2</strong></span></td><td style=\"width: 241px; height: 28px; text-align: center; border-color: #3a3535;\"><span style=\"color: #3a3535;\"><strong>CASHIER 3</strong></span></td></tr>", fp);
        fputs("<tr style=\"height: 72px; border-color: #900C3F;\"><td style=\"width: 237px; height: 72px; text-align: center; border-color: #3a3535;\"><span style=\"color: #ff7315;\"><h2>", fp);
        fputs(platform1, fp);
		fputs("</h2></span></td><td style=\"width: 239px; height: 72px; text-align: center; border-color: #3a3535;\"><span style=\"color: #ff7315;\"><h2>", fp);
		fputs(platform2, fp);
		fputs("</h2></span></td><td style=\"width: 241px; height: 72px; text-align: center; border-color: #3a3535;\"><span style=\"color: #ff7315;\"><h2>", fp);
		fputs(platform3, fp);
		fputs("</h2></span></td>", fp);
		fputs("</tr></tbody></table>", fp);

        fclose(fp);
        return;
}

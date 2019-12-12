# Cashier-Queue-System
![Alt Text](http://g.recordit.co/cfHJtD0Oxy.gif)
Cashier Queue System is a project that imitates queue system on cashier. This program is created for "Algorithm Programming" Courses written in C language. There are three main functions in this program, which are queue, display, and account (log in system).

## Table of contents
* [General Info](#general-info)
* [Technologies](#technologies)
* [Setup](#setup)
* [Team](#team)
* [References](#references)

## General Info
This program use basic C language.
### Features
* Adding New Queue
* Dequeue the Queue to proceed it to appointed Cashier
* Make new Account
* Edit Username/Password of existing Account
* Displaying Queue Number on the appointed Cashier

## Technologies
This program is created with :
* Dev C++ ( https://www.bloodshed.net/devcpp.html )
* HTML Editor ( https://html5-editor.net/ )

## Setup
To build the program, compile the code using C compiler. We use Dev C++ ( https://www.bloodshed.net/devcpp.html ) to compile the code, it is also possible to compile the code using another program.

### Setup Local Host Server for Auto Update Display
To [Auto update display](#Refresh-on-Change-in-HTML-File) when there is change in HTML file, it is needed to make local server, we use phyton to make this possible, by writing http server command on the current directory, here is the command:
```
$ python -m http.server 8000
```
Then, open localhost:8000 on the browser and access the HTML file. there is another method using other programming language which listed here https://gist.github.com/willurd/5720255 

## Main Code
![Alt Text](http://g.recordit.co/qPsNUenUK2.gif)
The main code of the program, consist of call function of createHTML(), open account file, menu that redirect to other function used in this program, and add queue function.

## Account 
![Alt Text](http://g.recordit.co/SGUXGnoM6x.gif)
Functions to display the account menu; log in and manage account. In order to be able to log in into the system, we used strcmp() to compares two strings character by character. The account data will be saved in user.dat file.

## Create HTML 
![Alt Text](http://g.recordit.co/HE0QAuQ0G0.gif)
This Header file contains the code to make display.html file using FILE management included in 'stdio.h' header. for the display.html, it contains header and tables. Here is the HTML code: 

```HTML
<meta http-equiv=\"refresh\" content=\"2\">
<style> body{ background-color: #f4f4f4; } table, th, td { border: 2px solid black; } </style>
<h1 style="text-align: center; font-family:helvetica; color: #232020;">CASHIER QUEUE</h1>
<table style="height: 387px; font-family:verdana; border-color: #f4f4f4; margin-left: auto; margin-right: auto;" width="989">
<tbody>
<tr style="height: 28px; border-color: #900C3F;">
<td style="width: 237px; height: 28px; text-align: center; border-color: #3a3535;"><span style="color: #3a3535;"><strong>CASHIER 1</strong></span></td>
<td style="width: 239px; height: 28px; text-align: center; border-color: #3a3535;"><span style="color: #3a3535;"><strong>CASHIER 2</strong></span></td>
<td style="width: 241px; height: 28px; text-align: center; border-color: #3a3535;"><span style="color: #3a3535;"><strong>CASHIER 3</strong></span></td>
</tr>
<tr style="height: 72px; border-color: #900C3F;">
<td style="width: 237px; height: 72px; text-align: center; border-color: #3a3535;">
<span style="color: #ff7315;"><h2>NO QUEUE</h2></span>
</td>
<td style="width: 239px; height: 72px; text-align: center; border-color: #3a3535;">
<span style="color: #ff7315;"><h2>NO QUEUE</h2></span>
</td>
<td style="width: 241px; height: 72px; text-align: center; border-color: #3a3535;">
<span style="color: #ff7315;"><h2>NO QUEUE</h2></span>
</td>
</tr>
</tbody>
</table>
```


on the first line there is meta refresh function
<meta http-equiv=\"refresh\" content=\"2\">
Which will instruct the browser to refresh the code at 2 seconds interval. We use the meta refresh to update the queue number display.

### Refresh on Change in HTML File
It is possible to instruct the browser to refresh when there are changes in the HTML file in order to reduce error occured when updating the html display. 
It use live.js javascript ( livejs.com ) instead of the meta refresh, using this type of code :
```HTML
<script type=\"text/javascript\" src=\"http://livejs.com/live.js\"></script>
```

## Technical Interface 
![Alt Text](http://g.recordit.co/HjP9P2RCXH.gif)
Functions to display the menu with its template and the interface for the user to execute the program then displayed in the HTML.

## Linked List
![Alt Text](http://g.recordit.co/QJQJMPze0C.gif)
A header file that contains linked list function of adding new queue and dequeue using the pop function. It also contains printing or displaying function of the queue.

## Team
* Ariq Mahira - 1806187575
* Variscia Permata Putri - 1806228316

## References
* https://www.geeksforgeeks.org/data-structures/linked-list/
* https://www.geeksforgeeks.org/difference-between-stack-and-queue-data-structures/
* https://fresh2refresh.com/c-programming/c-file-handling/
* http://www.i-visionblog.com/2014/02/creating-website-using-c-programming.html\



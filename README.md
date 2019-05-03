# Sapphire-FEDEX - The UNICEF project

_created by_ László Bogár and Lilla Tóth

## Project documentation

We have been created a program that is able to detect shapes on images and the results of the detections are stored in a database for later usage.<br/>

We use the following technologies:
* MS Visual Studio 2017 with C++14
* SQLite 
* OpenCV library
* Google Test<br/>

## Main expections

We have been created our program to help everyday work of UNICEF Hungary’s experienced volunteers. The members of the organization give interactive and playful classes to children between the 4th grade and the 12th about the UN Convention on the Rights of the Child. After each session participant children are asked to fill a feedback form on paper. The goal is to create an interactive software-hardware solution which is able to replace this paper-based feedback form.<br/>

## Project pre-conditions and restrictions

There are two main pre-condition of the project. The first one is the program should be able to serve at least 20-30 children at a time. The second one is the children should be able to fill the feedback form without a mobile or notebook.<br/>

Our program fits to these pre-conditions with the following restrictions:

- children use green tables for answering (see bellow an example) and the enviroment where a classes takes place should be free from green background, clothes, bags and so on. We need these restrictions because our program is specialized in green circles momently;
- the program should run on a computer which has a webcamera and the camera should take high quality pictures;
- the class, where the event is organized should be full with light;
- between answers you have to wait 15 seconds.<br/>

## Usage of database

The program stores all detected answer for queries, which queries fit to types of stored data. (See below an example query.)<br/>

## How to use this program

The members of the organization give a table to each child. All question and answer are introduced in speech or showed by a projector and when a child realizes that an upcoming answer is fit to his/her opinion, he/she raises a green table in front of a camera - currently a webcamera - that it shots a picture. If there is any problem with the camera, for example it is not enable, the program sends an error messege (see below).
Between every answers the program waits 15 seconds to children have enough time to hear/read the next answer and decide the answer is fit to their opinion. Before picture shots an upcoming window signs the expiration of time (see below). After this procedure the computer evaluates the picture and stores the detected shapes.<br/>

## Images

 - image about circle detection:
 
<img src="img/img01.jpg" alt="three_circles" width="400" height="300">

<img src="img/result.jpg" alt="result_image" width="400" height="300">

 - image about "Hands up!"
 
<img src="img/hands_up.jpg" alt="hands_up" width="200" height="200">
 
  - image about "Hands up!"
 
<img src="img/sql.jpg" alt="sql" width="700" height="300">
   
  - image about web camera error
 
<img src="img/error.jpg" alt="error" width="400" height="200">
 
 
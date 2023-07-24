//_____/_____ WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL _____\________//

//--------------- C++ PROGRAM TO DRAW BEAUTIFUL SCENERY -----------------\\
/*________________________________________________________________________*/

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
void main()
{
   // request auto detection
   int gd = DETECT, gm;
   int xmax, ymax,i;
   int poly[100];

   // initialize graphics and local variables
   initgraph(&gd, &gm, "c://tc//bgi");

  //mountain
   line(10,250,180,50);
   line(180,50,380,270);
   line(360,250,600,250);
   line(450,250,600,150);

   poly[0]=10;
   poly[1]=250;
   poly[2]=180;
   poly[3]=50;
   poly[4]=380;
   poly[5]=270;
   poly[6]=10;
   poly[7]=280;

   setfillstyle(1,7);
   fillpoly(4,poly);

   //mountein 2
   line(315,200,400,100);
   line(400,100,520,200);
   line(10,280,380,270);

     poly[0]=315;
     poly[1]=200;
     poly[2]=400;
     poly[3]=100;
     poly[4]=520;
     poly[5]=200;
     poly[6]=450;
     poly[7]=250;
     poly[8]=360;
     poly[9]=250;

     setfillstyle(12,8);
     fillpoly(5,poly);

   //3rd mountain
   poly[0]=450;
   poly[1]=250;
   poly[2]=600;
   poly[3]=250;
   poly[4]=600;
   poly[5]=150;
   setfillstyle(1,7);
   fillpoly(3,poly);

   //river
   line(420,250,500,300);
   line(500,300,400,370);
   line(400,370,500,370);
   line(500,370,290,450);

   //3d view
   line(500,300,500,325);
   line(500,325,440,340);
   line(500,370,500,400);
   line(500,400,390,410);

  //river color
   poly[0]=420;
   poly[1]=250;
   poly[2]=600;
   poly[3]=250;
   poly[4]=600;
   poly[5]=450;
   poly[6]=290;
   poly[7]=450;
   poly[8]=390;
   poly[9]=410;
   poly[10]=500;
   poly[11]=400;
   poly[12]=500;
   poly[13]=370;
   poly[14]=400;
   poly[15]=370;
   poly[16]=440;
   poly[17]=340;
   poly[18]=500;
   poly[19]=325;
   poly[20]=500;
   poly[21]=300;
   poly[22]=420;
   poly[23]=250;

   setfillstyle(1,1);
   fillpoly(12,poly);

   //land color
   poly[0]=10;
   poly[1]=280;
   poly[2]=380;
   poly[3]=270;
   poly[4]=360;
   poly[5]=250;
   poly[6]=420;
   poly[7]=250;
   poly[8]=500;
   poly[9]=300;
   poly[10]=400;
   poly[11]=370;
   poly[12]=500;
   poly[13]=370;
   poly[14]=290;
   poly[15]=450;
   poly[16]=10;
   poly[17]=450;

   setfillstyle(1,2);
   fillpoly(9,poly);

   //Water
   arc(550,430,30,160,15);
   arc(450,450,30,160,20);
   arc(585,375,30,160,10);
   arc(500,350,30,160,10);
   arc(560,300,30,160,10);
   arc(525,305,30,160,5);
   arc(580,350,30,160,12);

   //boat
setfillstyle(1,BROWN);
line(500,380,590,380);
line(510,400,580,400);
line(500,380,510,400);
line(590,380,580,400);
floodfill(511,382,WHITE);


//flag for boat
setfillstyle(9,RED);
line(520,380,520,340);
line(520,340,550,370);
line(550,370,520,370);
floodfill(523,365,WHITE);

   // sky color
   poly[0]=10;
   poly[1]=10;
   poly[2]=10;
   poly[3]=250;
   poly[4]=180;
   poly[5]=50;
   poly[6]=315;
   poly[7]=200;
   poly[8]=400;
   poly[9]=100;
   poly[10]=520;
   poly[11]=200;
   poly[12]=600;
   poly[13]=150;
   poly[14]=600;
   poly[15]=10;
   setfillstyle(1,9);
   fillpoly(8,poly);

//house
line(310,370,350,370);
line(350,370,400,340);
line(350,370,350,320);
line(310,370,310,320);
line(305,325,330,300);
line(330,300,355,325);
line(355,325,405,310);
line(400,340,400,310);
line(330,300,388,290);
line(388,290,405,310);

  poly[0]=320;
  poly[1]=370;
  poly[2]=320;
  poly[3]=330;
  poly[4]=335;
  poly[5]=330;
  poly[6]=335;
  poly[7]=370;
  drawpoly(4,poly);
  setfillstyle(1,13);

   //Change RED to WHITE.
   floodfill(322,365,WHITE);

   //front wall
   setfillstyle(1,3);

   //Change RED to White
   floodfill(312,365,WHITE);

     //front wall
    setfillstyle(1,5);

   //Change RED to WHITE
   floodfill(390,294,WHITE);
    setfillstyle(1,4);

   //Change RED to WHITE.
   floodfill(355,327,WHITE);

//...... Sun
arc(315,195,40,140,30);
setfillstyle(1,14);

//Change RED to WHITE
floodfill(317,190,WHITE);

line(285,160,265,120);
line(295,155,285,130);
line(300,150,290,110);
line(308,150,305,115);
line(315,150,320,110);
line(320,150,328,105);
line(330,150,340,110);
line(340,155,360,110);

// text
outtextxy(15, 460,"CREATED BY :- ROHIT TECH STUDY");

//tree1
setfillstyle(1,BROWN);
rectangle(70,390,80,450);
floodfill(72,395,WHITE);

setfillstyle(9,LIGHTGREEN);
circle(75,350,40);
floodfill(76,351,WHITE);

//tree2
setfillstyle(1,BROWN);
rectangle(170,390,180,450);
floodfill(171,395,WHITE);

setfillstyle(9,LIGHTGREEN);
circle(173,350,40);
floodfill(174,351,WHITE);

//tree3
setfillstyle(1,BROWN);
rectangle(270,390,280,450);
floodfill(273,394,WHITE);

setfillstyle(9,LIGHTGREEN);
line(240,390,310,390);
line(240,390,253,370);
line(310,390,293,370);
line(293,370,310,370);
line(253,370,235,370);
line(235,370,252,350);
line(310,370,295,350);
line(295,350,310,350);
line(252,350,235,350);
line(235,350,272,310);
line(272,310,310,350);
floodfill(255,389,WHITE);

getch();
closegraph();
}

/*---------------- I HOPE YOU LIKE THIS PROGRAMMING ---------------------*/

/*____________ LIKE __________ SHARE _________ SUBSCRIBE _________________*/




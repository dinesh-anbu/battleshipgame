#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void delay(clock_t a)
{
    clock_t start;
    start  = clock();
    while(clock()-start<a)
    {

    }
}
int main()
{
    //A:Aircraft carrier
    //B:Battleship
    //D:destroyer
    //C:corvette
    int i,j,k=0,x,y,chk=0,win=0,uposa[5][2],uposb[4][2],uposd[3][2],uposc[2][2],a=0,b=0,c=0,d=0,probab,diff;
    char gridu[10][10],griduv[10][10],gridc[10][10],gridcv[10][10],orin[2],tempstr[10],str[20]="Battleship",str1[50]="Written By: Dinesh",ch;
   system("cls");
   for(i=0;i<10;i++)
    {
	cout<<"\n";
    }
    for(i=0;i<30;i++)
    {
	cout<<" ";
    }
    for(i=0;str[i]!='\0';i++)
    {
	cout<<str[i];
	delay(5);
    }
    cout<<"\n";
    for(i=0;i<30;i++)
    {
	cout<<" ";
    }
    for(i=0;str1[i]!='\0';i++)
    {
	cout<<str1[i];
	delay(5);
    }
    delay(15);
    system("cls");
    for(;;)
    {
	system("cls");
	for(i=0;i<10;i++)
	    cout<<"\n";
	for(i=0;i<30;i++)
	    cout<<" ";
	cout<<"1.Play Battleship\n";
	for(i=0;i<30;i++)
	    cout<<" ";
	cout<<"2.Rules\n";
	for(i=0;i<30;i++)
	    cout<<" ";
	cout<<"3.Exit\n";
	ch=getch();
	if(ch=='1')
	    break;
	else if(ch=='2')
	{
	    system("cls");
	    cout<<"Get ready, for a war has been declared. Its time for some naval warfare.";
	    cout<<"\n 1.You have to defeat your opponent by destroying all his war ships before he\ndestroys yours.";
	    cout<<"\n 2.They battlefield is a 10x10 grid where you place your ships";
	    cout<<"\n 3.You can place your ships by entering its orientation, i.e horizontal or\nvertical. For horizontal orientation, type 'h' in the orientation option and\ntype 'v' for vertical";
	    cout<<"\n 4.And its x y coordinates(both separated by a space) where x is the row number\nand y is the column number";
	    cout<<"\n 5.You have a fleet of 4 battle ships: aircraft carrier(5 units long), battleship(4 units long), destroyer(3 units long) and corvette(2 units long)";
	    cout<<"\n 6.After placing your ships, you can attack the enemy area. To attack a specific area, enter its x y coordinate(separated by a entering space)";
	    cout<<"\n 7.If your attack hits the enemy ship, it will be denoted by an 'H'. And you get an extra turn";
	    cout<<"\n 8.If your attack misses, it will be denoted by a '*' and your turn ends";
	    cout<<"\npress enter to continue.........";
	    fflush(stdin);
	    gets(tempstr);
	    continue;
	}
      else if(ch=='3')
	   exit(0);
    }
    system("cls");
    for(i=0;i<10;i++)
	cout<<"\n";
    for(i=0;i<30;i++)
    cout<<" ";
    cout<<"Select the difficulty level:\n";
    for(i=0;i<30;i++)
    cout<<" ";
    cout<<"1.Easy\n";
    for(i=0;i<30;i++)
    cout<<" ";
    cout<<"2.Medium\n";
    for(i=0;i<30;i++)
    cout<<" ";
    cout<<"3.Hard\n";
    for(i=0;i<30;i++)
    cout<<" ";
    cout<<"4.Exit\n";
    ch=getch();
    if(ch=='1')
	diff=9;
    if(ch=='2')
	diff=8;
    if(ch=='3')
	diff=6;
    if(ch=='4')
	exit(0);
    system("cls");
    for(i=0;i<10;i++)
    {
	for(j=0;j<10;j++)
	{
	    gridc[i][j]='.';
	    gridu[i][j]='.';
	    gridcv[i][j]='.';
	}
    }
    for(i=0;i<10;i++)
    {
	for(j=0;j<30;j++)
	    cout<<" ";
	if(i==0)
	{
	    cout<<"  ";
	    for(j=0;j<10;j++)
	    cout<<j<<" ";
	    cout<<"\n";
	    for(j=0;j<30;j++)
	    cout<<" ";
	}
	cout<<i<<" ";
	for(j=0;j<10;j++)
	    cout<<gridu[i][j]<<" ";
	cout<<"\n";
    }
   /*Aircraft carrier*/
    for(;;)
    {
	cout<<"Aircraft Carrier(5):\n";
	cout<<"Orientation(v/h): ";
	cin>>orin;
	cout<<"x and y coordinates: ";
	cin>>x; cin>>y;
	if(strcmp(orin,"h")==0)
	{
	    if(y>5 || y<0 || x>9 || x<0)
	    {
		cout<<"Can't place the ship. try again\n";
		continue;
	    }
	    else
	    {
		for(i=y;i<y+5;i++)
		{
		    gridu[x][i]='A';
		    uposa[k][0]=x;
		    uposa[k][1]=i;
		    k++;
		}
		break;
	    }
	}
	if(strcmp(orin,"v")==0)
	{
	    if(x>5 || x<0 || y>9 || y<0)
	    {
		cout<<"Can't place the ship. try again\n";
		continue;
	    }
	     else
	    {
		for(i=x;i<x+5;i++)
		{
		    gridu[i][y]='A';
		    uposa[k][0]=i;
		    uposa[k][1]=y;
		    k++;
		}
		break;
	    }
	}
    }
    k=0;
    system("cls");
    for(i=0;i<10;i++)
    {
	for(j=0;j<30;j++)
	    cout<<" ";
	if(i==0)
	{
	    cout<<"  ";
	    for(j=0;j<10;j++)
	    cout<<j<<" ";
	    cout<<"\n";
	    for(j=0;j<30;j++)
	    cout<<" ";
	}
	cout<<i<<" ";
	for(j=0;j<10;j++)
	    cout<<gridu[i][j]<<" ";
	cout<<"\n";
    }
    /*B:Battleship*/
    for(;;)
    {
	chk=0;
	cout<<"Battleship(4):\n";
	cout<<"Orientation(v/h): ";
	cin>>orin;
	cout<<"x and y coordinates: ";
	cin>>x; cin>>y;
	if(strcmp(orin,"h")==0)
	{
	    if(y>6 || y<0 || x>9 || x<0)
	    {
		cout<<"Can't place the ship. try again\n";
		continue;
	    }
	    else
	    {

		for(i=y;i<y+4;i++)
		{
		    if(gridu[x][i]!='.')
		    {
			cout<<"Can't place the ship. try again\n";
			chk=1;
			break;
		    }
		}
		if(chk==1)
		    continue;
		else
		{
		    for(i=y;i<y+4;i++)
		    {
			gridu[x][i]='B';
			uposb[k][0]=x;
			uposb[k][1]=i;
			k++;
		    }
		    break;
		}
	    }
	}
	if(strcmp(orin,"v")==0)
	{
	    if(x>6 || x<0 || y>9 || y<0)
	    {
		cout<<"Can't place the ship. try again\n";
		continue;
	    }
	     else
	    {
		 for(i=x;i<x+4;i++)
		{
		    if(gridu[i][y]!='.')
		    {
			cout<<"Can't place the ship. try again\n";
			chk=1;
			break;
		    }
		}
		if(chk==1)
		    continue;
		else
		{
		   for(i=x;i<x+4;i++)
		    {
			gridu[i][y]='B';
			uposb[k][0]=i;
			uposb[k][1]=y;
			k++;
		    }
		    break;
		}
	    }
	}
    }
    k=0;
    system("cls");
    for(i=0;i<10;i++)
    {
	for(j=0;j<30;j++)
	    cout<<" ";
	if(i==0)
	{
	    cout<<"  ";
	    for(j=0;j<10;j++)
	    cout<<j<<" ";
	    cout<<"\n";
	    for(j=0;j<30;j++)
	    cout<<" ";
	}
	cout<<i<<" ";
	for(j=0;j<10;j++)
	    cout<<gridu[i][j]<<" ";
	cout<<"\n";
    }
    /*Destroyer*/
    for(;;)
    {
	chk=0;
	cout<<"Destroyer(3):\n";
	cout<<"Orientation(v/h): ";
	cin>>orin;
	cout<<"x and y coordinates: ";
	cin>>x; cin>>y;
	if(strcmp(orin,"h")==0)
	{
	    if(y>7 || y<0 || x>9 || x<0)
	    {
		cout<<"Can't place the ship. try again\n";
		continue;
	    }
	    else
	    {
		for(i=y;i<y+3;i++)
		{
		    if(gridu[x][i]!='.')
		    {
			cout<<"Can't place the ship. try again\n";
			chk=1;
			break;
		    }
		}
		if(chk==1)
		    continue;
		else
		{
		    for(i=y;i<y+3;i++)
		    {
			gridu[x][i]='D';
			uposd[k][0]=x;
			uposd[k][1]=i;
			k++;
		    }
		    break;
		}
	    }
	}
	if(strcmp(orin,"v")==0)
	{
	    if(x>7 || x<0 || y>9 || y<0)
	    {
		cout<<"Can't place the ship. try again\n";
		continue;
	    }
	     else
	    {
		 for(i=x;i<x+3;i++)
		{
		    if(gridu[i][y]!='.')
		    {
			cout<<"Can't place the ship. try again\n";
			chk=1;
			break;
		    }
		}
		if(chk==1)
		    continue;
		else
		{
		    for(i=x;i<x+3;i++)
		    {
			gridu[i][y]='D';
			uposd[k][0]=i;
			uposd[k][1]=y;
			k++;
		    }
		    break;
		}
	    }
	}
    }
    k=0;
    system("cls");
    for(i=0;i<10;i++)
    {
	for(j=0;j<30;j++)
	    cout<<" ";
	if(i==0)
	{
	    cout<<"  ";
	    for(j=0;j<10;j++)
	    cout<<j<<" ";
	    cout<<"\n";
	    for(j=0;j<30;j++)
	    cout<<" ";
	}
	cout<<i<<" ";
	for(j=0;j<10;j++)
	    cout<<gridu[i][j]<<" ";
	cout<<"\n";
    }
    /*Corvette*/
    for(;;)
    {
	chk=0;
	cout<<"Corvette(2):\n";
	cout<<"Orientation(v/h): ";
	cin>>orin;
	cout<<"x and y coordinates: ";
	cin>>x; cin>>y;
	if(strcmp(orin,"h")==0)
	{
	    if(y>8 || y<0 || x>9 || x<0)
	    {
		cout<<"Can't place the ship. try again\n";
                continue;
            }
            else
            {
                for(i=y;i<y+2;i++)
                {
                    if(gridu[x][i]!='.')
                    {
			cout<<"Can't place the ship. try again\n";
                        chk=1;
                        break;
                    }
                }
                if(chk==1)
                    continue;
                else
                {
                    for(i=y;i<y+2;i++)
                    {
                        gridu[x][i]='C';
                        uposc[k][0]=x;
                        uposc[k][1]=i;
                        k++;
                    }
                    break;
                }
            }
        }
        if(strcmp(orin,"v")==0)
        {
            if(x>8 || x<0 || y>9 || y<0)
            {
		cout<<"Can't place the ship. try again\n";
                continue;
            }
             else
            {
                 for(i=x;i<x+2;i++)
                {
                    if(gridu[i][y]!='.')
                    {
			cout<<"Can't place the ship. try again\n";
                        chk=1;
                        break;
                    }
                }
                if(chk==1)
                    continue;
                else
                {
                    for(i=x;i<x+2;i++)
                    {
                        gridu[i][y]='C';
                        uposc[k][0]=i;
                        uposc[k][1]=y;
                        k++;
                    }
                    break;
                }
            }
        }
    }
    system("cls");
    for(i=0;i<10;i++)
    {
        for(j=0;j<30;j++)
	    cout<<" ";
        if(i==0)
        {
	    cout<<"  ";
            for(j=0;j<10;j++)
	    cout<<j<<" ";
	    cout<<"\n";
            for(j=0;j<30;j++)
	    cout<<" ";
        }
	cout<<i<<" ";
	for(j=0;j<10;j++)
	    cout<<gridu[i][j]<<" ";
	cout<<"\n";
    }
    cout<<"Press enter to continue......";
    fflush(stdin);
    gets(tempstr);
    srand(time(NULL));
    /*Aircraft carrier cpu*/
    for(;;)
    {
	if(rand()%2 == 1)
	    strcpy(orin,"h");
	else strcpy(orin,"v");
	x=rand()%10;
	y=rand()%10;
	if(strcmp(orin,"h")==0)
	{
	    if(y>5 || y<0 || x>9 || x<0)
	    {
		continue;
	    }
	    else
	    {
		for(i=y;i<y+5;i++)
		    gridc[x][i]='A';
		break;
	    }
	}
	if(strcmp(orin,"v")==0)
	{
	    if(x>5 || x<0 || y>9 || y<0)
	    {
		continue;
	    }
	     else
	    {
		for(i=x;i<x+5;i++)
		    gridc[i][y]='A';
		break;
	    }
	}
    }
    /*B:Battleship cpu*/
    for(;;)
    {
	chk=0;
	if(rand()%2 == 1)
	    strcpy(orin,"h");
	else strcpy(orin,"v");
	x=rand()%10;
	y=rand()%10;
	if(strcmp(orin,"h")==0)
	{
	    if(y>6 || y<0 || x>9 || x<0)
		continue;
	    else
	    {
		for(i=y;i<y+4;i++)
		{
		    if(gridc[x][i]!='.')
		    {
			chk=1;
			break;
		    }
		}
		if(chk==1)
		    continue;
		else
		{
		    for(i=y;i<y+4;i++)
			gridc[x][i]='B';
		    break;
		}
	    }
	}
	if(strcmp(orin,"v")==0)
	{
	    if(x>6 || x<0 || y>9 || y<0)
	    {
		continue;
	    }
	     else
	    {
		 for(i=x;i<x+4;i++)
		{
		    if(gridc[i][y]!='.')
		    {
			chk=1;
			break;
		    }
		}
		if(chk==1)
		    continue;
		else
		{
		    for(i=x;i<x+4;i++)
			gridc[i][y]='B';
		    break;
		}
	    }
	}
    }
    /*Destroyer cpu*/
    for(;;)
    {
	chk=0;
	if(rand()%2 == 1)
	    strcpy(orin,"h");
	else strcpy(orin,"v");
	x=rand()%10;
	y=rand()%10;
	if(strcmp(orin,"h")==0)
	{
	    if(y>7 || y<0 || x>9 || x<0)
	    {
	       continue;
	    }
	    else
	    {
		for(i=y;i<y+3;i++)
		{
		    if(gridc[x][i]!='.')
		    {
			chk=1;
			break;
		    }
		}
		if(chk==1)
		    continue;
		else
		{
		    for(i=y;i<y+3;i++)
			gridc[x][i]='D';
		    break;
		}
	    }
	}
	if(strcmp(orin,"v")==0)
	{
	    if(x>7 || x<0 || y>9 || y<0)
	    {
		continue;
	    }
	     else
	    {
		 for(i=x;i<x+3;i++)
		{
		    if(gridc[i][y]!='.')
		    {
			chk=1;
			break;
		    }
		}
		if(chk==1)
		    continue;
		else
		{
		    for(i=x;i<x+3;i++)
			gridc[i][y]='D';
		    break;
		}
	    }
	}
    }
    /*Corvette cpu*/
    for(;;)
    {
	chk=0;
	if(rand()%2 == 1)
	    strcpy(orin,"h");
	else strcpy(orin,"v");
	x=rand()%10;
	y=rand()%10;
	if(strcmp(orin,"h")==0)
	{
	    if(y>8 || y<0 || x>9 || x<0)
	    {
		continue;
	    }
	    else
	    {
		for(i=y;i<y+2;i++)
		{
		    if(gridc[x][i]!='.')
		    {
			chk=1;
			break;
		    }
		}
		if(chk==1)
		    continue;
		else
		{
		    for(i=y;i<y+2;i++)
			gridc[x][i]='C';
		    break;
		}
	    }
	}
	if(strcmp(orin,"v")==0)
	{
	    if(x>8 || x<0 || y>9 || y<0)
	    {
		continue;
	    }
	     else
	    {
		 for(i=x;i<x+2;i++)
		{
		    if(gridc[i][y]!='.')
		    {
			chk=1;
			break;
		    }
		}
		if(chk==1)
		    continue;
		else
		{
		    for(i=x;i<x+2;i++)
			gridc[i][y]='C';
		    break;
		}
	    }
	}
    }
    for(i=0;i<10;i++)
    {
	for(j=0;j<10;j++)
	    griduv[i][j]=gridu[i][j];
    }
    for(;;)
    {
	system("cls");
	for(i=0;i<10;i++)
	{
	    for(j=0;j<30;j++)
	    cout<<" ";
	    if(i==0)
	    {
		cout<<"  ";
		for(j=0;j<10;j++)
		cout<<j<<" ";
		cout<<"\n";
		for(j=0;j<30;j++)
		cout<<" ";
	    }
	    cout<<i<<" ";
	    for(j=0;j<10;j++)
		cout<<gridcv[i][j]<<" ";
	    cout<<"\n";
	}
	cout<<"\n";
	for(i=0;i<10;i++)
        {
            for(j=0;j<30;j++)
	    cout<<" ";
	    if(i==0)
	    {
		cout<<"  ";
		for(j=0;j<10;j++)
		cout<<j<<" ";
		cout<<"\n";
		for(j=0;j<30;j++)
		cout<<" ";
	    }
	    cout<<i<<" ";
	    for(j=0;j<10;j++)
		cout<<griduv[i][j]<<" ";
	    cout<<"\n";
	}
	for(;;)
	{
	    cout<<"Enter x and y: ";
	    cin>>x; cin>>y;
	    if(x>9 || x<0 || y>9 || y<0 || gridcv[x][y]=='H' || gridcv[x][y]=='*')
	    {
		cout<<"Invalid input. Try again\n";
		continue;
	    }
	    else
	    {
		if(gridc[x][y]=='A' || gridc[x][y]=='B'||gridc[x][y]=='C'||gridc[x][y]=='D')
		{
		    if(gridcv[x][y]!='H')
		    {
			gridcv[x][y]='H';
			system("cls");
			for(i=0;i<10;i++)
			{
			    for(j=0;j<30;j++)
			    cout<<" ";
			    if(i==0)
			    {
				cout<<"  ";
				for(j=0;j<10;j++)
				    cout<<j<<" ";
				cout<<"\n";
				for(j=0;j<30;j++)
				cout<<" ";
			    }
			    cout<<i<<" ";
			    for(j=0;j<10;j++)
				cout<<gridcv[i][j]<<" ";
			    cout<<"\n";
			}
			cout<<"\n";
			for(i=0;i<10;i++)
			{
			    for(j=0;j<30;j++)
			    cout<<" ";
			    if(i==0)
			    {
				cout<<"  ";
				for(j=0;j<10;j++)
				    cout<<j<<" ";
				cout<<"\n";
				for(j=0;j<30;j++)
				cout<<" ";
			    }
			    cout<<i<<" ";
			    for(j=0;j<10;j++)
				cout<<griduv[i][j]<<" ";
			    cout<<"\n";
			}
			for(i=0;i<10;i++)
			{
			    for(j=0;j<10;j++)
			    {
				if(gridcv[i][j]=='H')
				    win++;
			    }
			}
			if(win==14)
			{
			    cout<<"\nYou win!\n";
			    break;
			}
			win=0;
			continue;
		    }
		    else
		    {
			cout<<"Invalid Input. Try again\n";
			continue;
		    }
		}
		else
		{
		    gridcv[x][y]='*';
		    break;
		}
	    }
	}
	for(;;)
	{
	    probab=rand()%diff;
	    if(probab==diff-3&& a<5)
	    {
		x=uposa[a][0];
		y=uposa[a][1];
		a++;
	    }
	    else if(probab==diff-2 && b<4)
	    {
		x=uposb[b][0];
		y=uposb[b][1];
		b++;
	    }
	    else if(probab==diff-5 && d<3)
	    {
		x=uposd[d][0];
		y=uposd[d][1];
		d++;
	    }
	    else if(probab==diff-6 && c<2)
	    {
		x=uposc[c][0];
		y=uposc[c][1];
		c++;
	    }
	    else
	    {
		x=rand()%10;
		y=rand()%10;
	    }
	    if(x>9 || x<0 || y>9 || y<0 || griduv[x][y]=='H' || griduv[x][y]=='*')
	    {
		continue;
	    }
	    else
	    {
		if(gridu[x][y]=='A' || gridu[x][y]=='B'||gridu[x][y]=='C'||gridu[x][y]=='D')
		{
		    if(griduv[x][y]!='H')
		    {
			griduv[x][y]='H';
			system("cls");
			for(i=0;i<10;i++)
			{
			    for(j=0;j<30;j++)
			    cout<<" ";
			    if(i==0)
			    {
				cout<<"  ";
				for(j=0;j<10;j++)
				    cout<<j<<" ";
				cout<<"\n";
				for(j=0;j<30;j++)
				cout<<" ";
			    }
			    cout<<i<<" ";
			    for(j=0;j<10;j++)
				cout<<gridcv[i][j]<<" ";
			    cout<<"\n";
			}
			cout<<"\n";
			for(i=0;i<10;i++)
			{
			    for(j=0;j<30;j++)
			    cout<<" ";
			    if(i==0)
			    {
				cout<<"  ";
				for(j=0;j<10;j++)
				    cout<<j<<" ";
				cout<<"\n";
				for(j=0;j<30;j++)
				cout<<" ";
			    }
			    cout<<i<<" ";
			    for(j=0;j<10;j++)
				cout<<griduv[i][j]<<" ";
			    cout<<"\n";
			}
			delay(20);
			continue;
		    }
		    else
		    {
			continue;
		    }
		}
		else
		{
		    griduv[x][y]='*';
		    break;
		}
	    }

	}
	for(i=0;i<10;i++)
	{
	    for(j=0;j<10;j++)
	    {
		if(gridcv[i][j]=='H')
		    win++;
	    }
	}
	if(win==14)
	{
	    cout<<"\nYou win!\n";
	    break;
	}
	win=0;
	for(i=0;i<10;i++)
	{
	    for(j=0;j<10;j++)
	    {
		if(griduv[i][j]=='H')
		    win++;
	    }
	}
	if(win==14)
	{
	    cout<<"\nYou lose!\n";
	    break;
	}
	win=0;
    }
    return 0;
}
#include <stdio.h>
#include<string.h>
struct car
{
    char customername[50];
    char customerId[13];
    char carrented[20];
    int n,rent,days;
    int dr,mr,yr,dret,mret,yret;
};
char carbrand[10][20]={"HYUNDAI","SUZUKI","HONDA","TOYOTA","FORD","TATA","MERCEDES","AUDI","ISUZU"};
char carmodel[10][20]={"Veloster","Celerio","Civic","Avalon","Explorer","Safari","E-Class","Q3","D-MAX"};
int carseat[10]={4,4,4,8,4,4,4,8,8,0};
int carrentperday[10]={250,250,250,250,250,250,250,250,250,0};
int carrentpermontly[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int z=0,u=0;
struct car c,ca[10],cr[10],cn={0};
void car_rent()
{
    int i,f;
    int t,days1=0,days2=0,days3=0;
    char ch;
    int j,x;
    printf("WELCOME DEAR CUSTOMER!!! \n");
    display();
    printf("ENTER THE BRAND OF CAR YOU WANT TO RENT: ");
    scanf("%s",c.carrented);
    printf("ENTER DATE ON WHICH YOU WILL TAKE THE CAR(dd mm yyyy): ");
    scanf("%d%d%d",&c.dr,&c.mr,&c.yr);
    printf("ENTER THE DATE ON WHICH YOU WILL RETURN THE CAR(dd mm yyyy): ");
    scanf("%d%d%d",&c.dret,&c.mret,&c.yret);
    printf("LETS CHECK WHETHER THE CAR IS AVAILABLE OR NOT\n");
    //FILE *ptr;
    //ptr=fopen("Car_rent.txt","r");
    //fread(ca,sizeof(ca),1,ptr);
       for(i=0;i<10;i++)
       {
        if(strcmp(ca[i].carrented,c.carrented)==0)
        {
            for(t=0;t<=ca[i].mr;t++)
                days1+=carrentpermontly[t];
            for(t=0;t<=ca[i].mret;t++)
                days2+=carrentpermontly[t];
            for(t=0;t<=c.mr;t++)
                days3+=carrentpermontly[t];
            days1+=ca[i].dr;
            days2+=ca[i].dret;
            days3+=c.dr;
            if((days3-days1)*(days2-days3)>=0)
                f=1;
            else
            f=0;
               if(f==1)
               {
                 printf("Car not available.Are you interested in trying another car?\nIf yes enter Y else enter N\n");
                 getchar();
                 scanf("%c",&ch);
                 //fclose(ptr);
                 if(ch=='y'||ch=='Y')
                    car_rent();
                 else
                 {
                     printf("THANKS FOR COMING!!PLEASE VISIT AGAIN \n\n\n");
                     //fclose(ptr);
                     break;
                 }
               }
        }
        else if(strcmp(ca[i].carrented,c.carrented)!=0 ||f==0)
        {
            printf("CAR AVAILABLE!! \n");
            FILE *fp;
            fp=fopen("Car_rent","a");
            strcpy(ca[u].carrented,c.carrented);
            ca[u].dr=c.dr;
            ca[u].mr=c.mr;
            ca[u].yr=c.yr;
            ca[u].dret=c.dret;
            ca[u].mret=c.mret;
            ca[u].yret=c.yret;
            //u++;
            fwrite(&ca,sizeof(ca),1,fp);
            fclose(fp);
            printf("ENTER YOUR NAME: ");
            scanf("%s",c.customername);
            printf("ENTER YOUR ID NUMBER: ");
            scanf("%s",c.customerId);
            c.n=date(c.yr,c.yret,c.mr,c.mret,c.dr,c.dret);
            for(j=0;j<10;j++)
            {
                x=strcmp(c.carrented,carbrand[j]);
                if(x==0)
                    break;
            }
            c.rent=c.n*carrentperday[j];
            printf("WARNING: If any damage is done to the car then you are entirely responsible. The car has to be returned in its initial condition.\n");
            printf("Details:\n");
            printf("NAME:\t%s\nID:\t%s\nCAR RENTED:\t%s\nNUMBER OF DAYS:\t%d\nRENT:\t%d\n",c.customername,c.customerId,c.carrented,c.n,c.rent);
            //fclose(ptr);
            strcpy(cr[z].customername,c.customername);
            strcpy(cr[z].customerId,c.customerId);
            strcpy(cr[z].carrented,c.carrented);
            cr[z].n=c.n;
            cr[z].rent=c.rent;
            //z++;
            FILE *fptr;
            fptr=fopen("Car_rent.txt","a+");
            fwrite(&cr,sizeof(cr),1,fptr);
            fclose(fptr);
            break;
        }
    }
}
int date(int y1,int y2,int m1,int m2,int d1,int d2)
{
    int i,days1=0,days2=0,days3=0 ;
        for(i=0;i<=m1;i++)
            days1+=carrentpermontly[i];
        for(i=0;i<=m2;i++)
            days2+=carrentpermontly[i];
        days1+=d1;
        days2+=d2;
        return(days2-days1);
}
void car_return()
{
    //FILE *fptr,*nptr;
    char id[13];
    int dd,mm,yy,d,m,y,flag=0,i,j;
    printf("Welcome back dear customer \n");
    printf("Please enter your id\n");
    scanf("%s",id);
    //fptr=fopen("Car_rent","r");
    //fread(cr,sizeof(struct car),1,fptr);
    for(i=0;i<10;i++)
    {
        if(strcmp(cr[i].customerId,id)==0)
        {
            flag=1;
            printf("HELLO %s\n",cr[i].customername);
            printf("For confirmation please enter the date on which you took the car and the date on which you are returning the date in(dd mm yyyy)format.\n");
            scanf("%d%d%d",&dd,&mm,&yy);
            scanf("%d%d%d",&d,&m,&y);
            cr[i].days=date(yy,y,mm,m,dd,d);
            if(cr[i].days>cr[i].n)
            {
                    cr[i].rent+=50*(cr[i].days-cr[i].n);
            }
            printf("FINAL AMOUNT:%d \n",cr[i].rent);
            printf("\n\n");
            break;
        }
    }
    if(flag==0)
           {
             printf("Customer not found\n");
            //fclose(fptr);
           }
        else
        {
            //nptr=fopen("Car_rent","w+");
            //fread(cr,sizeof(cr),1,nptr);
            for(j=0;j<10;j++)
            {
                if(j==i)
                    memset(&cr[j].carrented[0],0,sizeof(cr[j].carrented[0]));
            }
            //fclose(fptr);
            //remove("Car_rent");
            //rename("Car_temp","Car_rent");
           // fclose(nptr);
        }
}
void display()
{
    printf("################################################ \n");
    printf("#    CAR BRAND   #  MODEL  # RENT PER DAY(Php) # \n");
    printf("################################################ \n");
    printf("#     HYUNDAI    # Veloster #      250         # \n");
    printf("#     SUZUKI     #  Celerio #      250         # \n");
    printf("#      HONDA     #  Civic   #      250         # \n");
    printf("#     TOYOTA     #  Avalon  #      250         # \n");
    printf("#      FORD      # Explorer #      250         # \n");
    printf("#      TATA      #  Safari  #      250         # \n");
    printf("#    MERCEDES    #  E-Class #      250         # \n");
    printf("#      AUDI      #  Q3      #      250         # \n");
    printf("#     ISUZU      #  D-MAX   #      250         # \n");
    printf("################################################ \n");
}
int main()
{
    int q,p=0,g,h;
    for(g=1;g<=365;g++)
    {
        for(h=1;h<=10;h++)
        {
            printf("\nIS THERE A NEW CUSTOMER NOW??\nENTER 1 FOR YES AND 0 FOR NO\n");
            scanf("%d",&p);
            if(p==1)
            {
                label:
                printf("\aHI!! ARE YOU HERE TO TAKE THE CAR SERVICE OR RETURN BACK THE CAR? \n 1.WANT TO RENT A CAR.\n 2.WANT TO RETURN THE CAR.\n");
                scanf("%d",&q);
                switch(q)
                {
                    case 1:{car_rent();u++;z++;
                    break;}
                    case 2:car_return();
                    break;
                    default:{printf("Wrong choice!! Try again.\n");
                    goto label;}
                }
            }
        }
        printf("\n\n\nBYE!!Today's work is over\a\n\n\n");
    }
}

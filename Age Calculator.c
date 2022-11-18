// first project in c age calculator update.

/*
Birth[0] = Birth day;
Birth[1] = Birth Month;
Birth[2] = Birth Year;

Today[0] = Present day;
Today[1] = Present Month;
Today[2] = Present Year;
*/

#include <stdio.h>
#include <stdlib.h>

int Year(int *Birth, int *Today)
{
    if (Today[1] < Birth[1])
    {
       	return (Today[2]-1)-Birth[2];
    }	 
    else if(Today[1] == Birth[1] && Today[0] < Birth[0])
    {
        return (Today[2] - 1) - Birth[2];
    }  
    else
    {
     	return Today[2] - Birth[2];
    }

}

int Month(int *Birth, int *Today)
{
    if (Today[1] > Birth[1] && Today[0] > Birth[0])
    {
   		return Today[1] - Birth[1];
    }  
    else if(Today[1] < Birth[1] && Today[0] < Birth[0])
    {
   		return 12 - (Birth[1] - Today[1] + 1);
    }  
    else if(Today[1] > Birth[1] && Today[0] < Birth[0])
    {
       	return Today[1] - Birth[1] - 1;
    }  
    else if(Today[1] < Birth[1] && Today[0] > Birth[0])
    {
    	return 12 - (Birth[1] - Today[1]);
    }   
    else if(Today[1] == Birth[1] && Today[0] < Birth[0])
    {
   		return 11;
   	}  
    else if(Today[1] < Birth[1] && Today[0] == Birth[0])
    {
   		return 12 - (Birth[1] - Today[1]);
   	}
    else if(Today[1] > Birth[1] && Today[0] == Birth[0])
    {
   		return Today[1] - Birth[1];
	   
    }  
    else 
    {
      	return Birth[1] - Today[1];
    } 

}

int Day(int *Birth, int *Today)
{
    if (Today[0] > Birth[0])
    {
  		return Today[0] - Birth[0];
    
    } 
    else if(Today[0] == Birth[0])
    {
   		return Today[0] - Birth[0];
    }  
    else 
    {
   		return 31 - (Birth[0] - Today[0]);
    }

}

int NextMonth(int *Birth,int *Today)
{
    if (Today[1] < Birth[1] && Today[0] < Birth[0])
    {
   		return Birth[1] - Today[1];
    }	
    else if(Today[1] < Birth[1] && Today[0] > Birth[0])
    {
  	    return Birth[1] - Today[1] - 1;
    
    }  
    else if(Today[1] > Birth[1] && Today[0] > Birth[0])
    {
    	return 12 - (Today[1] - Birth[1] + 1);
    }    
    else if(Today[1] > Birth[1] && Today[0] < Birth[0])
    {
   	    return 12 - (Today[1] - Birth[1]);
    }	
    else if(Today[1] == Birth[1] && Today[0] > Birth[0])
    {
   	    return 11;
    }   
    else if (Today[1] > Birth[1] && Today[0] == Birth[0])
    {
   	    return 12 - (Today[1] - Birth[1]);
    }	
    else if(Today[1] < Birth[1] && Today[0] == Birth[0])
    {
   	    return Birth[1] - Today[1];
	}	
    else 
    {
        return Birth[1] - Today[1];
    }

}

int NextDay(int *Birth,int *Today)
{
    if(Today[0] < Birth[0])
    {
        return Birth[0] - Today[0];
    }	
    else if(Today[0] == Birth[0])
    {
   	    return Today[0] - Birth[0];
    }	
    else 
    {
        return 31 - (Today[0] - Birth[0]);
    } 
}

int main()
{
    int *Birth = NULL;
    int *Today = NULL; 
    int i = 0;
    int iDay = 0, iMonth = 0, iYear = 0;
    int iNextMonth = 0, iNextDay = 0;

    Birth = (int *)malloc(sizeof(int) * 2);
    Today = (int *)malloc(sizeof(int) * 2);

    printf("____________________________\n");
    printf("DATE OF BIRTH (DD MM YYYY)\n");
    for(i = 0; i <= 2; i++)
    {
      scanf("%d",&Birth[i]);
    }

    printf("____________________________\n");
    printf("PRESENT DATE (DD MM YYYY)\n");
    for(i = 0; i <= 2; i++)
    {
      scanf("%d",&Today[i]);
    }
    printf("____________________________\n");

    iDay = Day(Birth,Today);
    iMonth = Month(Birth,Today);
    iYear = Year(Birth,Today);

    printf("your age is:\n");

    printf("____________________________\n");

    printf("Years : %d\n",iYear);
    printf("Months : %d\n",iMonth);
    printf("Days : %d\n",iDay);

    printf("____________________________\n");

    printf("NEXT BIRTHDAY :\n");

    printf("____________________________\n");

    iNextMonth = NextMonth(Birth,Today);
    iNextDay = NextDay(Birth,Today);

    printf("Months : %d\n",iNextMonth);
    printf("Days : %d\n",iNextDay);
  
   		
    return 0;		 
}

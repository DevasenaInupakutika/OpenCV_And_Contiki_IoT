/* Secret Santa program */

#include<stdio.h>
#include<string.h>

struct Person{

  char firstname[50];
  char surname[50];

};

int main()
{
   char *names_array[5000];

   static const int max_lines = 200;

   int count = 0;


  FILE *file = fopen("names.txt", "r");

int countNames = 0;
for (int i = 0; i < max_lines; i++)
{
    if (feof(file))
        break;

    fscanf(file, "%c", &(names_array[i]));
    count++;
//   printf("%c",&names_array[i][0]);
     if(!(strcmp(&names_array[i],"\n")))
                countNames++;


}
struct Person people[countNames];
int curcount = 0;
char curString[5000];
for(int i = 0; i < count; i++)
{

   if(!(strcmp(&names_array[i],"\n"))){
       
             strcpy(people[curcount++].surname,curString);
             printf("%s \n",curString);
             strcpy(curString," ");
   }

   else if(!(strcmp(&names_array[i]," "))){
            strcpy(people[curcount].firstname,curString);
            printf("%s \n",curString);
            strcpy(curString," ");
   }
  else
  {
	strcat(curString, &names_array[i]);
    //printf("%s \n",curString);
  }
   
    
 
}
 
printf("%d",curcount);
    
    for (int i = 0;i<curcount;i++){
        printf("%s ",people[i].firstname);
        printf("%s \n",people[i].surname);
    }
    
//printf("%s",people[0].firstname);
//printf("%s",people[0].surname);


/*for (int j = 0; j < count ; j++ )
    {
        printf("%c",names_array[j] );
    }*/
fclose(file);
  
return 0;
}


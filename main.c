#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void check_rotation(char w1[20],char w2[20]);

int main()
{
    int exit=0;
    while(exit != 1){
        puts("You should enter 2 words");
        char w1[20];
        char w2[20];
        printf("Please enter first word:");
        scanf("%s",w1);
        printf("Please enter second word:");
        scanf("%s",w2);
        check_rotation(w1,w2);
        puts("Do You want to exit?");
        puts("if yes press '1' if no press '0'");
        scanf("%d",&exit);
    }
    return 0;
}

void check_rotation(char w1[20],char w2[20]){
    char s1[40];
    strcpy(s1,w1);
    strcat(s1,w1);
    char s2[20];
    strcpy(s2,w2);
    // now we use s1 and s2
    int i=0;
    int j=0;
    int start=0;
    int last1=strlen(s1)-1;
    int last2=strlen(s2)-1;
    int end=last2;
    for (i=0;end<=last1;end++,start++)
    {
        if(s1[end]==s2[last2])
            for(j=0,i=start;j<last2&&s1[i]==s2[j];i++,j++);
        if(j==last2)
        {
            puts("Rotation is True");
            return;
        }

    }
    puts("Rotation is False");
    return;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n,i,j,ch,p,flag;
    char *s[10],t[10],name[10];
    printf("enter no of students:");
    scanf("%d",&n);
    fflush(stdin);
    for(i=0;i<n;i++)
    {
        printf("enter name of student %d",i+1);
        gets(t);
        s[i]=(char *)malloc(sizeof(strlen(t)+1));
        strcpy(s[i],t);
    }
    while(1)
    {
        printf("enter case number");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter name to insert");
                    scanf("%s",name);
                    printf("enter position");
                    scanf("%d",&p);
                    for(i=n-1;i>=p-1;i--)
                    {
                        s[i+1]=s[i];
                    }
                    s[p-1]=(char *)malloc(sizeof(strlen(name)+1));
                    strcpy(s[p-1],name);
                    n++;
                    for(i=0;i<n;i++)
                    {
                        printf("name of student%d",i+1);
                        printf("%s\n",s[i]);
                    }
                    break;
            case 2:printf("enter a name to deleted");
                    scanf("%s",name);
                    flag=0;
                    for(i=0;i<n;i++)
                    {
                        if(strcmp(s[i],name)==0)
                        {
                            for(j=i+1;j<n;j++)
                            {
                                s[j-1]=s[j];
                            }
                            n--;
                            flag=1;
                        }
                    }
                if(flag==0)
                    printf("name does not exist\n");
                for(i=0;i<n;i++)
                {
                    printf("name of student %d",i+1);
                    printf("%s\n",s[i]);
                }
                break;
        }
    }
    return 0;
}

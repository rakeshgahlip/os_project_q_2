#include<stdio.h>
 
int main()
{
    int p[20],s[20],i,j,n,loc,temp;
    printf("Enter Total Number of students:");
    scanf("%d",&n);
 
    printf("\nEnter  total gifts puchased by each student\n");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]\n",i+1);
        printf("total gifts purchased:");
        scanf("%d",&s[i]);
        p[i]=i+1;          
    }
 
   
    for(i=0;i<n;i++)
    {
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(s[j]>s[loc])
                loc=j;
        }
 
        temp=s[i];
        s[i]=s[loc];
        s[loc]=temp;
 
        temp=p[i];
        p[i]=p[loc];
        p[loc]=temp;
    }
 
    printf("\norder of billing");
    for(i=0;i<n;i++)
    {
      
        printf("\ns[%d]",p[i]);
    }
 

 
    return 0;
}

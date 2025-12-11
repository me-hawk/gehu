#include<stdio.h>
int main()
{
    int frames,n,pages[100];
    printf("enter frames :");
    scanf("%d",&frames);
    printf("enter no. of requests:");
    scanf("%d",&n);
    printf("enter reference string");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&pages[i]);
    }
    int frame[frames],index=0,faults=0;
    for(int i=0;i<frames;i++)
    {
        frame[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        int found=0;
        for(int j=0;j<frames;j++)
        {
            if(frame[j]==pages[i])
            {
                found=1;
                break;
            }
        }
        if(!found)
        {
            frame[index]=pages[i];
            index=(index+1)%frames;
            faults++;
        }
    }
    printf("no. of page faults=%d",faults);
}

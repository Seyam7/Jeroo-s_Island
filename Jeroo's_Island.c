#include<stdio.h>
int main()
{
    printf("                               JEROO'S WORLD\n");
    printf("-----------------------------------------------------------------------------\n");
    int m,n,k;
    z:
    printf("Enter size of the matrix: ");
    scanf("%d %d",&m,&n);
    for(k=1;k<=1;k++)
    {
        if(m==0 && n==0)
        {
            break;
        }
        else
        {
            int i,j,x,y,p,q;
            char a[m][n];
            printf("Enter location of Jeroo: ");
            scanf("%d %d",&x,&y);
            printf("Enter location of the flower: ");
            scanf("%d %d",&p,&q);
            if(x>=m || x>=n || y>=m || y>=n || p>=m || p>=n || q>=m || q>=n)
            {
                printf("\nInvalid Location Input\n");
            }
            else
            {
                printf("\n\t\t\t\tTHE ISLAND\n\n");
                for(i=0;i<m;i++)
                {
                     printf("\t\t\t");
                     for(j=0;j<n;j++)
                     {
                          if(x==i && y==j)
                          {
                               a[i][j]='J';
                               printf("%c     ",a[i][j]);
                          }
                          else if(p==i && q==j)
                          {
                               a[i][j]='P';
                               printf("%c     ",a[i][j]);
                          }
                          else
                          {
                               a[i][j]='0';
                               printf("%c     ",a[i][j]);
                          }
                     }
                     printf("\n\n");
                }
                printf("Movement of Jeroo: \n");
                if(y<q)
                {
                    for(i=y;i<q;i++)
                    {
                         printf("Right\t");
                    }
                }
                if(x<p)
                {
                    for(i=x;i<p;i++)
                    {
                          printf("Down\t");
                    }
                }
                if(y>q)
                {
                    for(i=q;i<y;i++)
                    {
                          printf("Left\t");
                    }
                }
                if(x>p)
                {
                    for(i=p;i<x;i++)
                    {
                          printf("Up\t");
                    }
                }
            }
            printf("\n\n");
            goto z;
        }
    }
    return 0;
}

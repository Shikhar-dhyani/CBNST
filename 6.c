//gauss elimination

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    float a[n][n+1],backs[n];
    printf("Enter the matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            scanf("%f",&a[i][j]);
        }
    } 

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        { 
              float r=a[i][j]/a[j][j];
              for(int k=0;k<n+1;k++)
                {
                    a[i][k]=a[i][k]-(r*a[j][k]);
                }
        }
    } 

    printf("\n\nUpper Triangular Matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            printf("%6.0f ",a[i][j]);
        } 
        printf("\n");
    }

    backs[n-1]=a[n-1][n]/a[n-1][n-1];

    for(int i=n-2;i>=0;i--)
    {
        float s=0;
        for(int j=i+1;j<n;j++)
        {
            s+=a[i][j]*backs[j];
        } 
        backs[i]=(a[i][n]-s)/a[i][i];

    }

    printf("\nThe Values of unknowns are:\n");
    for(int i=0;i<n;i++)
        printf("x%d: %6.0f\n",i,backs[i]);
    
    
    return 0;
}


// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     float a[n][n+1],back[n];
    
//     for(int i=0;i<n;i++) for(int j=0;j<=n;j++) scanf("%f",&a[i][j]);
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++)
//         {
//             float r=a[i][j]/a[j][j];

//             for(int k=0;k<=n;k++)
//             {
//                 a[i][k]=a[i][k]-(r*a[j][k]);
                
//             }
//         }
//     }
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=n;j++) printf("%6.0f  ",a[i][j]);
//         printf("\n");
//     } 
    
//     back[n-1]=a[n-1][n]/a[n-1][n-1];
    
//     for(int i=n-2;i>=0;i--)
//     {
//         float s=0;
//         for(int j=i+1; j<=n; j++){
//             s+=a[i][j]*back[j];
//         }
//         back[i]=(a[i][n]-s)/a[i][i];
//     }
    
//     for(int i=0;i<n;i++)
//     printf("%6.0f ",back[i]);
//     return 0;
// }

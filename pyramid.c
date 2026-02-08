#include<stdio.h>
int main() 
{   
    int choice, h;
    char schoice;
    
    label:
    printf("select your choice of star pyrimid \n [0].upward pyramid \n [1].downward pyramid \n");
    scanf("%d", &choice);
    
    switch (choice)
    {
        case 0:
            
            phere :
            printf("\n do you want the pyramid to be\n a) left aligned\n b) right aligned\n c) centrally aligned\n");
            scanf(" %c", &schoice);
        
            switch (schoice)
            {
                case 'a' :
                    printf("enter the value for height \n");
                    scanf("%d",&h);
                    for (int a = 0; a < h; a++)
                    {
                        for (int b = 0; b <= a; b++)
                        {
                            printf("*");
                        }
                        printf("\n");
                    }
                    return 0;

                break;

                case 'b' :
                    printf("enter the value for height \n");
                    scanf("%d",&h);
                    for (int a = 0; a < h; a++)
                    {
                        for ( int b = h; b > a; b--)
                        {
                            printf(" ");
                        }
                        for (int c = 0; c <= a; c++)
                        {
                            printf("*");
                        }
                        printf("\n");
                    }
                    return 0;         
                
                break;

                case 'c' :
                    printf("enter the value for height \n");
                    scanf("%d",&h);
                    for (int a = 0; a < h; a++)
                    {
                        for ( int b = h; b > a; b--)
                        {
                            printf(" ");
                        }
                        for (int c = 0; c <= a; c++)
                        {
                            printf("* ");
                        }
                        printf("\n");
                    }
                    return 0;         
                    
                break;

                default:
            
                break;
            }
            goto phere;
        
        break;
                        
                    
        case 1:
            yhere :
            printf("\n do you want the pyramid to be\n a) left aligned\n b) right aligned\n c) centrally aligned\n");
            scanf(" %c", &schoice);    

            switch (schoice)
            {
                case 'a' :
                    printf("enter the value for pyramid height \n");
                    scanf("%d",&h);
                    for (int a = 0; a < h; a++)
                    {
                        for (int b = h; b > a ; b--)
                        {
                            printf("*");
                        }
                        printf("\n");
                    }
                    return 0;
                break;

                
                case 'b':
                    printf("enter the value for pyramid height \n");
                    scanf("%d",&h);
                    for (int a = 0; a < h; a++)
                    {
                        for(int b = h; b > a; b--)
                        {
                            printf("*");
                        }
                        printf("\n");
                        for (int c = 0; c <= a ; c++)
                        {
                            printf(" ");
                        }
                        
                    }
                    return 0;
                break;

                case 'c' :
                 printf("enter the value for pyramid height \n");
                    scanf("%d",&h);
                    for (int a = 0; a < h; a++)
                    {
                        for(int b = h; b > a; b--)
                        {
                            printf("* ");
                        }
                        printf("\n");
                        for (int c = 0; c <= a ; c++)
                        {
                            printf(" ");
                        }
                        
                    }
                    return 0;   
                break;
                
                default:
                break;
            }
            goto yhere;
        break;
        
        default:
            printf("\ninvlaid choice\n\n");
            goto label;
        break;
    }
}   
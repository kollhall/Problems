#include <iostream>

using namespace std;
int main()
{
    int N, Nv;

    scanf("%d", &N);

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &Nv); 
        if(Nv == 0)
        {
            printf("NULL\n");
        }
            else if(Nv % 2 == 0 )
            {
                if(Nv > 0)
                {
                    printf("EVEN POSITIVE\n");
                }
                    else if(Nv < 0)
                    {
                        printf("EVEN NEGATIVE\n");
                    }
            }
                else
                {
                    if(Nv > 0)
                    {
                        printf("ODD POSITIVE\n");
                    }
                        else if(Nv < 0)
                        {
                            printf("ODD NEGATIVE\n");
                        }
                }
    }

    return 0;
}
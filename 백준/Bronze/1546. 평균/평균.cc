#include <stdio.h>

int main()
{
    int count;
    scanf("%d", &count);
    float* score = new float[count];
    
    for(int i = 0; i < count; i++)
    {
        scanf("%f ", &score[i]);
    }
    float big = score[0];
    for(int i = 1; i < count; i++)
    {
        if(big < score[i])
            big = score[i];
    }
    float sum = 0;
    for(int i = 0; i < count; i++)
    {
        score[i] = score[i] / big * 100;
        sum += score[i];
    }
    printf("%f", sum/count);
    
    return 0;
    
}
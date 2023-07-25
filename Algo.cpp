#include "Header.hpp"

struct Limit {
    int min;
    int max;
};

int cardChoice(int row1, int row2, int row3)
{
    Limit limit;

    if (row1 == 1)
    {
        limit.min = 0;
        limit.max = 6; 
    }
    else if(row1 == 2)
    {
        limit.min = 7;
        limit.max = 13; 
    }
    else
    {
        limit.min = 14;
        limit.max = 20; 
    }
    // printf("[%d, %d]\n", limit.min, limit.max);
    if (row2 == 1)
    {
        if (row1 == 1)
            limit.max -= 4;
        else
            limit.max -= 5;
    }
    else if (row2 == 2)
    {
        if (row1 == 2)
        {
            limit.min += 2;
            limit.max -= 2;
        }
        else if (row1 == 3)
        {
            limit.min += 3;
            limit.max -= 2;
        }
        else
        {
            limit.min += 2;
            limit.max -= 3;
        }
    }
    else
    {
        if (row1 == 3)
            limit.min += 4;
        else
            limit.min += 5;
    }
    // printf("[%d, %d]\n", limit.min, limit.max);
    if (row3 == 1)
    {
        if (row1 == 1 || row2 != 3)
            limit.max -= 2;
        else if((row1 == 3 && row2 == 1) || (row1 = 1 && row2 == 3))
            limit.min += 1;
        else
            limit.max -= 1;
    }
    else if (row3 == 2)
    {
        if ((row2 == 1 && row1 == 2) || (row2 == 2 && row1 == 3))
        {
            limit.min += 1;
        }
        else if ((row2 == 2 && row1 == 1) || (row2 == 3 && row1 == 2))
        {
            limit.max -= 1;
        }
        else
        {
            limit.min += 1;
            limit.max -= 1;
        }
    }
    else
    {
        if ((row2 == 1 && row1 == 3) || (row2 == 3 && row1 == 1))
            limit.max -= 1;
        else if ((row2 == 2 && row1 == 1) || (row2 == 3 && row1 == 2))
            limit.min += 1;
        else
            limit.min += 2;
    }
    // if (row3 == 1)
    //     {
    //         if (row1 = 1)
    //             limit.max -= 2;
    //         else
    //             limit.max -= 1;
    //     }
    // else if (row3 == 2)
    // {
    //     if (row1 == 1)
    //     {
    //         limit.min += 1;
    //         limit.max -= 1;
    //     }
    //     else if (row1 == 3)
    //     {
    //         limit.min += 1;
    //     }
    //     else
    //     {
    //         limit.min += 1;
    //     }
    //     // limit.min += 1;
    //     // limit.max -= 1;
    // }
    // else
    // {
    //     if (row1 = 1)
    //         limit.min += 2;
    //     else
    //         limit.min += 1;
    // }
    // printf("[%d, %d]\n", limit.min, limit.max);
    return ((limit.max + limit.min)/2);
}
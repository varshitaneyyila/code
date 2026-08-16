int minEatingSpeed(int* piles, int pilesSize, int h)
{
    int l = 1;
    int r = piles[0];

    // Find maximum pile
    for(int i = 1; i < pilesSize; i++)
    {
        if(piles[i] > r)
            r = piles[i];
    }

    int ans = r;

    while(l <= r)
    {
        int k = (l + r) / 2;

        long long hours = 0;

        for(int i = 0; i < pilesSize; i++)
        {
            hours += (piles[i] + k - 1) / k;
        }

        if(hours <= h)
        {
            ans = k;
            r = k - 1;
        }
        else
        {
            l = k + 1;
        }
    }

    return ans;
}
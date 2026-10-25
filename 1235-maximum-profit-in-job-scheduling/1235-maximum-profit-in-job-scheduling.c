typedef struct {
    int start;
    int end;
    int profit;
} Job;

int compare(const void *a, const void *b) {
    Job *x = (Job *)a;
    Job *y = (Job *)b;
    return (x->end > y->end) - (x->end < y->end);
}

int binarySearch(Job jobs[], int index) {
    int low = 0, high = index - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (jobs[mid].end <= jobs[index].start) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int jobScheduling(int* startTime, int startTimeSize,
                  int* endTime, int endTimeSize,
                  int* profit, int profitSize) {
    int n = startTimeSize;

    Job jobs[n];

    for (int i = 0; i < n; i++) {
        jobs[i].start = startTime[i];
        jobs[i].end = endTime[i];
        jobs[i].profit = profit[i];
    }

    qsort(jobs, n, sizeof(Job), compare);

    int dp[n];

    for (int i = 0; i < n; i++) {
        dp[i] = jobs[i].profit;

        int prev = binarySearch(jobs, i);

        if (prev != -1) {
            dp[i] += dp[prev];
        }

        if (i > 0 && dp[i - 1] > dp[i]) {
            dp[i] = dp[i - 1];
        }
    }

    return n > 0 ? dp[n - 1] : 0;
}
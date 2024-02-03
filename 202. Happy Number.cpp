long long calculate(long long s) {
    long long sum{ 0 };
    while (s > 0) {
        sum += pow((s % 10), 2);
        s /= 10;
    }
    return sum;
}

bool isHappy(long long start) {
    unordered_set<long long> seen;
    while (start != 1 && seen.find(start) == seen.end()) {
        seen.insert(start);
        start = calculate(start);
    }
    return start == 1;
}

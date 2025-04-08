class Solution {
    public long solution(long price, long money, long count) {
        return Math.max((count + 1) * count * price / 2 - money, 0);
    }
}
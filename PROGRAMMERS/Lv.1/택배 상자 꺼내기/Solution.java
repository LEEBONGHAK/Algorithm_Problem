class Solution {
    public int solution(int n, int w, int num) {
        // 전체 상자 n개를 한 층에 w개씩 놓을 때, 전체 층 수 계산 (마지막 층에 남은 상자가 있으면 층 추가)
        int totalLevel = n / w;
        if (n % w > 0) totalLevel++;

        // 목표 상자 num이 위치한 층 계산 (1-indexed로 처리: 나머지가 있으면 다음 층)
        int targetLevel = num / w;
        if(num % w > 0) targetLevel++;

        // 목표 상자가 최상단 층에 위치하면, 꺼내야 하는 상자는 자기 자신뿐
        if(totalLevel == targetLevel) return 1;

        // 배치 방향 판단:
        // 짝수 층은 오른쪽에서 왼쪽으로 상자가 놓임, 홀수 층은 왼쪽에서 오른쪽으로 상자가 놓임.
        // 최상단 층의 배치 방향을 판단 (totalLevel이 짝수이면 역방향)
        boolean isTopReverse = totalLevel % 2 == 0;
        // 목표 층의 배치 방향 판단
        boolean isTargetReverse = targetLevel % 2 == 0;

        // 목표 상자가 해당 층 내에서 차지하는 위치 계산
        // num % w가 0이면, 상자는 해당 층의 마지막 위치에 있음.
        int targetLocation = num % w;
        if (targetLocation == 0) {
            // 배치 방향에 따라 위치값 설정:
            // - 역방향(오른쪽에서 왼쪽)인 경우: 마지막 위치(w)
            // - 순방향(왼쪽에서 오른쪽)인 경우: 첫 번째 위치(1)
            if(!isTargetReverse) targetLocation = 1;
            else targetLocation = w;
        }
        
        // 최상단 층의 마지막 상자 위치 (n % w가 0이면 최상단 층이 꽉 찬 상태)
        int topLocation = n % w;

        // 두 층(목표 층과 최상단 층)의 배치 방향이 같은 경우와 다른 경우로 분기
        if (isTargetReverse == isTopReverse) {
            // 배치 방향이 같은 경우:
            // 최상단 층이 꽉 차있거나(topLocation == 0) 채워진 상자 수가 목표 상자 위치 이상이면
            // 목표 상자 위에 추가 상자가 한 개 더 있음.
            if (topLocation == 0 || topLocation >= targetLocation) {
                return totalLevel - targetLevel + 1;
            } else {
                return totalLevel - targetLevel;
            }
        } else {
            // 배치 방향이 다른 경우:
            // 최상단 층이 꽉 차있거나(topLocation == 0) 최상단 층에 채워진 상자의 위치가
            // (w - topLocation) 값이 목표 상자 위치보다 작거나 같으면 추가 상자가 있음.
            if (topLocation == 0 || w - topLocation <= targetLocation) {
                return totalLevel - targetLevel + 1;
            } else {
                return totalLevel - targetLevel;
            }
        }
    }
}

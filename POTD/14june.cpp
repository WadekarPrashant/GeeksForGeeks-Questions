class Solution {
    static long maxDiamonds(int[] A, int N, int K) {
        PriorityQueue<Integer> q = new PriorityQueue<>(Collections.reverseOrder());
        for(int i: A){
            q.add(i);
        }
        long res = 0;
        while(K>0){
            int x = q.poll();
            res += x;
            q.add(x/2);
            K--;
        }
        return res;
    }
}

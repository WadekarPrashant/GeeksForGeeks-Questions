class Solution {
    static int leastInterval(int N, int K, char tasks[]) {
        // code here
        int freq[] = new int[26];
        for(int i= 0;i < N;i++){
            freq[tasks[i] - 'A']++;
        }
        Arrays.sort(freq);
        int maxFreq = freq[25];
        int idleTime = (maxFreq - 1) *K;
        
    for(int i = 24; i >= 0; i--){
        idleTime -= Math.min(maxFreq - 1,  freq[i]);
    }
    idleTime = Math.max(0, idleTime);
    return idleTime + N;
    }
}

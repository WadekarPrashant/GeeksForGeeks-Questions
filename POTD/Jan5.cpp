class Solution {
    public static String longestString(int n, String[] words) {
         // code here
        Map<String,Boolean> m = new HashMap<>();
        Map<Integer,Boolean> mp = new HashMap<>();
        List<String> res = new ArrayList<>();
        int sz=0;
        
        for(int i=0;i<n;i++){
            String s="";
            s=s+words[i];
            m.put(s,true);
        }
        for(int i=0;i<n;i++){
            String s="";
            boolean flag=false;
            String s1=words[i];
            for(int j=0;j<s1.length();j++){
                s+=s1.charAt(j);
                if(!m.containsKey(s)){
                    flag=true;
                    break;
                }
            }
            if(!flag) {
                if(sz <= s1.length()){
                     sz=s1.length();
                     mp.put(i,true);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(mp.containsKey(i) && sz==words[i].length()){
                res.add(words[i]);
            }
        }
        if(res.size()==0){
            return "";
        }
        Collections.sort(res);
        return res.get(0);
    }
}
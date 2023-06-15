class Solution{
    static public String help(String s, int left, int right){
	    if (left > right) return null;
	    while (left >= 0 && right < s.length() && s.charAt(left) == s.charAt(right)){
		    left--;
		    right++;
	    }
	return s.substring(left + 1, right);
    }

    static String longestPalin(String s){
        if (s == null) return null;
	    String max = s.substring(0, 1);
	    for (int i = 0; i < s.length() - 1; i++){
		    String p = help(s, i, i);
		    if (p.length() > max.length()){
			    max = p;
		    }
		p = help(s, i, i + 1);
		if (p.length() > max.length()){
			max = p;
		}
	}
	return max;
    }
}

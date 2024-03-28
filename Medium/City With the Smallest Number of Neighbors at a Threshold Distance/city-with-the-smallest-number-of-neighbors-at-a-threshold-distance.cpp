








class Solution {      int findCity(int n, int m, int[][] edges,int distanceThreshold)      {          //code here         int[][] dist=new int[n][n];        for(int i=0;i<n;i++){            for(int j=0;j<n;j++) dist[i][j]=Integer.MAX_VALUE;        }        for(int i=0;i<edges.length;i++){            dist[edges[i][0]][edges[i][1]]=edges[i][2];            dist[edges[i][1]][edges[i][0]]=edges[i][2];        }
        for(int i=0;i<n;i++) dist[i][i]=0;        for(int k=0;k<n;k++){            for(int i=0;i<n;i++){                for(int j=0;j<n;j++){                    if(dist[i][k]==Integer.MAX_VALUE||dist[k][j]==Integer.MAX_VALUE) continue;                    dist[i][j]=Math.min(dist[i][j],dist[i][k]+dist[k][j]);                }            }        }        int cnt=n;        int ans=-1;        for(int i=0;i<n;i++){            int c=0;            for(int j=0;j<n;j++){                if(dist[i][j]<=distanceThreshold) c++;            }            if(c<=cnt){                cnt=c;                ans=i;            }        }        return ans;      }}









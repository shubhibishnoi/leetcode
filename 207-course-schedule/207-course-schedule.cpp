class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int noVisited = 0;
        queue<int> q;
        vector<int> inDegree(numCourses);
        vector<list<int>> adj(numCourses); 
        
        for(auto course: prerequisites)
            adj[course[1]].push_back(course[0]); //creating graph
        
        for(int i=0; i<numCourses; ++i)
            for(int v: adj[i]) 
                inDegree[v]++; // finding indegree of nodes 
        for(int i=0; i<numCourses; ++i)
            if(inDegree[i] == 0)
                q.push(i);
        while(!q.empty()){
            ++noVisited;
            int curr = q.front();
            q.pop();
            for(int i: adj[curr]){
                inDegree[i]--; // reducing indegree pf nbrs since there one conecton got removed
                if(inDegree[i] == 0)
                    q.push(i);
            }
        }
        return noVisited == numCourses;
    }
};
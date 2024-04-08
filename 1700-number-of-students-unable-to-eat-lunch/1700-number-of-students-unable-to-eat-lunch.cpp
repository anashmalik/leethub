class Solution {
public:
    int countStudents(vector<int>& s, vector<int>& sw) {
        int n=s.size();
        int i=0;
        queue<int>q;
        stack<int>st;
        for( i=0;i<n;i++){
            q.push(s[i]);
            st.push(sw[n-i-1]);
        }
        i=0;
        while(i!=q.size() and q.size()){
           // cout<<q.front()<<" "<<st.top()<<endl;
            if(q.front()==st.top()){
                q.pop();
                st.pop();
                i=0;
            }
            else{
                q.push(q.front());
                q.pop();
                i++;
            }
        }
       
        return st.size();
    }
};
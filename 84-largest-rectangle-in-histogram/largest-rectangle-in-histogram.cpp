class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int maxarea =0;
        int n = heights.size();
        for(int i=0;i<n;i++){
            while(!st.empty()&& heights[st.top()]>heights[i]){ // we compute for st.top() element
                int el = st.top();
                st.pop();
                int nse = i;
                int pse = st.empty() ?-1:st.top();
                maxarea = max(maxarea,heights[el]*(nse-pse-1));
            }
                st.push(i);
        }
            while(!st.empty()){ // bache huye element keliye jiskaq for loop me ans nhi compute kr paye 
                int nse = n;
                int el = st.top();
                st.pop();
                int pse = st.empty() ?-1:st.top();
                maxarea = max(maxarea,heights[el]*(nse-pse-1));
            }
        return maxarea;
    }
};

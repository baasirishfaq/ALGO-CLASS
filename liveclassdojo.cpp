class MinStack
{
public:
    vector<int> st;
    vector<int> minst;

    MinStack() {}

    void push(int val)
    {
        st.push_back(val);

        if (minst.empty() || val <= minst.back())
        {
            minst.push_back(val);
        }
    }

    void pop()
    {
        if (!minst.empty() && !st.empty() && st.back() == minst.back())
        {
            minst.pop_back();
        }
        if (!st.empty())
        {
            st.pop_back();
        }
    }

    int top()
    {
        if (!st.empty())
        {
            return st.back();
        }
        return -1;
    }

    int getMin()
    {
        if (!minst.empty())
        {
            return minst.back();
        }
        return -1;
    }
};
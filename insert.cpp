stack<int> insertAtBottom(stack<int> St,int X){
        stack<int> s2;
        while(!St.empty()){
        s2.push(St.top());
        St.pop();
        }
        St.push(X);
        while(!s2.empty()){
            St.push(s2.top());
            s2.pop();
        }
        return St;
    }

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> score;

        for (string op : operations) {
            if (op == "+") {
                int top1 = score.top(); score.pop();
                int top2 = score.top();
                score.push(top1);
                score.push(top1 + top2);
            } else if (op == "D") {
                score.push(score.top() * 2);
            } else if (op == "C") {
                score.pop();
            } else {
                score.push(stoi(op));
            }
        }

        int total = 0;
        while (!score.empty()) {
            total += score.top();
            score.pop();
        }

        return total;
    }
};

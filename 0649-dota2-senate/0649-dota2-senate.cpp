
class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> radiant, dire;
        int n = senate.size();
        
        // Fill the queues with the positions of 'R' and 'D'
        for (int i = 0; i < n; i++) {
            if (senate[i] == 'R')
                radiant.push(i);
            else
                dire.push(i);
        }
        
        // Process banning rounds
        while (!radiant.empty() && !dire.empty()) {
            int rIndex = radiant.front();
            int dIndex = dire.front();
            radiant.pop();
            dire.pop();
            
            // The senator with the lower index bans the other
            if (rIndex < dIndex) {
                radiant.push(rIndex + n); // Reinsert 'R' with updated position
            } else {
                dire.push(dIndex + n);    // Reinsert 'D' with updated position
            }
        }
        
        // Determine which party has remaining senators
        return radiant.empty() ? "Dire" : "Radiant";
    }
};

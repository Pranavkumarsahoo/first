
class Solution {
public:
    double angleClock(int hour, int minutes) {
        double ha = (hour % 12) * 30 + minutes * 0.5;
        int ma = minutes * 6;
        double ans = abs(ha - ma);
         return min(ans, 360 - ans);
    }
};

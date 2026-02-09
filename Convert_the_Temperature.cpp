class Solution {
public:
    vector<double> convertTemperature(double celsius) {
       vector<double> ans;
        double kn,ft;
        kn=celsius+273.15;
        ft=celsius*1.80+32.00;
        ans.push_back(kn);
        ans.push_back(ft);
        return ans;
    }
};

//also we can use
//return {celsius + 273.15, celsius * 1.8 + 32.0};
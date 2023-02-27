class Solution {
public:
    vector<double> convertTemperature(double celsius) {
     
        // vector<double>ans;
        
      double kelvin = celsius + 273.15;
      double Fahrenheit  = celsius * 1.80 + 32.00;
        
       // ans = kelvin Fahrenheit;
            return {kelvin,Fahrenheit};

    }
};
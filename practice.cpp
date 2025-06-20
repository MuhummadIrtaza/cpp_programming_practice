#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int>road_speed(100);
    int idx = 0;
    for(int i=0; i<n; i++){
        int length, speed;
        cin >> length >> speed;
        for(int j=0; j<length; j++){
            road_speed[idx++] = speed;
        }
    }

    vector<int>bessie_speed(100);
    idx = 0;
    for(int i=0; i<k; i++){
        int length, speed;
        cin >> length >> speed;
        for(int j=0; j<length; j++){
            bessie_speed[idx++] = speed;
        }
    }

    int over_speed_max = 0;
    for(int i = 0; i<100; i++){
        if (bessie_speed[i] > road_speed[i]){
            over_speed_max = max(over_speed_max, bessie_speed[i]- road_speed[i]);
    }}

    cout << "\n";
    cout << over_speed_max << "\n";
}
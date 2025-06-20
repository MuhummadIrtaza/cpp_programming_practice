#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

/*
The road is divided into N segments, each described by a positive integer length in miles, as well as an integer speed limit in the range 1…100 miles per hour. As the road is 100 miles long, the lengths of all N

segments add up to 100. For example, the road might start with a segment of length 45 miles, with speed limit 70, and then it might end with a segment of length 55 miles, with speed limit 60.

Bessie's journey can also be described by a series of segments, M
of them. During each segment, she travels for a certain positive integer number of miles, at a certain integer speed. For example, she might begin by traveling 50 miles at a speed of 65, then another 50 miles at a speed of 55. The lengths of all M

segments add to 100 total miles. Farmer John's tractor can drive 100 miles per hour at its fastest.

Given the information above, please determine the maximum amount over the speed limit that Bessie travels during any part of her journey. */
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
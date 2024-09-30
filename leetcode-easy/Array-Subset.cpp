string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int, int> map;
    string ans = "Yes";
    
    for(int i=0; i<n; i++){
        map[a1[i]]++;
    }
    for(int i=0; i<m; i++){
        // if element is not found
        if(map.find(a2[i]) == map.end()){
            ans = "No";
            break;
        }
        else{
            // if frequency is greater than 0 in map for element for which i am finding
            if(map[a2[i]] > 0){
                map[a2[i]]--;
            }else{
                ans = "No";
                break;
            }
        }
    }
    return ans;
}
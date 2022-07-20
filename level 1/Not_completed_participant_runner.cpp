#include <string>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    for (int i = 0; i < completion.size(); i++){
        for (int j = 0; j < participant.size(); j++){
            if(completion[i] == participant[j]){
                participant[j] = "NULL";
                break;
            }
        }
    }
    for (int i = 0; i < participant.size(); i++){
        if (participant[i] != "NULL"){
            answer = participant[i];
            break;
        }
    }
    return answer;
}

// Improving Speed

#include <string>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    for (int i = 0; i < participant.size(); i++){
        if (participant[i] != completion[i]){
            answer = participant[i];
            break;
        }
    }
    return answer;
}
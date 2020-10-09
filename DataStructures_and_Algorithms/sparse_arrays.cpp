#include <bits/stdc++.h>

using namespace std;

// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {

    vector<int> result;

    int len_str = strings.size();
    int len_que = queries.size();

    for(int i=0; i<len_que; i++){

        int count=0;

        for(int j=0; j<len_str; j++){

            if(strings[j]==queries[i]){
                count++;
            }
        }
        result.push_back(count);
    }

    return result;

}

int main()
{
    int strings_count;
    cin >> strings_count;

    vector<string> strings(strings_count);

    for (int i = 0; i < strings_count; i++) {
        string strings_item;
        cin>>strings_item;

        strings[i] = strings_item;
    }

    int queries_count;
    cin >> queries_count;

    vector<string> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        string queries_item;
        cin>>queries_item;

        queries[i] = queries_item;
    }

    vector<int> res = matchingStrings(strings, queries);

    int r_size = res.size();

    for(int i = 0; i < r_size; i++) {

        cout<< res[i];

        if (i != r_size - 1) {
            cout << "\n";
        }
    }

    cout<< "\n";

    return 0;
}

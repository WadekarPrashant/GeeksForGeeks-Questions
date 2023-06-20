vector<int> duplicates(int arr[], int n) {

        // code here

        vector<int> arr1;

        arr1.assign(n, 0);

        

        int count0 = 0;

        for (int i = 0; i < n; ++i) {

            if (arr[i] == 0) count0++;

            

            arr1[arr[i]] += arr[i];

        }

        

        vector<int> res;

        

        if (count0 > 1) res.push_back(0);

        

        for (int i = 1; i < n; ++i) {

            if (arr1[i] != 0 && arr1[i] != i) {

                res.push_back(i);

            }

        }

        

        if (res.size() == 0) {

            res.push_back(-1);

        }

        return res;

    }


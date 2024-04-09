#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution{
public:
	string longestpalindrome(string s){
		int n = s.size();
		//特判，n<2 直接返回
		if(n<2){
			return s;
		}
		int maxLen = 1;
		int begin = 0;
		//动态规划存储状态的表
		vector<vector<int> > dp(n,vector<int>(n));

		//所有长度为1的子串都是回文串
		for(int i =0;i<n;i++){
			dp[i][i]=true;
		}

		//先枚举子串长度
		for(int L=2;L<=n;L++){
			//子串的左边界,左边界可以宽松一些
			for(int i=0;i<n;i++){
				// L and i can determine the right boundary
				int j= L+i-1;
				//right border out of bounds
				if(j>=n){
					break;
				}

				if(s[i]!=s[j]){
					dp[i][j]=false;
				}else{
					if(j-i<3){
						dp[i][j]=true;

					}else{
						dp[i][j]=dp[i+1][j-1];
					}
					
				}

				if(dp[i][j]&&j-i+1>maxLen){
					maxLen = j-i+1;
					begin = i;
				}


			}


		}

		return s.substr(begin,maxLen);





	}
};

int main(){

	string str="abaabac";

	//Solution *solution = new Solution();
	Solution solution;
	string s = solution.longestpalindrome(str);
	cout<<s<<endl;


	return 0;
}
#include <iostream>
#include <vector>
 
using namespace std;
class BrokenChessboard {
	public:
 int minimumFixes(vector <string> board){
	int n = board.size();
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <board[i].size(); j++){
			if(i < n-1){
				if(board[i][j] == board[i+1][j]){
					count++;
					if(board[i][j] == 'B')
						board[i+1][j] = 'W';
					else
						board[i+1][j] = 'B';
				}
			}
				
			if(i > 0){
				if(board[i][j] == board[i-1][j]){
					count++;
					if(board[i][j] == 'B')
						board[i-1][j] = 'W';
					else
						board[i-1][j] = 'B';
				}
			}
			if (j < board[i].size()-1){
				if(board[i][j] == board[i][j+1]){
					count++;
				if(board[i][j] == 'B')
					board[i][j+1] = 'W';
				else
					board[i][j+1] = 'B';
				}
			}
			if(j > 0){
				if(board[i][j] == board[i][j-1]){
					count++;
					if(board[i][j] == 'B')
						board[i][j-1] = 'W';
					else
						board[i][j-1] = 'B';
				}
			}
			
		}
	}
		return count ;
}
};

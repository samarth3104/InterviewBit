bool if_val(const vector<string> &board){
    short rows[9] = {0};
        short cols[9] = {0};
        short squares[9] = {0};

        for(int row = 0; row < board.size(); row++) {
            for(int col = 0; col < board[0].length(); col++) {
                if(board[row][col] == '.') continue;

                short value = (short) (1 << (board[row][col] - '1'));

                if((value & rows[row]) > 0) return false;
                if((value & cols[col]) > 0) return false;
                if((value & squares[3*(row/3) + col/3]) > 0) return false;

                rows[row] |= value;
                cols[col] |= value;
                squares[3*(row/3) + col/3] |= value;
            }
        }

        return true;
}


int Solution::isValidSudoku(const vector<string> &A) {
    return if_val(A);
}


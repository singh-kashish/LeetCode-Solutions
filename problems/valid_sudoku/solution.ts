function isValidSudoku(board: string[][]): boolean {
    const rowMask = new Array<number>(9).fill(0);
  const colMask = new Array<number>(9).fill(0);
  const boxMask = new Array<number>(9).fill(0);

  for (let i = 0; i < 9; i++) {
    for (let j = 0; j < 9; j++) {
      const ch = board[i][j];
      if (ch === '.') continue;
      if (ch < '1' || ch > '9') return false;

      const bit = 1 << (ch.charCodeAt(0) - '1'.charCodeAt(0));
      const b = Math.floor(i / 3) * 3 + Math.floor(j / 3);

      if ((rowMask[i] & bit) || (colMask[j] & bit) || (boxMask[b] & bit)) return false;

      rowMask[i] |= bit;
      colMask[j] |= bit;
      boxMask[b] |= bit;
    }
  }
  return true;

};

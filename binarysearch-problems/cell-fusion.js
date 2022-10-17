class Solution {
  solve(cells) {
     cells.sort((a, b)=> a - b);

     while (cells.length > 1) {
         const first = cells.pop();
         const sec = cells.pop();

         if (first !== sec) {
             const res = Math.floor((first + sec) / 3);
             cells.push(res);
             cells.sort((a, b) => a - b);
         }
     }

     return cells.length ? cells[0] : -1;
  }
}
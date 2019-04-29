// 打印所有不超过n（n<256）的，其平方具有对称性质的数。如11*11=121。
const n = 256;
let  strNum;
for (let i = 1; i < n; i++) {
    strNum  = i * i +'';
    if (strNum ===strNum.split('').reverse().join('')) {
        console.log(i)
    }
}
// let n, i, num, temp, m;
// n = 256;
// for (i = 1; i < 256; i++) {
//     num = i * i;
//     m = 0;
//     //倒序 === 原序
//     while (num > 0) { 
//         temp = parseInt(num % 10 ); 
//         m = temp +  parseInt(m * 10);
//         num =  parseInt(num / 10 );
//     }
//     if (m == i * i) {
//         console.log(i)
//     }
// }	
# Introduction to Algorithms,implemented in C++

## [Math](./src/math/)
| Name | Average | Memory | Comment | 
| ---- | ------- | -------| ------- |
| [fastPower](./src/math/fastPower.cpp) | $O(log(n))$ | $O(1)$ | |
| [hornerRule](./src/math/horner.cpp) | $O(n)$ | $O(1)$ | compute Polynomial by horner Rule |
| [gcd](./src/math/gcd.cpp) |  | $O(1)$ | compute the greatest common divisor of two integer |
| [primeFactor](./src/math/primeFactor.cpp) | $O(n)$ | $O(1)$ | compute the unique prime factor of integer|

## [Sort](./src/sort/)
| Name | Best | Average | Worest | Memory | InPlace | Stability | Comment | 
| ---- | ---- | ------- | ------ | ------ | ------- | --------- | ------ |
| [quickSort](./src/sort/quickSort/) | $O(nlog(n))$ | $O(nlog(n))$ | $O(n^2)$ | $O(log(n))$ | Yes | No | quickSort is usually done in-place with $O(log(n))$ stack space |
| [heapSort](./src/sort/heapSort/) | $O(nlog(n))$ | $O(nlog(n))$ | $O(nlog(n))$ | $O(1)$ | Yes | No |  |
| [Utility](./src/sort/utility/) | X | X | X | X | X | X | some problems soved by sort algorithms |


## [Search](./src/search/)
| Name | Best | Average | Worest | Memory | InPlace |
| ---- | ---- | ------- | ------ | ------ | ------- | 
| [binarySearch](./src/search/binarySearch/) | $Olog(n)$ | $Olog(n)$ | $Olog(n)$ | $O(1)$ | Yes |
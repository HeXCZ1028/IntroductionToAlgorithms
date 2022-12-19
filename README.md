# Introduction to Algorithms,implemented in C++

## [Math](./src/math/)
| Name | Average | Memory | 
| ---- | ------- | -------|
| [fastPower](./src/math/fastPower.cpp) | $O(log(n))$ | $O(1)$ |


## [Sort](./src/sort/)
| Name | Best | Average | Worest | Memory | InPlace | Stability | Comment | 
| ---- | ---- | ------- | ------ | ------ | ------- | --------- | ------ |
| [quickSort](./src/sort/quickSort/) | $O(nlog(n))$ | $O(nlog(n))$ | $O(n^2)$ | $O(log(n))$ | Yes | No | quickSort is usually done in-place with $O(log(n))$ stack space |
| [heapSort](./src/sort/heapSort/) | $O(nlog(n))$ | $O(nlog(n))$ | $O(nlog(n))$ | $O(1)$ | Yes | No |  |
| [Utility](./src/sort/utility/utility.cpp) | X | X | X | X | X | X | some problems soved by sort algorithms |


## [Search](./src/search/)
| Name | Best | Average | Worest | Memory | InPlace |
| ---- | ---- | ------- | ------ | ------ | ------- | 
| [binarySearch](./src/search/binarySearch/) | $Olog(n)$ | $Olog(n)$ | $Olog(n)$ | $O(1)$ | Yes |
function memoize(fn)
{
    const cache = new Map();
  let callCount = 0;

  const memoizedFn = (...args) => {
    const key = JSON.stringify(args);
console.log('key is', key)
    if (cache.has(key)) {
      console.log('cache hit in if condition')
      console.log('cache in if condition and the memorize value is  is ', cache.get(key))
      return cache.get(key);
    }

console.log('all storage cache are', cache)
    const result = fn(...args);
    cache.set(key, result);
    callCount++;
    console.log("callCount is ",callCount)
    return result;
  };


  memoizedFn.getCallCount = () => callCount;
  return memoizedFn;
}



let callCount = 0; // function কয়বার আসলে চলেছে, সেটা গুনবো
const memoizedFn = memoize(function (a, b) {
    callCount += 1;
    console.log('output',a+b)
    return a + b;
})
memoizedFn(2, 3) // 5
memoizedFn(2, 3) // 5
memoizedFn(4, 3) // 7
console.log(callCount) // 2

/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let ans=init;
    return{
        increment:function(){
            ans++;
            return ans;
        },
        decrement:function(){
            ans--;
            return ans;
        },
        reset:function(){
            ans=init;
            return ans;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millisecond) {
    await new Promise(resolve=> setTimeout(resolve,millisecond));
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */
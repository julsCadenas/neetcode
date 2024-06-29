class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        if (s.length !== t.length){
            return false
        };
        
        const scount = {}
        const tcount = {}
        for(let i=0; i<s.length; i++){
            scount[s[i]] = 1 + (scount[s[i]] || 0)
            tcount[t[i]] = 1 + (tcount[t[i]] || 0)
        }
        const len = Object.keys(scount)
        for(let j=0; j<len.length; j++){
            let key = len[j]
            if(scount[key] !== tcount[key]){
                return false
            }
        }
        return true
    }
}

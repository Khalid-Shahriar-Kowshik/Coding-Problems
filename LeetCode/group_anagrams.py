class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        # Make a dictionary where:
        # key   = sorted letters of a word (example: "eat" -> "aet")
        # value = all words that become that key (example: ["eat", "tea", "ate"])
        mp = defaultdict(list)

        # Go through each word in the input list
        for s in strs:

            # Sort the word’s letters so all anagrams look the same
            # "eat", "tea", "ate" all become "aet"
            key = "".join(sorted(s))

            # Add the original word to the correct group
            mp[key].append(s)

        # Return only the groups (lists of anagrams)
        return list(mp.values())

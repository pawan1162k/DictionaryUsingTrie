I have successfully implemented a dictionary leveraging the Trie data structure. Most importantly it provides efficient search and insertion operations with a time complexity of O(n), where n is the length of the word which is going to be added in our dictionary. This data structure ensures that search time is proportional to the length of word, making it highly efficient for applications like dictionary, where lookup time is important.

For space complexity:
In the worst case, the space complexity of a Trie is O(n×k), where n is the length of longest word, and k is the size of the alphabet (26 for lowercase English letters). This accounts for storing multiple pointers for every possible child node.

GUI Implementation using ImGui:
In addition to the dictionary, I also successfully implemented the GUI using the ImGui library, which simplifies the development of immediate-mode graphical interfaces. The library’s real-time rendering capabilities and ease of integration allow for creating intuitive and responsive user interfaces with minimal overhead.

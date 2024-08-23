#pragma once
#include<iostream>
#include<vector>

namespace trie {
	struct node {
		int n;
		std::vector<node*>val;
		bool end;
		std::vector<std::string>mean;
		//std::string mean;
		node() {
			n = 26;
			val.assign(26, NULL);
			end = false;
			mean = {};
		}
	};

	void insert(trie::node* root, std::string& s,std::string & mean);

	bool checkif(trie::node* root, std::string& s,bool &checkifval);

	void displayall(trie::node* root, std::string& outputstr);
}


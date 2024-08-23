#include<iostream>
#include<vector>
#include "Trie.h"
#include "imgui/imgui.h"
#include <imgui_stdlib.h>
#include<cstring>


namespace trie {
	void insert(trie::node* root, std::string& s,std::string &mean) {
		int i = 0;
		int n = s.length();
		trie::node* temp = root;
		while (i < n) {
			if (temp->val[s[i] - 'a'] == NULL) {
				temp->val[s[i] - 'a'] = new trie::node();
			}
			temp = temp->val[s[i] - 'a'];
			i++;
		}
		temp->mean.push_back(mean);
		temp->end = true;

		//temp->mean = mean;
	}

	bool checkif(trie::node* root, std::string& s,bool &checkifval) {
		int i = 0;
		int n = s.length();
		trie::node* temp = root;
		std::string curr = "";
		while (i < n) {
			if (temp->val[s[i] - 'a'] == NULL) {
				return false;
			}
			curr += s[i];
			if(checkifval){
				displayall(temp, curr);

			}
			temp = temp->val[s[i] - 'a'];
			i++;
		}
		return temp->end;
	}

	void displayall(trie::node* root, std::string& outputstr) {
		if (root == NULL) {
			return;
		}
		if (root->end) {
			//std::cout << outputstr << std::endl;
			ImGui::Text(outputstr.c_str());
			
			ImGui::SameLine();
			for (auto it = root->mean.begin(); it != root->mean.end(); it++) {
				ImGui::Text((*it).c_str());
				ImGui::SameLine();
			}
			ImGui::Text("");
			//ImGui::Text(root->mean.c_str());
		}
		for (int i = 0; i < 26; i++) {
			if (root->val[i] != NULL) {
				outputstr += char(i + 'a');
				displayall(root->val[i], outputstr);
				outputstr.pop_back();
			}
		}
	}
}
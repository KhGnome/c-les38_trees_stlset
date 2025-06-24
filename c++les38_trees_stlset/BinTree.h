#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
	T info;
	Node* left;
	Node* right;

	Node(T value) { info = value; left = right = nullptr; }
	void showNode() {
		cout << "INFO: " << info << endl;
		cout << "\t Left: " << left << " Right: " << right << endl;
	}
};


template <typename U>
class BinTree {
	Node<U>* root; //Вказівник на перший вузол у дереві

	void showSubTree(Node<U>* p) {
		if (p != nullptr) {
			showSubTree(p->left);
			p->showNode();
			showSubTree(p->right);
		}
	}

	void delNode(Node<U>* p) {
		if (p != nullptr) {
			delNode(p->left);
			delNode(p->right);
			cout << "DELETE NODE: "<< p->info << endl;
			delete p;
		}
	}

public:
	BinTree() { root = nullptr; }
	~BinTree() { delNode(root); }

	void insert(U value) {
		Node<U>* el = new Node<U>(value);

		if (root==nullptr) {
			root = el;
		}
		else {
			//shukayemo misce dlya novogo vuzla
			Node<U>* p = root;
			Node<U>* pPrev = root;
			while (p != nullptr) {
				pPrev = p;
				//p = value < p->info ? p->left : p->right;
				if (value < p->info) {
					p = p->left;
				}
				else {
					p = p->right;
				}
			}
				if (value < pPrev->info) {
					pPrev->left = el;
				}
				else {
					pPrev->right = el;
				}
			}
		}

		Node<U>* search(U value) {
			//Повернути адресу вузла зі значенням value
			//Якщо value немає в дереві, то повернути nullptr
			Node<U>* p = root;
			while (p != nullptr) {
				if (value == p->info) {
					return p; 
				}
				else if (value < p->info) {
					p = p->left; 
				}
				else {
					p = p->right; 
				}
			}
			
			return nullptr;
		}

		//Повний обхід дерева
		void showTree() {
			if (root == nullptr)
				cout << "Дерево контейнерів порожнє!" << endl;
			else {
				showSubTree(root);
				cout << endl;
			}
		}

	};
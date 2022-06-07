class Club {
	public :
		string name;
		long long value;
		Club() {
			
		}
		Club(string name, long long value) {
			this->name = name;
			this->value = value;
		}
		void output() {
			cout << "Name : "<< this->name << endl;
			cout << "Value : "<< this->value<< endl;
		}
		string getName() {
			return this->name;
		}
		long long getValue() {
			return this->value;
		}
};


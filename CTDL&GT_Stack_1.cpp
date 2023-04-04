void StackInit() {
	Top = -1;
}

void push(int V) {
	if (Top > max - 1) {
		cout << "Stack is full";
	}
	else {
		Top++;
		Stack[Top] = V;
	}
}

int pop() {
	if (Top == -1) {
		cout << "Stack is empty";
		return -1;
	}
	else {
		int res = Stack[Top];
		Top--;
		return res;
	}
}

int empty() {
	if (Top == -1) {
		return 0;
	}
	return 1;
}

int size() {
	return Top + 1;
}


int top() {
	if (Top == -1) {
		cout << "Stack is empty";
		return -1;
	}
	else {
		int res = Stack[Top];
		return res;
	}
}

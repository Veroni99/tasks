#include <iostream>
struct vector
{
	int *data;
	int size;
	int capacity;
	int index(int);
	void resize();
	void push_back(int);
	vector(int);
        vector();	
	void print();
};

int main() {
	vector v1;
	v1.size = 10;
	vector v2(1024);
	v1.print();
	v2.print();
            
return 0;
}
void vector::resize(){
	capacity *= 2;
	int*p = new int [capacity];
	for (int i=0; i < size; i++)
		p[i] = data[i];
	delete[] data;
	data = p;
}

void vector::push_back(int v){
	if(size == capacity)
	resize();
	data[size++];
} 	

int vector::index(int n){
	int ret_n = -1;
	for(int i = 0; i < size; i++)
		if (data[i] == n)
			return i;
	return ret_n;
}
vector::vector(int c){

}
vector::vector(){
}
void vector::print(){
}

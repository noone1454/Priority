#include <iostream>
#include <queue>

struct item{
	int id, prioritas;
};

// void AddItem(item& items, int a, int b){
	// items.id = a;
	// items.prioritas = b;
// }

int main() {
	int list[100], i, count, temp;
	item items;
    std::priority_queue<int> pq, pqTemp;
    std::queue<int> idQueue, pQueue;
	
	for (int i=0;i<100;i++){
		list[i]=0
	}
	
	while (std::cin){
		count++;
		std::cout << "masukkan id dan prioritas";
		std::cin >> items.id >> items.prioritas;
		pq.push(items.prioritas);
		i=0;
		if (pq.empty()){
			while (!pqTemp.empty()){
				i++;
				if (pqTemp.top() != items.id){
					pq.push(pqTemp.top());
					pqTemp.pop();
				}else{
					pq.push(items.id);
					list[count]=items.id;
				}
			}
		}else{
			
		}
		while (temp != 0){
			
		}
	}
	
	return 0;
}
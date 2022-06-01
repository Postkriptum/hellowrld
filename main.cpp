#include <iostream>
class Uno {
public:
	void SetCount(int count) {
		m_count = count;
	}
	int GetCount() {
		ptrLevel = &m_count;
		reurn* ptrLevel;
	}
private:
	int m_count = 0;
	uint32_t m_one = 0;
	int* ptrLevel = nullptr;
};

int main(){
	Uno a;
	a.SetCount(120);
	std::cout << "Hello wrld!!! \ n" << a.GetCount() << std::endl;
	return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <ctime>
#include <cstdlib>
#include <functional>
#include <algorithm>
using namespace std;


////기초문제 5
//// 질문 1개 적어두었습니다!
//template<class Iter>
//void print(const Iter& iter_begin, const Iter& iter_end) {
//	for (Iter iter = iter_begin; iter != iter_end; iter++)
//		cout << *iter << "\t";
//	cout << endl;
//}
//template<class Iter>
//void print_reverse(const Iter& iter_begin, const Iter& iter_end) {
//	Iter iter = iter_end;
//	for (iter; iter != iter_begin; iter--)
//		cout << *(iter-1) << "\t";
//	cout << endl;
//}
//int main() {
//	vector<int> v{ 1, 2, 3, 4 };
//	list<double> l{ 1.1, 2.2, 3.3 };
//	int ary[] = { 100, 200, 300, 400 };
//
//	print(begin(v), end(v));
//	print(begin(l), end(l));
//	print(begin(ary), end(ary));
//
//    list<double>::iterator ite;
//	print_reverse(begin(v), end(v));
//	print_reverse(begin(l), end(l));
//	/* -----------질문 1-------------
//	윗줄은 안되고 아래 줄(reverse함수)로 하면 잘 작동하는데요..
//	 list인 경우에 *iter-1 연산이 안되는 이유가 궁금합니다.
//	 list는 -연산자에 대해 오버라이딩이 안되어있나요?
//	 ----답변
//	 list는 양방향 반복자를 갖고있는 컨테이너입니다.
//	 양방향 반복자는 증가 연산자(++)를 사용하면 순방향으로, 감소 연산자(--)를 사용하면 역방향으로 이동할 수 있습니다.
//	 +1같은 경우 임의 접근 반복자를 갖고있는 컨테이너를 사용해야합니다.
//	*/
//
//	/*reverse(begin(l), end(l));
//	for (auto e : l) cout << e << '\t';*/
//	print_reverse(begin(ary), end(ary));
//	return 0;
//}



////응용문제 1
/*
질문 1: 실행 자체가 안되는데 이유를 모르겠습니다! 에러 코드는 LNK2019, LNK1120이 나오네요,,
질문 2: IsEmpty(), IsFull() 함수 부분이 제대로 된게 맞는지 궁금합니다.
		-> 특히 IsFull()에서 ' m_Array[4] != 0 ' 으로 가득 찼는지 아닌지 확인하는 방식이 맞는건지 확신이 안서네요.
질문 3: Add 함수 내부 구현을 if else 아니면 switch문을 활용해서 구현하는게 맞는지 궁금합니다.

*/
//int command()
//{
//	int num;
//	cout << "\n\t---- menu ----" << endl;
//	cout << "\t1. 리스트 추가" << endl;
//	cout << "\t2. 리스트 삭제" << endl;
//	cout << "\t3. 리스트 출력" << endl;
//	cout << "\t4. 프로그램 종료" << endl;
//	cout << "\n\t입력 --> ";
//	cin >> num;
//	return num;
//}
//template <typename T>
//class CList
//{
//public:
//	CList();
//	~CList();
//	bool IsEmpty(); // list가 비어 있으면 1, 아니면 0
//	bool IsFull(); // list가 꽉 차 있으면 1, 아니면 0
//	void Add(T data); // list에 데이터 추가
//	void Delete(T data); // list에 데이터 삭제
//	void Print(); // list에 데이터 출력
//private:
//	T m_Array[5]; // 데이터를 저장할 공간
//	int m_Length; // list에 있는 데이터 수
//};
////template <typename T>
////CList<T>::CList(): m_Array[5](), m_Length() {
////}
//template <typename T>
//CList<T>::CList() : m_Array(), m_Length() {
//}
//template <typename T>
//bool CList<T>::IsEmpty(){
//	if (m_Array.empty() == 0) return 1;
//	else return 0;
//}
//template <typename T>
//bool CList<T>::IsFull() {
//	if (m_Array[4] != 0) return 1;
//	else return 0;
//}
//template <typename T>
//void CList<T>::Add(T data) {
//	if (m_Length == 0) m_Array[0] = data;
//	else if (m_Length == 1) m_Array[1] = data;
//	else if (m_Length == 2) m_Array[2] = data;
//	else if (m_Length == 3) m_Array[3] = data;
//	else if (m_Length == 4) m_Array[4] = data;
//}
//template <typename T>
//void CList<T>::Delete(T data) {}
//template <typename T>
//void CList<T>::Print() {}
//
//template<typename T>
//CList<T>::~CList() {
//
//}
//
//int main()
//{
//	CList<int> list; // type형으로 list 선언
//	int input; // list에 입력 할 데이터
//	int com; // 선택한 기능
//	while (1)
//	{
//		com = command(); // 기능을 선택
//		switch (com)
//		{
//		case 1: // 추가
//			cout << "\n추가할 데이터 : ";
//			cin >> input;
//			list.Add(input);
//			break;
//		case 2: // 삭제
//			cout << "\n삭제할 데이터 : ";
//			cin >> input;
//			list.Delete(input);
//			break;
//		case 3: // 출력
//			list.Print();
//			break;
//		case 4: // 프로그램 종료
//			cout << "\n\t프로그램을 종료합니다\n";
//			return 0;
//			break;
//		default:
//			break;
//		}
//	} return 0;
//}




//응용문제 5번
/*
질문 1, 2, 3이 있습니다!

*/
template<class T>
class Queue {
public:
	Queue(int _MAX_SIZE = 1000);
	~Queue();
	int find_index(T _item);
	void Enqueue(T _item);
	T Dequeue();
	void print() const;
	int get_size();						//질문 1: get_size() 함수 활용 하지 않고 풀었는데, 혹시 활용해서 푸는 방법이 있을까요?
	T get_item(int _index);
private:
	T* p_list; // 정수형 변수들을 가지는 배열
	int size; //현재 저장된 변수들의 개수
	int MAX_SIZE; // 최대로 저장할 수 있는 p_list의 크기
};
template<class T>
Queue<T>::Queue(int _MAX_SIZE) : MAX_SIZE(_MAX_SIZE) {
	p_list = new T[MAX_SIZE];
}
template<class T>
Queue<T>::~Queue(){
	delete[] p_list;					// 질문 2: 동적 해제 이렇게 하면 되나요?? 제대로 해제가 되고 있는건지 확인할 수 있는 방법이 있나요?
}
template<class T>
int Queue<T>::find_index(T _item) {
	T* p;
	p = find(p_list, p_list + MAX_SIZE, _item);
	if (p != p_list + MAX_SIZE) {	// _item이 p_list에 있는지 확인하는 과정
		//cout << "중복 : " << *p << endl;
		return *p;
	}
	else return -1;
}
template<class T>
void Queue<T>::Enqueue(T _item) {
	if (find_index(_item) == -1) {
		if (size <= MAX_SIZE) {// size <= MAX_SIZE 일 때만 허용
			p_list[size] = _item;
			//cout <<"p_list[size] : "<< p_list[size] << endl;
			size++;
		}
		else cout << "Error: out of memory" << endl;
	}
}
template<class T>
T Queue<T>::Dequeue() {
	if (size != 0) {
		float tmp;											//질문 3: 이렇게 푸는거 맞나요? 배열을 뒤집어서 size-1 해주어서 마지막 원소 지우고 다시 뒤집는 방식
		for (int i = 0; i < size / 2; i++) {			// i = 0 일때 i = 9 번째와 교환
			tmp = *(p_list + i);
			*(p_list + i) = *(p_list + size - i - 1);
			*(p_list + size - i - 1) = tmp;
		}
		size -= 1;
		for (int i = 0; i < size / 2; i++) {			// i = 0 일때 i = 9 번째와 교환
			tmp = *(p_list + i);
			*(p_list + i) = *(p_list + size - i - 1);
			*(p_list + size - i - 1) = tmp;
		}
		return get_item(size);
	}
	else cout << "Error: No item exists in the list" << endl;
}
template<class T>
int Queue<T>::get_size(){
	return size;
}
template<class T>
T Queue<T>::get_item(int _index) {
	return p_list[_index];
}
template<class T>
void Queue<T>::print() const {
	cout << "Items in the list : ";
	for (int i = 0; i < size; i++) {
		cout << p_list[i] << ", ";
	}cout << endl;
}
int main()
{
	Queue<int> int_queue;
	Queue<float> float_queue;
	Queue<char> char_queue;
	int_queue.Enqueue(1);
	int_queue.Enqueue(2);
	int_queue.Enqueue(2);
	int_queue.Enqueue(5);
	float_queue.Enqueue(4.3);
	float_queue.Enqueue(2.5);
	float_queue.Enqueue(3.7);
	float_queue.Enqueue(3.7);
	char_queue.Enqueue('b');
	char_queue.Enqueue('b');
	char_queue.Enqueue('c');
	char_queue.Enqueue('a');
	cout << "<Before Dequeue>" << endl;
	int_queue.print();
	float_queue.print();
	char_queue.print();
	int_queue.Dequeue();
	float_queue.Dequeue();
	float_queue.Dequeue();
	char_queue.Dequeue();
	char_queue.Dequeue();
	char_queue.Dequeue();
	char_queue.Dequeue();
	cout << "<After Dequeue>" << endl;
	int_queue.print();
	float_queue.print();
	char_queue.print();
	return 0;
}
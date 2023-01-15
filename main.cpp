#include<iostream>
#include<vector>
#include <queue>
#include <stack>
#include<map>
// STL 
// vector вектор, массив 
// forvard list двухсв¤зный список
// list односв¤зный список
// queue очередь
// stack стак
// map мап ассоциативный контейнер кторый хранит в себе пары ключ(должен быть уникальным) и значение
// set сет
// unjrdered_map 
// unordered_set несортированый
// prioriti queue приоритентна¤ очередь
// multiset  
// multimap


int main() {
	setlocale(LC_ALL, "Russian");
	std::vector<int> arr = { 123, 54 };
	arr.push_back(670);
	arr.reserve(20);// нова¤ вместимость
	arr.shrink_to_fit(); // ужать массив до размера size

	std::vector<int> vec;//вывод элементов вектора ав массивке интовских элементов
	//arr.push_back(22);
	for (size_t i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << ' ';
	}

	std::cout << '\n' << "-------------" << '\n';

	std::vector<int>::iterator it;//it iterator обьект который указывает на элемен массисва
	for (std::vector<int>::const_iterator it = arr.begin(); it != arr.end(); it++) {
		std::cout << *it << ' ';
	}

	std::cout << '\n' << "-------------" << '\n';

	std::vector<int> abc(10, 3);//вывод элементов вектора
	for (size_t i = 0; i < abc.size(); i++)
	{
		std::cout << abc[i] << ' ';
	}

	std::cout << '\n' << "-------------" << '\n';

	std::cout << "arr size(размер): " << arr.size() << '\n';//рамер массива(вектора)
	std::cout << "arr capacity(вместимость): " << arr.capacity();//вместимость массива(вектора)

	std::cout << '\n' << "-------------" << '\n';

	std::vector<int> my_vector = { 42, 65,77 };
	std::cout << *my_vector.begin() << std::endl;//42 выводим начало вектора 0 элемент
	//std::cout << *my_vector.end() << std::endl;// compile error;
	//нелюьз¤ получать доступ к не инициализированным ¤чейкам
	std::cout << "-------------" << '\n';

	my_vector.emplace(my_vector.begin() + 1, 33);//добавл¤ем в вектор по позиции
	for (size_t i = 0; i < my_vector.size(); i++)
	{
		std::cout << my_vector[i] << ' ';
	}

	std::cout << '\n' << "-------------" << '\n';

	my_vector.erase(my_vector.begin() + 1);//удаление элемента

	//сложность по времени

	//random acsses (случайный доступ) ќ(1) - const time
	// (ќ - большое ќ, случаййный доступ к елементу 
	// вектора занимает одно и тоже, константное, врем¤ как и обращение 
	// к любому другому элементу данного вектора)

	//вставка/удаление ќ(n), n == vector.size() зависит от размера вектора,
	//чем больше вектор тем больше врем¤ на вставку и удаление
	//врем¤ линейно растет с размером вектора
	//memmove - перенос в пам¤ти 

	//существует сложность O(максимальное врем¤)(n(размер массива)^2), n^3(трехмерный массив), n!(факториал);	


	//двумерный вектор

	std::vector<std::vector<int>> vec2d(5, std::vector<int>(10, 5));//инициализаци¤ двумерного вектора
	for (size_t i = 0; i < vec2d.size(); i++)// вывод 2х мерного вектора
	{
		for (size_t j = 0; j < vec2d.size(); j++)
		{
			std::cout << '[' << vec2d[i][j] << ']' << ' ';
		}
		std::cout << std::endl;
	}

	std::cout << "-------------" << '\n';

	std::queue<int> q;//очередь fist in fist out(кто первый вошел тот и выйдет) 
	//1 2 3 4 5 - первым будет получено значение 1
	q.push(5);
	q.push(3);
	q.push(1);
	std::cout << "q.front(): " << q.front() << std::endl;//полученно первое значение запушенное нами 5
	q.pop();
	std::cout << "q.front() : " << q.front() << std::endl;//полученно второе  значение запушенное нами 3 так как первое было удаленно черз q.pop();
	q.push(44);
	q.push(44);
	q.push(44);

	std::cout << "-------------" << '\n';

	while (!q.empty())
	{
		std::cout << "Element " << q.front() << "	/	" << " Delete element " << q.front() << ' ' << '\n';

		q.pop();
	}

	std::cout << '\n' << "-------------" << '\n';

	//стак

	std::stack<std::string> my_stack;//LIFO - last in Fist out - кто последний зашел тот первый выйдет
	my_stack.push("hello");//вывод¤тс¤ в орбратно последвотальности
	my_stack.push("hopw are you");
	my_stack.push("goodbye");
	std::cout << std::endl;
	while (!my_stack.empty())
	{
		std::cout << my_stack.top() << '\n';
		my_stack.pop();
	}

	//map
	std::map<int, std::string> my_map;
	my_map.insert({ 1,"hello" });// = пара ключ - значение
	my_map.insert({ 2,"hello" });
	my_map.insert({ 3,"hello" });
	my_map.insert({ 42,"goodbye" });
	std::cout << '\n' << "-------------" << '\n';
	std::cout << my_map[1] << std::endl;//[1] ключи а не индексы они ункальны повтор¤тс¤ не могут
	std::cout << my_map[42] << std::endl;
	return 0;
}
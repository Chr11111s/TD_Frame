#ifndef _MANAGER_H_
#define _MANAGER_H_

template<typename T>
class Manager {
public:
	static T* instance() {
		if (!manager) manager = new T();
		return manager;
	}
private:
	static T* manager;
protected:
	Manager() = default;
	~Manager() = default;
	Manager(const Manager&) = delete;
	Manager& operator=(const Manager&) = delete;
};

template<typename T>
T* Manager<T>::manager = nullptr; //类内静态变量强制在类外定义(T* Manager<T>::manager)并初始化(=nullptr)

#endif
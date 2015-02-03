#include <iostream>

#define LOG_DEBUG(msg) std::cout << "DEBUG: " << msg << std::endl;
#define LOG_WARNING(msg) std::cout << "WARNING: " << msg << std::endl;
#define LOG_ERROR(msg) std::cout << "ERROR: " << msg << std::endl;
#define LOG_CALLED std::cout << "CALLED" << std::endl;

/*namespace Logger {

	template <typename T>
	void print(T& t) {
		std::cout << t;
	}

	template <typename T, typename... Args>
	void print(T t, Args... args) {
		std::cout << t << std::endl;
		print(args...);
	}

}*/
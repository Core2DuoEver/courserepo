//Versions

#include <iostream>

void GetCompSys() {

	std::cout << "Program compiled for : ";

#ifdef _WIN32
	std::cout << "Win32" << std::endl;
#endif

#ifdef _WIN64
	std::cout << "Win64" << std::endl;
#endif

#ifdef __CYGWIN__
	std::cout << "Cygwin" << std::endl;

#endif
#ifdef __linux__
	std::cout << "Linux" << std::endl;

#endif

#ifdef __unix__
	std::cout << "Unix" << std::endl;

#endif

#ifdef __APPLE__
	std::cout << "Apple" << std::endl;

#endif

#ifdef __FreeBSD__
	std::cout << "FreeBSD" << std::endl;

#endif

#ifdef __OpenBSD__
	std::cout << "OpenBSD" << std::endl;

#endif

#ifdef __NetBSD__
	std::cout << "NetBSD" << std::endl;

#endif
}

void GetCompiler() {
#ifdef __cplusplus
	std::cout << "C++ version : " << __cplusplus << std::endl;
#endif

#ifdef __GNUC__
	std::cout << "GCC version : " << __GNUC__ << "." << __GNUC_MINOR__
		<< "." << __GNUC_PATCHLEVEL__ << std::endl;
#endif

#ifdef _MSC_VER
	std::cout << "MSVC version : " << _MSC_VER << std::endl;
#endif

#ifdef __clang__ 
	std::cout << "Clang version : " << __clang_major__ << " "
		<< __clang_minor__ << " " << __clang_patchlevel__ << std::endl;
#endif
}

int main() {
	GetCompiler();
	GetCompSys();
}
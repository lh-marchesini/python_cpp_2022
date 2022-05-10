#include <pybind11/pybind11.h>

char version[]="1.0";

char const* getVersion() {
	return version;
}

char const* greet() {
  return "hello, world";
}

char const* ca_marche() {
  return "UHUL, ca marche";
}

namespace py = pybind11;


PYBIND11_MODULE(hello_component,greetings)
{
  greetings.doc() = "greeting_object 1.0";
  
  greetings.def("greet", &greet, "a function saying hello");
  greetings.def("getVersion", &getVersion, "a function returning the version");
  greetings.def("ca_marche", &ca_marche, "a function saying that it works");
}

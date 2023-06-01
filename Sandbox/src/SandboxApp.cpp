#include <Simula.h>

class Sandbox : public Simula::Application {
public:
	Sandbox() {};
	~Sandbox() {};
};

Simula::Application* Simula::CreateApplication() {
	return new Sandbox();
}
#pragma once

#ifdef SM_PLATFORM_WINDOWS

extern Simula::Application* Simula::CreateApplication();

int main(int argc, char** argv) {
	auto app = Simula::CreateApplication();
	app->Run();
	delete app;
}

#endif

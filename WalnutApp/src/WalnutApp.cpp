#include "Walnut/Application.h"
//#include "Walnut/EntryPoint.h"

#include "Walnut/Image.h"

bool g_ApplicationRunning = true;

class ExampleLayer : public Walnut::Layer
{
public:
	virtual void OnUIRender() override
	{
		ImGui::Begin("Hello");
		ImGui::Button("Button");
		ImGui::End();

		ImGui::ShowDemoWindow();
	}
};


namespace Walnut {
    Walnut::Application *CreateApplication(int argc, char **argv) {
        Walnut::ApplicationSpecification spec;
        spec.Name = "Walnut Example";

        Walnut::Application *app = new Walnut::Application(spec);
        app->PushLayer<ExampleLayer>();
        app->SetMenubarCallback([app]() {
            if (ImGui::BeginMenu("File")) {
                if (ImGui::MenuItem("Exit")) {
                    app->Close();
                }
                ImGui::EndMenu();
            }
        });
        return app;
    }
}

int WinMain(int argc, char** argv)
{
    while (g_ApplicationRunning)
    {
        Walnut::Application* app = Walnut::CreateApplication(argc, argv);
        app->Run();
        delete app;
    }

    return 0;
}
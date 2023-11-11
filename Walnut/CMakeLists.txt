#cmake_minimum_required(VERSION 3.26)
#project(Walnut)



set(SRC src/Walnut/Application.cpp  src/Walnut/Application.h
        src/Walnut/Image.cpp  src/Walnut/Image.h
        src/Walnut/Random.cpp src/Walnut/Random.h

        src/Walnut/Timer.h

        src/Walnut/Input/Input.h src/Walnut/Input/Input.cpp  src/Walnut/Input/KeyCodes.h

        src/Walnut/ImGui/ImGuiBuild.cpp src/Walnut/ImGui/Roboto-Regular.embed)

include_directories(./src)

include_directories(../vendor/imgui)
include_directories(../vendor/GLFW/include)
include_directories(../vendor/stb_image)
include_directories(../vendor/glm)

include_directories(../vendor/VulkanSDK/1.3.261.1/Include)

link_directories(../vendor/VulkanSDK/1.3.261.1/Lib)
link_directories(../vendor/GLFW/bin/Debug-windows-x86_64/GLFW/)
link_directories(../vendor/imgui/bin/Debug-windows-x86_64/ImGui/)
add_library(Walnut STATIC ${SRC})
target_link_libraries(Walnut ImGui glfw3 vulkan-1 Dwmapi)




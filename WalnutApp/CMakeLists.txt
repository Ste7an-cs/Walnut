

include_directories(src/Walnut)

include_directories(../vendor/imgui)
include_directories(../vendor/GLFW/include)
include_directories(../vendor/stb_image)
include_directories(../vendor/glm)
include_directories(../Walnut/src)
include_directories(../vendor/VulkanSDK/1.3.261.1/Include)


link_directories(../vendor/VulkanSDK/1.3.261.1/Lib)
link_directories(../vendor/GLFW/bin/Debug-windows-x86_64/GLFW/)
link_directories(../vendor/imgui/bin/Debug-windows-x86_64/ImGui/)

add_executable(Walnutapp  src/WalnutApp.cpp)
target_link_libraries(Walnutapp ImGui glfw3 vulkan-1 Walnut Dwmapi)

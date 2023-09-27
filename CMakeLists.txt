cmake_minimum_required(VERSION 3.5)

project(webpagetest)

find_package(Qt6 REQUIRED COMPONENTS Widgets WebEngineWidgets)

set(PROJECT_QT_VERSION "6.5.2")

if(Qt6Widgets_FOUND)
    if(NOT Qt6Widgets_VERSION VERSION_EQUAL ${PROJECT_QT_VERSION})
        message(FATAL_ERROR "Use exact Qt version ${PROJECT_QT_VERSION}, current one is ${Qt6Widgets_VERSION}")
    endif()
else()
    message(SEND_ERROR "The QtWidgets library could not be found!")
endif(Qt6Widgets_FOUND)

add_executable(webpagetest main.cpp)

target_link_libraries(webpagetest PRIVATE Qt6::Widgets Qt6::WebEngineWidgets)

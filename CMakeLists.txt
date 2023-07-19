cmake_minimum_required(VERSION 3.5)

project(neuv_loginwin)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH "/home/kyle/Qt5.14.1/5.14.1/gcc_64")
find_package(Qt5 COMPONENTS Widgets Network SerialPort REQUIRED)
set(QT_LIBRARIES Qt5::Widgets Qt5::Network Qt5::SerialPort)


set  (CMAKE_BUILD_TYPE "Debug")
set  (CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb -static-libgcc -static-libstdc++")
set  (CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall -pthread -static-libgcc -static-libstdc++")

set  (project_SOURCES   main.cpp
                        loginwindow.cpp
                        check.cpp
                        infowin.cpp
                        )


set  (project_HEADERS   loginwindow.h
                        check.h
                        infowin.h
                        )

set  (project_FORMS     loginwindow.ui
                        infowin.ui
						)
set  (project_RESOURCES login_res.qrc)


add_definitions(${QT_DEFINITIONS})

#include
include_directories(
                    ${CURL_INCLUDE_DIR}
                    )

#library
link_directories(
                 ${CURL_LIBRARY_DIR}
                 )


add_executable(neuv_loginwin ${project_SOURCES}
                         ${project_FORMS}
                         ${project_FORMS_HEADERS}
                         ${project_HEADERS_MOC}
                         ${project_RES_MOC}
                         ${project_RESOURCES}
                         )

target_link_libraries(neuv_loginwin ${QT_LIBRARIES}
                              -lcurl  )

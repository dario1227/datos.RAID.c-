cmake_minimum_required(VERSION 3.9)
project(datos.RAID.c-)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_PREFIX_PATH "/opt/qt/5.6/gcc_64/")
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Network REQUIRED)
find_package(Qt5Sql REQUIRED)
find_package(Qt5PrintSupport REQUIRED)
find_package(Qt5Xml REQUIRED)
set(SOURCE_FILES main.cpp main.cpp Raid5_controller/Existence_controller.cpp Raid5_controller/Existence_controller.h Raid5_controller/file_controller.cpp Raid5_controller/file_controller.h Raid5_controller/GOD_controller.cpp Raid5_controller/GOD_controller.h)
add_executable(datos.RAID.c- ${SOURCE_FILES} main.cpp main.cpp)


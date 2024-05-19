cmake_minimum_required(VERSION 3.14)

project(Player VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Quick Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Quick Widgets)

# Add OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

set(
    SRC
    ./src/ImageManager/imagemanager.h
    ./src/ImageManager/imagemanager.cpp
    ./src/VideoManager/videomanager.h
    ./src/VideoManager/videomanager.cpp
    ./src/ThreadManager/threadmanager.h
    ./src/ThreadManager/threadmanager.cpp
)

set(PROJECT_SOURCES
        src/main.cpp ${SRC}
        qml.qrc
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Player
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(Player SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(Player
          ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Player
  PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Quick
  ${OpenCV_LIBS})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_import_qml_plugins(Player)
    qt_finalize_executable(Player)
endif()

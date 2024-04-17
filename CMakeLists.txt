cmake_minimum_required(VERSION 3.5)

project(Pokedex VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        # Main Source FIle
        src/main.cpp
        # Source Files for UI of Main Windows
        src/ui/mainwindow/mainwindow.cpp
        src/ui/mainwindow/aboutpokedex.cpp
        # Source File for UI of Pokemon Window
        src/ui/pokemon/pokemonwindow.cpp
        # Source File for UI of Move Window
        src/ui/move/movewindow.cpp
        # Header Files for UI of Main Window
        include/ui/mainwindow/mainwindow.h
        include/ui/mainwindow/aboutpokedex.h
        # Head File for UI of Pokemon Windows
        include/ui/pokemon/pokemonwindow.h
        # Head File for UI of Move Window
        include/ui/move/movewindow.h
        # Form Files for UI of Main Windows
        forms/mainwindow/mainwindow.ui
        forms/mainwindow/aboutpokedex.ui
        # Form File for UI of Pokemon Window
        forms/pokemon/pokemonwindow.ui
        # Form File for UI of Move Window
        forms/move/movewindow.ui
        # Resource FIles for Database
        resources/database/Database.qrc
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Pokedex
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Pokedex APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Pokedex SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Pokedex
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Pokedex PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Pokedex)
endif()
set_target_properties(Pokedex PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Pokedex
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Pokedex)
endif()

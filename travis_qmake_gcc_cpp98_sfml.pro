SOURCES += main.cpp

# Compile with high warning levels, a warning is an error
QMAKE_CXXFLAGS += -Wall -Wextra -Weffc++ -Werror

# SFML
LIBS += -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

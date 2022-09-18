cmake_minimum_required(VERSION 3.17)

# Stage 10 ~ 19
project(Stage10-19)

set(CMAKE_CXX_STANDARD 17)

# 브루스 포스
add_subdirectory(Stage10)

# 정렬
add_subdirectory(Stage11)

# 집합과 맵
add_subdirectory(Stage12)

# 기하
add_subdirectory(Stage13)

# 정수론 및 조합론
add_subdirectory(Stage14)

# 백트레킹
add_subdirectory(Stage15)
cmake_minimum_required(VERSION 2.8)
project( Dojo_dec2014 )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( CHelloWorldTest CHelloWorldTest.c )
target_link_libraries( CHelloWorldTest ${OpenCV_LIBS} )

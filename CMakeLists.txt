cmake_minimum_required (VERSION 3.8)

project (Double_Project)

add_subdirectory (main)
add_subdirectory (ArrayList)
add_subdirectory (LinkedList)


target_include_directories(main
	PUBLIC ArrayList
	PUBLIC LinkedList
)

target_link_directories(main
	PUBLIC ArrayList
	PUBLIC LinkedList
)
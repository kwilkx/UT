#install gtest on ubuntu
#this package only install source files
	sudo apt-get install libgtest-dev

#to create the necessary library files
	cd /usr/src/gtest
	sudo cmake CMakeLists.txt
	sudo make
	 
	# copy or symlink libgtest.a and libgtest_main.a to your /usr/lib folder
	sudo cp *.a /usr/lib

#g++ -lgtest -lpthread main.cpp test.cpp ../motor.cpp -o test



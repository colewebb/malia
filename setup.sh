cd $MALIA_HOME
echo Satisfying dependency on g++ to compile source code.
sudo apt-get install g++
echo Compiling source code..
g++ -o malia ./malia.cpp
# chmod a+x
echo Making files executable...
chmod a+x backup.sh
echo Making files executable....
chmod a+x init.sh
echo Making files executable.....
chmod a+x upback.sh
echo
echo $MALIA_HOME
echo
echo The above location should be the installation location.
echo If it is, then you are good to go! If not, go back through 
echo the installation instructions and see if you missed
echo anything. If there is an error in my instructions, let
echo me know.
echo
echo Cheers!
echo
echo - Cole Webb

mpic++ main.cpp
echo "---------------------- NEW RUN --------------------------"
mpirun -np 1 a.out 50
echo $'\n---------------------------------------------------------\n'
mpirun -np 2 a.out 50
echo "---------------------------------------------------------"

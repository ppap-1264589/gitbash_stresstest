set -e
g++ my.cpp -o my
g++ generator.cpp -o generator
g++ correct.cpp -o correct

for((i = 1; ; ++i)); do
    ./generator $i > input_file.inp
    ./my < input_file.inp > myAnswer.out
    ./correct < input_file.inp > correctAnswer.out

    diff -Z myAnswer.out correctAnswer.out > /dev/null || break
    echo "Passed:" $i
done

echo "WA !"

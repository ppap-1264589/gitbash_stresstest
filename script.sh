set -e
g++ my.cpp -o my
g++ generator.cpp -o generator
g++ correct.cpp -o correct

for((i = 1; ; ++i)); do
    ./generator $i > input_file
    ./my < input_file > myAnswer
    ./correct < input_file > correctAnswer

    diff -Z myAnswer correctAnswer > /dev/null || break
    echo "Passed: " $i
done

echo "WA !"

echo "Your answer is:"
cat myAnswer
echo "Correct answer is:"
cat correctAnswer

set -e
g++ my.cpp -o my
g++ generator.cpp -o generator
g++ correct.cpp -o correct
starttime=$SECONDS
limit=1000000000
for((i = 1; ; ++i)); do
    ./generator $i > input_file
    ./my < input_file > myAnswer
    runtime=$(( SECONDS -  starttime))
    if ((runtime > limit)); then
        echo "BREAK !"
        exit 1
    fi;


    ./correct < input_file > correctAnswer
    runtime=$(( SECONDS -  starttime))
    if ((runtime > limit)); then
        echo "BREAK !"
        exit 1
    fi;


    diff -Z myAnswer correctAnswer > /dev/null || break
    echo "Passed: " $i

    runtime=$(( SECONDS -  starttime))
    if ((runtime > limit)); then
        echo "BREAK !"
        exit 1
    fi;
done

echo "WA !"

echo "Your answer is:"
cat myAnswer
echo "Correct answer is:"
cat correctAnswer

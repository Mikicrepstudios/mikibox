# Clean up old stuff
rm output/*

# Compile
cd source
g++ main.cpp calculator.cpp -o ../output/mikibox

# Return to dir where we started
cd ..

# Execute code
./output/mikibox

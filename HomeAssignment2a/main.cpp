#include "header.h"

int main() {
    // creating file path
    const char* inputFile = "input.bin";
    const char* outputFile = "output.bin";
    
    //: Opening the binary file using the provided format
    std::ifstream infile;
    infile.open(inputFile, std::ios::binary | std::ios::in);
    if (!infile) {
        std::cerr << "There is an error opening input file!" << std::endl;
        return 1;
    }

    std::size_t fileSize = std::filesystem::file_size(inputFile);

    std::cout << "File size: " << fileSize << " bytes" << std::endl;

    //Dynamically allocate an array to hold file data
    char* buffer = new char[fileSize];

    //Read the file using the provided format
    infile.read((char*)buffer, fileSize);
    infile.close();

    // Reverse the array in-place
	for (std::size_t i = 0; i < fileSize / 2; ++i) {
        std::swap(buffer[i], buffer[fileSize - 1 - i]);
    }

    //Open the output file and write the reversed array using the provided format
	std::ofstream outfile;
	outfile.open(outputFile, std::ios::binary | std::ios::out);
	if (!outfile) {
        std::cerr << "there is an error opening output file!" << std::endl;
        delete[] buffer; // Cleanup before exiting
        return 1;
    }

	outfile.write((char*)buffer, fileSize);
	outfile.close();

    // Clean up dynamically allocated memory
	delete[] buffer;

	std::cout << "File reversed and saved to output.bin!" << std::endl;

	return 0;
}

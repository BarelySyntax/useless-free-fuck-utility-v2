#include <iostream>
#include <random>
#include <vector>

extern std::vector<std::string> phrases;

namespace config {
	constexpr std::string_view nameTag = "{name}";
    constexpr std::string_view phraseTag = "{phrase}";
}

namespace math {
	int random(const int min, const int max) {
  		static std::random_device rd;
  		static std::mt19937 gen(rd());
  		std::uniform_int_distribution<> distr(min, max);
    
    	return distr(gen);
	}
}

namespace helper {
	std::string getRandomPhrase(const std::vector<std::string>& list) {
    	if (list.empty()) {return "is speechless";}
     	return list[math::random(0, list.size() - 1)];
	}
	
	void formatOutput(std::string& templateStr, const std::string& name, const std::string& phrase) {
    	std::size_t pos;
    
    	while ((pos = templateStr.find(config::nameTag)) != std::string::npos) {
        	templateStr.replace(pos, config::nameTag.length(), name);
         	pos += name.length();
     	}
     
     	pos = 0;

    	while ((pos = templateStr.find(config::phraseTag)) != std::string::npos) {
        	templateStr.replace(pos, config::phraseTag.length(), phrase);
         	pos += phrase.length();
    	}
	}
}

int main(int argc, char *argv[]) {
	if (argc <= 1) {
		std::cerr << "The compiled binary expects some arguments, you gave none, silly.\n"; 
		return 1; 
	}
	
    std::string selection = helper::getRandomPhrase(phrases);
    std::string name = argv[1];
    
    if (argc <= 2) {
    	std::cout << name << " " << selection << "\n";
     	return 0;
    } else if (argc == 3) {
    	std::string customString = argv[2];
    	helper::formatOutput(customString, name, selection);
     	std::cout << customString << "\n";
      	return 0;
    } else {
        std::cerr << "Too many arguments, duh.\n";
    }
    
    return 1;
}

#include <sstream>
#include <iostream>
#include <experimental/filesystem>

int main(void) {
   std::stringstream ss;
   std::experimental::filesystem::path current = ".";
   for (auto& entry : std::experimental::filesystem::directory_iterator(current)) {
      ss << entry.path() << std::endl;
   }
   std::cout << "OK";
   return 0;
}

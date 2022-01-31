#include <iostream>     
#include <cstddef>      
#include <valarray>    
#include <stdlib.h>
#include <vector>

void print_matrix(std::vector< std::vector<int> > v) {
  for(int i = 0; i < v.size();i++) {
    for(int j = 0; j < v.at(i).size(); j++) {
      std::cout << v.at(i).at(j) << " ";
    }
    std::cout << "\n";
  }
}

int main (int argc, char* argv[])
{

  int first_eleman = atoi(argv[1]);
  int sutunuzunlugu = atoi(argv[2]);
  int satiruzunlugu = (argc - 3)/sutunuzunlugu;
  std::vector< std::vector<int> > myvector(sutunuzunlugu);

  for(int i=3; i<argc; i+=1){
    int addon = atoi(argv[i]);
    if((i-3) / satiruzunlugu == 0){
        addon *= first_eleman;
    }
    myvector[ (i-3) / satiruzunlugu ].push_back(addon);
  }
  print_matrix(myvector); 

  return 0;
}

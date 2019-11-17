#include<iostream>
#include<utility>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<map>
#include<set>

using namespace std;

struct proyecto {
 string nombre;
 int cantidad;
 proyecto(string nombre1 = "", int cantidad1 = 0) : nombre(std::move(nombre1)), cantidad(cantidad1) {}
};

bool cmp(proyecto &a, proyecto &b) {
 if(a.cantidad > b.cantidad) return true;
 if(a.cantidad < b.cantidad) return false;
    return a.nombre < b.nombre;
}

int main() {
     string line;
     map<string, set<string> > mapa;
     set<string> s;
     vector<proyecto> res;
     string capital;

     while(getline(cin, line)) {
      if(line == "0")
          break;
      if(line[0] == '1') {
        for(auto it_set = begin(s); it_set != end(s); it_set++){
            int cont = 0;
               for(auto it = begin(mapa); it != end(mapa); it++)
                    if(it->second.count(*it_set))
                        cont++;

                if(cont > 1)
                    for(auto it = begin(mapa); it != end(mapa); it++)
                        if(it->second.count(*it_set))
                            it->second.erase(it->second.find(*it_set));
        }

        for(auto it = begin(mapa); it != end(mapa); it++)
            res.emplace_back(it->first, it->second.size());

        sort(res.begin(), res.end(), cmp);
        for(auto it = begin(res); it != end(res); it++)
            printf("%s %d\n", it->nombre.c_str(), it->cantidad);

        res.clear();
        mapa.clear();
        s.clear();
        continue;
      }

      if(line[0] < 'A' || line[0] > 'Z') {
       mapa[capital].insert(line);
       s.insert(line);
      }
      else mapa[line], capital = line;
     }
    return 0;
}
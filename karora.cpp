#include <string>

using namespace std;

class Karora {
    const string gyarto;
    unsigned ora;
    unsigned perc;

public:
    Karora(const string &gyarto) : gyarto(gyarto) {}

    void beallit(unsigned ora, unsigned perc) {
        this->ora = ora;
        this->perc = perc;
    }
    
    void idoTelik() {
        perc++;
        
        if (perc == 60) {
            perc = 0;
            ora++;
            
            if (ora == 24) {
                ora = 0;
            }
        }
    }
};

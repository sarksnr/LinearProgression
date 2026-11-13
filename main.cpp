#include "math.h"

const char*  FILENAME = "test.csv";
int MAX_ITERATION = 1000;
float LEARNING_RATE = 0.01;

class Dataset{
    public:
        float **X;
        float *y;
        int number_predictor;
        int length;

        Dataset(){}

        Dataset(const char* filename){
            length = 0;
            number_predictor = 0;
            int index = 0;
            std::ifstream infile(filenamme);
            std::string line;
            while(std::getline(infile, line)){
                length++;
                if(length==1){
                    int i =0;
                    while(line[i] != '\0'){
                        if(line[i] == ','){
                            number_predictor++;
                        }
                        i++;
                    }
                }
            }
        }
        infile.close();

        X = (float **) malloc(sizeof(float *) * length);
        for(int i = 0; i < length; i++){
            X[i] = (float *) malloc(sizeof(float) * number_predictor);
        }

        
};
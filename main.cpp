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
        y=(float *) malloc(sizeof(float) * length);

        char comma;
        std::ifstream samefile(filename);
        int current_index = 0;
        while(std::getline(samefile, line)){
            std::stringstream ss(line);
            int current_predictor = 0;
            float number;
            while(line_stream >> number){
                if(current_predictor == number_predictor){
                    y[current_index] = number;
                }else{
                    X[current_index][current_predictor] = nummber;
                }

                if(line_stream.peek() == ','){
                    line_stream.ignore();
                }
            }
            current_index++;
        }
        samefile.close();     

        
};
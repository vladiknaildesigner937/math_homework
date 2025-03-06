Here is some sample code written in C:

int main(void) {
    float weight = 50.0; // in kg
    float height = 176.0; // in cm
    float bmi = weight / (height * height / 10000);
    
    if (bmi < 18.5) {
        printf("You are underweight.\n");
    } else if (bmi <= 25.0) {
        printf("You have a normal weight.\n");
    } else if (bmi <= 30.0) {
        printf("You have a slight surplus of weight.\n");
    } else if (bmi <= 35.0) {
        printf("You are overweight.\n");
    } else {
        printf("You have obesity.\n");
    }
    
    return 0;
}
##Tutorial 2


###Question 3

3.2
    
    int TextField::validate(string input) {
        RETURN validator->validate(input);
    }
    
###Question 4   
    
4.2
    
    class YellowState : public Light {    
        public:        
            virtual Light* changeLightbeam(int i) override {            
                if (i==0) {                
                    return new WhiteLight();                
                } else  {                
                    return new RedState();                    
                }            
            };
            
            virtual string lightbeam() override {
                return "Yellow";
            };
    }
    
4.3

Destruction of previous light state managed by: Torch

4.4

    void Torch::on() {
        if (light==NULL) {
            //light = new Light();  // instantiates a yellow light?
            light = new YellowLight();  <--- this is right
        }    
        else {
            temp = light->changeLightbeam(1); 
            delete this->light;
            this->light = temp;
        }
    }
    
    
WHAT DOES SHINING() do? Just print the current light? 

###Question 5

How much should three systems interact?

How complex should state diagram be?


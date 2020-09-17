//
//  main.cpp
//  init.sh
//
//  Created by Oscar Maldonado on 12/15/18.
//  Copyright © 2018 Oscar Maldonado. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>




int main(int argc, const char * argv[]) {

   
    
    
    
    std::string HTML = {"<!DOCTYPE html> \n"
        "<html> \n"
        "<head> \n"
        "<title> Hello world </title> \n"
        "</head> \n"
        "<body>\n "
        "I love you Rebbecca and Oscar \n"
        "</body>\n"
        "</html>\n"
    };
    std::string css = "";
    
    
    std::ofstream htmlFile;
    std::ofstream cssFile;
   
htmlFile.open("/Users/oscarmaldonado/Desktop/html/index.html");
    
    cssFile.open("/Users/oscarmaldonado/Desktop/html/style.css");
    
    htmlFile << HTML.c_str();

    
    
    
    htmlFile.close();
    
    cssFile.close();
    
    
    std::system(" open /Users/oscarmaldonado/Desktop/html/index.html");
    
    
    
    
    
    
    
    
}

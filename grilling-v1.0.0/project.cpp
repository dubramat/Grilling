#include <algorithm>
#include <cassert>
#include <iostream>
#include <string>
#include <iostream> 
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <array>
#include <vector>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;

int main(int argc, char *argv[]){
    ifstream steaks;
    string a = "steaks.txt";
    steaks.open(a);
    if (!steaks.is_open()) {
       cout << "Error opening " << a << endl;
       cout << "MAke sure you correctly downloaded " << a << endl;
       return -1;
    }

    ifstream doneness;
    string b = "done-ness.txt";
    doneness.open(b);
    if (!doneness.is_open()) {
       cout << "Error opening " << b << endl;
       cout << "MAke sure you correctly downloaded " << b << endl;
       return -1;
    }

    const int numMeatChoices = 4;
    string meatArr[80]; 
    string meatCut;
    int numPossCuts = 0;
    while (getline(steaks, meatCut)) {
    meatArr[numPossCuts] = meatCut;
    ++numPossCuts;
  }

    cout << "What cut of steak are you grilling today?" << endl;
    cout << "Please choose from:" << endl;
    for(int i = 0; i < numMeatChoices; ++i){
        cout << meatArr[i] << endl;
    }
    
    string meatType;
    cout << "My meat type: ";

    getline(cin,meatType);
    if(meatType == "new" || meatType == "New" || meatType == "NEW"){
        meatType = "New York Strip";
    }
    meatType = meatType+ "\r";
    bool meatTf = false;
    for(int i = 0; i < numPossCuts; ++i){
        if(meatArr[i] == meatType){
            meatTf = true;
        }
    }
    if(meatTf == false){
        cout << "The meat type you selected cannot be found. Please make sure you included the correct steak type from the choices" << endl;
        return -1;
    }
    double recWeight;
    string heatType;
    int numServings;

if(meatType == ("Burger\r") || meatType == ("burger\r") || meatType == ("BURGER\r")|| meatType == ("Burgers\r") || meatType == ("burgers\r") || meatType == ("BURGERS\r")){

 cout << endl;
 cout << endl;
 cout << endl;
    
    cout << "How many burgers will you want to prepare?" << endl;
    cout << "Number of burgers: ";
    cin >> numServings;

 cout << endl;
 cout << endl;
 cout << endl;
recWeight = numServings*1.1;

heatType = "   - Grill over uniform medium heat. Space the patties evenly on the grill and try to minimize flipping the burgers if possible.\n"
"   - Recommended to flip the burgers once the perimeter of a patty is a orange-ish to light brown/carmel color. Note the amount of time it took to get\n" 
"      to this point (normally around 3-5 minutes depending on the thickness of the patty and the grill heat). By this point, the burger should be\n"  
"      approximately cooked through. Once flipped wait the same approximately the same amount to time before removing the patty from the grill.\n" 
"   - If adding cheese on top, make sure to only add the cheese of your choice approximately 1 minute before removing the patties from the grill.\n" ;

cout << "- Recommended weight for " << numServings <<" burgers: " << recWeight << " lbs of ground beef" << endl;
cout << "- Grill until the meat temperature reaches approximately 155 degrees Fahrenheit and then let the burger rest" << endl;
cout << endl;

cout << "- Recommended grilling instructions:" << endl;
cout << heatType << endl;
cout << endl;

}else{
 cout << endl;
 cout << endl;
 cout << endl;


   const int numDoneChoices = 27;
    string meatDoneNess[numDoneChoices]; 
    string meatDone;
    int numDones = 0;
    while (getline(doneness, meatDone)) {
    meatDoneNess[numDones] = meatDone;
    numDones++;
  }



    cout << "How well done do you want your steak?" << endl;
    cout << "Please choose from:" << endl;
    for(int i = 0; i < 5; ++i){
        cout << meatDoneNess[i] << endl;
    }
    string meatDoneType;
    cout << "I want my steak: ";
     getline(cin, meatDoneType);

    meatDoneType = meatDoneType + "\r";

    bool meatDoneTf = false;
    for(int i = 0; i < (numDoneChoices); ++i){
        if(meatDoneNess[i] == meatDoneType){
            meatDoneTf = true;
        }
    }
    
    if(meatDoneTf == false){
        cout << "The meat wellness type you selected cannot be found. Please make sure you included the correct wellness type from the choices above" << endl;
        return -1;
    }

cout << endl;
      cout << endl;
       cout << endl;

    double thickness;
    cout << "Approximately how thick are the steaks you are preparing between 0.5 and 2 inches? Please round to the nearest half inch" << endl;
    cout << "Thickness (in inches): ";
    cin >> thickness;

if(thickness < 0.5 || thickness > 2){
    cout << endl;
    cout << "ERROR: Please enter a thickness within the specified range." << endl;
    cout << "Please note: cuts of meat outside the range of 0.5 to 2 inches are extremely unpredictable with grilling and aren't, in my experience, reliably grilled." << endl;
    cout << "If someone knows how to grill steaks that are more than 2 inches thick, please reach out to me as I have no idea how to get the temperature eveness correct." << endl;
    cout << "As such, I will not be including directions for such thicknesses. Thanks!" << endl;
    cout << endl;
    return -1;
}

cout << endl;
      cout << endl;
       cout << endl;

    char seasoning;
    bool seasonTf = false;
    cout << "Will you be seasoning your steak(s) yourself?" << endl;
    cout << "Please insert Y or N: "; 
    cin >> seasoning;
    if(seasoning == 'Y' || 'y'){
        seasonTf = true;
    }

     cout << endl;
      cout << endl;
       cout << endl;


    int numServings;
    cout << "How many people will be eating steak?" << endl;
    cout << "Number of people: ";
    cin >> numServings;
    

    int timeToPrepare = 20 + ((seasonTf*((5*numServings)+20)));

double cookTime;

int temp;
recWeight = numServings*1.1 - (floor(numServings/2)*.05);



if(meatType == ("New York Strip\r") || meatType == ("new york strip\r") || meatType == ("New york strip\r") || meatType == ("NEW YORK STRIP\r")){
    
    if(thickness == 0.5){
        thickness = 0.9;
    }
    if(thickness == 1.5){
        thickness = 1.15;
    }
    if(thickness == 2.0){
        thickness = 1.3;
    }

    if(meatDoneType == ("Rare\r") || meatDoneType == ("rare\r") || meatDoneType == ("RARE\r")){
        cookTime = thickness * 6;
        temp = 120;
    }
    else if(meatDoneType == ("Medium-Rare\r") || meatDoneType ==("medium-rare\r") || meatDoneType ==("MEDIUM-RARE\r")
                    || meatDoneType ==("Medium Rare\r") || meatDoneType ==("medium rare\r") || meatDoneType ==("MEDIUM RARE\r")){
        cookTime = thickness * 7.5;
        temp = 130;
    }
    else if(meatDoneType == ("Medium\r") || meatDoneType ==("medium\r") || meatDoneType ==("MEDIUM\r")){
        cookTime = thickness * 8.5;
        temp = 140;
    }
    else if(meatDoneType == ("Medium-Well\r") || meatDoneType ==("medium-well\r") || meatDoneType ==("MEDIUM-WELL\r")
                    || meatDoneType ==("Medium Well\r") || meatDoneType ==("medium well\r") || meatDoneType ==("MEDIUM WELL\r")){
        cookTime = thickness * 10;
        temp = 145;
    }
    else if(meatDoneType == ("Well-Done\r") || meatDoneType ==("well-done\r") || meatDoneType ==("WELL-DONE\r")
                    || meatDoneType ==("Well Done\r") || meatDoneType ==("well done\r") || meatDoneType ==("WELL DONE\r")){
        cookTime = thickness * 11;
        temp = 155;
    }
heatType = "- Grill on medium heat. Keep the fire centered at the center of the grill, keeping the steaks about 1/4 to 1/2 their width away from the heat";
}

if(meatType == ("Sirloin\r") || meatType == ("sirloin\r") || meatType == ("SIRLOIN\r")){
    
    if(thickness == 0.5){
        thickness = 0.8;
    }
    if(thickness == 1.5){
        thickness = 1.2;
    }
    if(thickness == 2.0){
        thickness = 1.4;
    }

    if(meatDoneType == ("Rare\r") || meatDoneType == ("rare\r") || meatDoneType == ("RARE\r")){
        cookTime = thickness * 7;
        temp = 120;
    }
    else if(meatDoneType == ("Medium-Rare\r") || meatDoneType ==("medium-rare\r") || meatDoneType ==("MEDIUM-RARE\r")
                    || meatDoneType ==("Medium Rare\r") || meatDoneType ==("medium rare\r") || meatDoneType ==("MEDIUM RARE\r")){
        cookTime = thickness * 8.5;
        temp = 130;
    }
    else if(meatDoneType == ("Medium\r") || meatDoneType ==("medium\r") || meatDoneType ==("MEDIUM\r")){
        cookTime = thickness * 10;
        temp = 140;
    }
    else if(meatDoneType == ("Medium-Well\r") || meatDoneType ==("medium-well\r") || meatDoneType ==("MEDIUM-WELL\r")
                    || meatDoneType ==("Medium Well\r") || meatDoneType ==("medium well\r") || meatDoneType ==("MEDIUM WELL\r")){
        cookTime = thickness * 11;
        temp = 145;
    }
    else if(meatDoneType == ("Well-Done\r") || meatDoneType ==("well-done\r") || meatDoneType ==("WELL-DONE\r")
                    || meatDoneType ==("Well Done\r") || meatDoneType ==("well done\r") || meatDoneType ==("WELL DONE\r")){
        cookTime = thickness * 12;
        temp = 155;
    }
heatType = "- Grill on med-high heat, slightly to the side of the flames until the last two minutes, then sirloin directly\n" 
            "   over the flames for approximately one minute on each side of the steak" ;
}

if(meatType == ("T-bone\r") || meatType == ("T-BONE\r")|| meatType == ("TBONE\r")|| meatType == ("tbone\r")||
 meatType == ("T-Bone\r")|| meatType == ("t-bone\r")|| meatType == ("Tbone\r")|| meatType == ("T BONE\r")
 || meatType == ("T Bone\r")|| meatType == ("T bone\r")|| meatType == ("t bone\r")){
    meatType = "tbone";
    if(thickness == 0.5){
        thickness = 0.8;
    }
    if(thickness == 1.5){
        thickness = 1.2;
    }
    if(thickness == 2.0){
        thickness = 1.4;
    }

    if(meatDoneType == ("Rare\r") || meatDoneType == ("rare\r") || meatDoneType == ("RARE\r")){
        cookTime = thickness * 6;
        temp = 115;
    }
    else if(meatDoneType == ("Medium-Rare\r") || meatDoneType ==("medium-rare\r") || meatDoneType ==("MEDIUM-RARE\r")
                    || meatDoneType ==("Medium Rare\r") || meatDoneType ==("medium rare\r") || meatDoneType ==("MEDIUM RARE\r")){
        cookTime = thickness * 7.5;
        temp = 125;
    }
    else if(meatDoneType == ("Medium\r") || meatDoneType ==("medium\r") || meatDoneType ==("MEDIUM\r")){
        cookTime = thickness * 9;
        temp = 135;
    }
    else if(meatDoneType == ("Medium-Well\r") || meatDoneType ==("medium-well\r") || meatDoneType ==("MEDIUM-WELL\r")
                    || meatDoneType ==("Medium Well\r") || meatDoneType ==("medium well\r") || meatDoneType ==("MEDIUM WELL\r")){
        cookTime = thickness * 10;
        temp = 140;
    }
    else if(meatDoneType == ("Well-Done\r") || meatDoneType ==("well-done\r") || meatDoneType ==("WELL-DONE\r")
                    || meatDoneType ==("Well Done\r") || meatDoneType ==("well done\r") || meatDoneType ==("WELL DONE\r")){
        cookTime = thickness * 11;
        temp = 150;
    }
heatType = "- Grill on medium heat, slightly to the side of the flames. Keep the fatty part of the tbone closer to the flames and the leaner\n"
"   meat on the opposite side of the bone further away from the heat. In the last two minutes, sear each side of the sirloin on the flames for\n"  
"   approximately 30 seconds. From here, pan fry the tbones in butter for one minute on each side. NOTE: Season the steaks extra well as much of\n" 
"   the seasoning will be lost in the frying. Save the juices from the pan frying";
}

double totalTime = (20 + timeToPrepare + (2*cookTime) + (5*(numServings/2)))/60;

cout << endl;
cout << endl;
cout << endl;



cout << "- Grill time is approximately: " << cookTime << " minutes both sides" << endl;
if(meatType == "tbone"){
    cout << "- Grill until the internal meat temperature reaches approximately " << temp << " degrees Fahrenheit and then pan fry" << endl;
}else{
cout << "- Grill until the internal meat temperature reaches approximately " << temp << " degrees Fahrenheit and then let the meat rest" << endl;
}
cout <<  heatType << endl;
cout << "- Recommended weight for " << numServings <<" servings: " << recWeight << " lbs" << endl;
cout << endl;
cout << "- Total estimated time start to finish: approximately " << fixed << setprecision(1) << totalTime << " hours" << endl;
cout << endl;
cout << endl;
}
return 0;
}

package main

import ("fmt"
	"os"
	"bufio"
	"strings"
	"strconv"
	"math"
)

func uInputChar(prompt string) string {
	fmt.Printf(prompt);
	creader := bufio.NewReader(os.Stdin);
	ctext, _ := creader.ReadString('\n');
	ctext = strings.TrimSuffix(ctext,"\n");
	return ctext
}

func uInputInt(prompt string) int {
	fmt.Printf(prompt);
	ireader := bufio.NewReader(os.Stdin);
	itext, _ := ireader.ReadString('\n');
	itext = strings.TrimSuffix(itext,"\n");
	i, _  := strconv.Atoi(itext);
	return i;
}

func uInputFloat(prompt string) float64 {
	fmt.Printf(prompt);
	ireader := bufio.NewReader(os.Stdin);
	itext, _ := ireader.ReadString('\n');
	itext = strings.TrimSuffix(itext,"\n");
	i, _  := strconv.ParseFloat(itext, 64);
	return i;

}

/*
func roundFloat(floatIn float64) float64 {
	m := math.Ceil(floatIn * 100)/100;
	return m
}
*/

func main(){
	rLen := uInputFloat("What is the length of the room? ");
	rWidth := uInputFloat("What is the width of the room? ");
	areaFeet := rLen * rWidth
	areaFeet = math.Ceil(areaFeet * 100)/100
	areaMeters := areaFeet * 0.09290304
	areaMeters = math.Ceil(areaMeters * 100)/100
	fmt.Println("You entered dimensions of ", rLen, " feet by ", rWidth, " feet."	);
	fmt.Println("The area is\n", areaFeet, "square feet\n", areaMeters, "square meters");
}

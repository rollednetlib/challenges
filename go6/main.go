package main

import ("fmt"
	"os"
	"bufio"
	"strings"
	"strconv"
	"time"
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

func main(){
	cTime := time.Now();
	currentAge := uInputInt("What is your current age? ");
	retireAge := uInputInt("At what age would you like to retire? ");
	rTime := cTime.AddDate(retireAge - currentAge,0,0)
	if retireAge > currentAge {
		fmt.Println("You have ", retireAge - currentAge, " years left until you can retire\nIt's ", cTime.Year(), ", so you can retire in ", rTime.Year());
	} else {
		fmt.Println("You should have reatired ", currentAge - retireAge, " years ago in", rTime.Year(), "!");
	}


}

package main

import ("fmt"
	"os"
	"bufio"
	"strings"
	"strconv"
)


func main(){
	fmt.Printf("What is the input string? ");
	reader := bufio.NewReader(os.Stdin);
	text, _ := reader.ReadString('\n');
	text = strings.TrimSuffix(text, "\n");
	fmt.Printf(text + " has " + strconv.Itoa(len(text)) + " characters.\n");

}

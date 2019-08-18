package main

import ("fmt"
	"os"
	"bufio"
	"strings"
)

func uInput(prompt string) string {
	fmt.Printf(prompt);
	reader := bufio.NewReader(os.Stdin);
	text, _ := reader.ReadString('\n');
	text = strings.TrimSuffix(text, "\n");
	return text
}

func main(){
	noun := uInput("Enter a noun: ");
	verb := uInput("Enter a verb: ");
	adjective := uInput("Enter an adjective: ");
	adverb := uInput("Enter an adverb: ");
	fmt.Printf("Do you " + verb + " your " + adjective + " " + noun + " " + adverb + "? That is disturbing.\n");
}

package main

import("fmt"
	"bufio"
	"os"
	"strings"
)

func main(){
	fmt.Printf("What is your name? ");
	reader := bufio.NewReader(os.Stdin);
	text, _ := reader.ReadString('\n');
	text = strings.TrimSuffix(text, "\n");
	fmt.Printf("Hello, " + text + ", it is nice to meet you!\n");
}

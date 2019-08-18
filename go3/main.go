package main

import ("fmt"
	"os"
	"bufio"
	"strings"
)

func main(){
	fmt.Printf("What is the quote? ");
	reader := bufio.NewReader(os.Stdin);
	quote, _ := reader.ReadString('\n');
	quote = strings.TrimSuffix(quote, "\n");

	fmt.Printf("Who said it? ");
	author, _ := reader.ReadString('\n');
	author = strings.TrimSuffix(author, "\n");

	fmt.Printf(author + " says, " + quote + "\n");
}

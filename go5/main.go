package main

import ("fmt"
	"os"
	"bufio"
	"strings"
	"strconv"
)

func uInput(prompt string) int {
	fmt.Printf(prompt);
	reader := bufio.NewReader(os.Stdin);
	text, _ := reader.ReadString('\n');
	text = strings.TrimSuffix(text, "\n");
	i, _  :=strconv.Atoi(text);
	return i
}

func main(){
	fn := uInput("What is the first number? ");
	sn := uInput("What is the second number? ");
	fmt.Printf("%d + %d = %d\n",sn, fn, fn + sn);
	fmt.Printf("%d - %d = %d\n",sn, fn, fn - sn);
	fmt.Printf("%d * %d = %d\n",sn, fn, fn * sn);
	fmt.Printf("%d / %d = %d\n",sn, fn, fn / sn);
}

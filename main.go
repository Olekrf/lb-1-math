package main

import "fmt"

func main() {

	fmt.Println("A\tB\tr\tnotr\tp -> q\tr -> p")
	fmt.Println("-----------------------------------------------")

	bools := []bool{true, false}

	for _, p := range bools {
		for _, q := range bools {
			for _, r := range bools {

				implication1 := !p || q
				implication2 := !r || p
				notR := !r

				fmt.Printf("%t\t%t\t%t\t%t\t%t\t%t\n", p, q, r, notR, implication1, implication2)
			}
		}
	}

}

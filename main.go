package main

import "fmt"

func main() {

	fmt.Println("A\tB\tr\tnotr\tp -> q\tr -> p\tF1")
	fmt.Println("-----------------------------------------------")

	bools := []bool{true, false}

	for _, p := range bools {
		for _, q := range bools {
			for _, r := range bools {

				implication1 := !p || q
				implication2 := !r || p
				notR := !r
				f1 := implication1 == implication2

				fmt.Printf("%t\t%t\t%t\t%t\t%t\t%t\t%t\n", p, q, r, notR, implication1, implication2, f1)
			}
		}
	}

}

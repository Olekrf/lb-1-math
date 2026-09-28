package main

import "fmt"

func toint(b bool) int {
	if b {
		return 1
	}
	return 0
}

func main() {

	fmt.Println("| p | q | r | Result |")
	fmt.Println("|---|---|---|--------|")

	bools := []bool{true, false}

	for _, p := range bools {
		for _, q := range bools {
			for _, r := range bools {

				implication1 := !p || q
				implication2 := !r || p
				notR := !r
				f1 := implication1 == implication2
				conjuction1 := !(q && notR)
				disjunction1 := p || notR
				f2 := conjuction1 == disjunction1
				result := f1 || f2

				fmt.Printf("| %d | %d | %d |   %d    |\n", toint(p), toint(q), toint(r), toint(result))
				fmt.Printf("|---|---|---|--------|\n")
			}
		}
	}

}

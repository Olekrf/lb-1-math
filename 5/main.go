package main

import "fmt"

func toint(b bool) int {
	if b {
		return 1
	}
	return 0
}

func main() {
	fmt.Println("| p | q | r | s | f1 | f2 | f3 | g | result |")
	fmt.Println("|---|---|---|---|----|----|----|---|--------|")

	bools := []bool{true, false}

	for _, p := range bools {
		for _, q := range bools {
			for _, r := range bools {
				for _, s := range bools {

					f1 := !p || (q || r)
					f2 := !q || (p || s)
					f3 := !s || (q || r)

					g := q

					result := f1 && f2 && f3 && !g

					fmt.Printf("| %d | %d | %d | %d |  %d |  %d |  %d | %d |    %d   |\n",
						toint(p), toint(q), toint(r), toint(s), toint(f1), toint(f2), toint(f3), toint(g), toint(result))
					fmt.Printf("|---|---|---|---|----|----|----|---|--------|\n")
				}
			}
		}
	}
}

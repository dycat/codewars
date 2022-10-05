func sumOfPositives (_ numbers: [Int] ) -> Int {
    // Your code here
    var sum = 0
    for num in numbers {
        if num > 0 {
            sum += num
        }
    }
    return sum
}
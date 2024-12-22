def ballsAndOvers (balls):
    return round(balls/6, 1)

balls = int(input("Enter the Number of balls Bowled: "))
print(f"The Total number of Overs bowled are:", ballsAndOvers(balls))
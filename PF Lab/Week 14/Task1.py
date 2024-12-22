def landMass(area):
    landmass = round(area / 148940000 *100, 2)
    return landmass

name = input("Enter the Country name: ").title()
area = int(input("Enter the Area: "))

print(f"{name} is {landMass(area)}% of the World's total Landmass")
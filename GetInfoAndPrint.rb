=begin
Just a simple Ruby program.
Get user's info and print it out
Programmer:         Victoria Brown
Date:               October 2016
=end

# Get user's first name and set it to variable first_name
print "What's your first name?"
first_name = gets.chomp.capitalize!

print "What's your last name?"
last_name = gets.chomp.capitalize!

print "What city are you from?"
city = gets.chomp.capitalize!

print "What state are you from (enter abbreviated format such as TX for Texas)?"
state = gets.chomp.upcase!

puts "Your name is #{first_name} #{last_name}"
puts "You are from #{city}, #{state}"

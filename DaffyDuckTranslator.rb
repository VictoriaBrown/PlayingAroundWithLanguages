=begin
Just a simple Ruby program.
Translates string entered into Daffy Duck speech!
Programmer:         Victoria Brown
Date:               October 2016
=end

# Get string from user
print "Please enter what you'd like to be translated to Daffy Duck's tounge: "
user_input = gets.chomp

# if string has an s
if user_input.include? "s"
    user_input.gsub!(/s/, "th")
    puts "#{user_input}"
# if string has an S
elsif user_input.include? "S"
    user_input.gsub!(/S/, "Th")
    puts "#{user_input}"
# if string is empty
elsif user_input == ""
    puts "nothing to replace! you didn't enter anything :'("
# if string has a sc
elsif user_input.include? "sc"
    user_input.gsub!(/sc/, "th")
    puts "#{user_input}"
# no more options! there were no s's in string
else
    puts "You didn't enter any s's in string! There was nothing to change."
end

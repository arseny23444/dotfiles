def interm_res(res_length,num)
  num_length=num.to_s.length
  " "*(res_length-num_length) + num.to_s
end
def read_safe_positive_number(enter_first_number)
end
 
puts "Введите первое число:"
x = gets.strip.to_i
while x<= 0
puts "Число должно быть больше 0. Введите число снова:"
x = gets.strip.to_i
end
 
 
 
def read_safe_positive_number(enter_second_number)
end
puts "Введите второе число:"
y = gets.strip.to_i
while y<= 0
puts "Число должно быть больше 0. Введите число снова:"
y = gets.strip.to_i
end
 
def sum(x,y)
@a= x.to_i+y.to_i
end
def sub(x,y)
@a= x.to_i-y.to_i
end
 
puts "Укажите операцию:"
z=gets.strip
 
if z=="+"
  sum(x,y)
end
 
if z=="-"
  sub(x,y)
end
 
q = [ x, z, y ].join
result=eval(q)
res_length=result.to_s.length
 
if z == "*"
   puts interm_res(res_length,x),"*",interm_res(res_length,y),"-"*res_length
  i=0
end
y.to_s.split('').reverse.each do |digit|
     interm = x.to_i*digit.to_i
     puts "#{' '*(res_length.to_i-interm.to_s.length - i)}#{interm.to_s}"
     i+=1
end
puts '-'*res_length
 
 
puts result
 
if z=="+"
  puts sum(x,y)
elsif z=="-"
  puts sub(x,y)
  
  
puts x.to_s.rjust(6)
puts z.rjust(6)
puts y.to_s.rjust(6)
puts "-------".rjust(6)
puts @a.to_s.rjust(6)

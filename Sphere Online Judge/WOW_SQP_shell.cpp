t=0
read t
while((t--))
do
read n
a=0
for((i=2;i<$n/i;i++))
do
k=$((n/(i*i)))
x=$((k*i*i))
y=$((k*(i-1)*(i-1)))
if [ $((x*y)) -gt $a ]
then
a=$((x*y))
m=$x
n=$y
fi
done
s='*'
echo "$n$s$m"
done

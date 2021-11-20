while [ 1 -lt 5 ]
do
echo input value
read  -a UsIn
getvar="GET"
setvar="SET"
sortvar="SOR"
if [[ "${UsIn[0]}" == "$getvar" ]]
then
echo your input is ${UsIn[0]} 
./main GET


elif [[ "${UsIn[0]}" == "$setvar" ]]
then
echo your input ${UsIn[0]}
echo your second input is ${UsIn[1]}
./main "${UsIn[0]}" "${UsIn[1]}" ./led -q -s




elif [[ "${UsIn[0]}" == "$sortvar" ]]
then
echo your input is  ${UsIn[0]}
./main "${UsIn[0]}" "${UsIn[1]}" /  ./led -q -s


fi

done

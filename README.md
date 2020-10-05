# Sorting

Here i have created normal sorting functions which shows the time taken by each sorting technique in the worst case !!  

Till now i have added only bubble , inertion and selection sort and the result is bubble sort takes the most time , then insertion and at last with the least time is selection .

Sorting technique is adaptive when the time taken to sort an already sorted list is minimum.

Sorting technique is stable if after sorting the order is preserved . E.g. - we have a list {8,4,6,8',2,9} (8' is 8 only , i have just taken it to distinguish it from the other one ). So on sorting this we get {2,4,6,8,8',9} i.e. 8' comes after 8 only as was the case in the given list .
 
Bubble sort is not adaptive itself we make it adaptive by adding a flag variable . Although it is stable .

Insertion Sort is both stable and adaptive on its own.

Selection sort is not adaptive.
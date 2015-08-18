def inputValue(length):

     list = []
     newList = []
     list = input().strip().split(' ')

     for val in list :
          newList.append(int(val))
     
     return newList[0:length]

def solve(list) :

     lis = [1]
     max = 1

     for i in range(1,len(list)) :
          vMax = 0
          iMax = 0
          lis.append(1)
          for j in range(0,i) :
                        
               if list[j] < list[i] :
                    if vMax < list[j] :
                         lis[i] += 1

                    elif list[j] < list[iMax] and lis[j] > lis[iMax] :
                         #print('여기! j : ' + str(j) + ', iMax : ' + str(iMax))
                         lis[i] = lis[j] + 1  
                    vMax = list[j]
                    iMax = j            

          #print('list : ' + str(list))
          #print('lis : ' + str(lis))      

          if lis[i] > max :
               max = lis[i]
          #print(str(max))

     return max       
          
def main():
     num = int(input())

     for i in range(num) :

          path = []
          length = int(input())
          list = inputValue(length)

          print(str(solve(list)))

     return 0
     
main()

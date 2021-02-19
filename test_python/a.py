data = ['Mon' , 'Tue' , 'Wed' , 'Thu' , 'Fri', 'Sat' , 'Sun' ]
def dayofweek(d, m, y): 
	t = [ 0, 3, 2, 5, 0, 3, 
		5, 1, 4, 6, 2, 4 ] 
	y -= m < 3
	return data[(( y + int(y / 4) - int(y / 100) 
			+ int(y / 400) + t[m - 1] + d) % 7)-1] 

# day = dayofweek(30, 8, 2010)
# print(type(day))  


#input D

D={
    '2020-01-01':-6,
    '2020-01-02':4,
    '2020-01-03':6,
    '2020-01-04':12,
    '2020-01-05':14,
    '2020-01-06':2,
    '2020-01-07':4,
    '2020-01-08':-2,

}

ans={
    'Mon':0,
    'Tue':0,
    'Wed':0,
    'Thu':0,
    'Fri':0,
    'Sat':0,
    'Sun':0
}

# date='2020-01-05'
# data=date.split('-')
for date in D:
    date_array=date.split('-')
    ans[dayofweek(int(date_array[2]),int(date_array[1]),int(date_array[0]))]+=D[date]
print(ans)

for x in range(1,6):
    if(ans[data[x]]==0):
        ans[data[x]]=(ans[data[x-1]]+ans[data[x+1]])//2
print(ans)

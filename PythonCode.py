price=int(input("enter price"))
qty=int(input("enter quantity"))
amt=price*qty
try:
    assert (price<=0),"Invalid amount"
except AssertionError as msg:
    print(msg)
    if amt>10000:
        print ("10% discount applicable")
        discount=amt*10/100
        amt=amt-discount
        print ("amount payable:",amt)
    else:
        if amt>5000:
            print ("5% discount applicable")
            discount=amt*5/100
            amt=amt-discount
            print ("amount payable:",amt)
        else:
            if amt>2000:
                print ("2% discount applicable")
                discount=amt*2/100
                amt=amt-discount
                print ("amount payable:",amt)
            else:
                if amt>1000:
                    print ("1% discount applicable")
                    discount=amt/100
                    amt=amt-discount
                    print ("amount payable:",amt)
                else:
                    print ("no discount applicable")
                    print ("amount payable:",amt)
    
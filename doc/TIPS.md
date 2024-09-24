# install asn1c
git clone https://github.com/vlm/asn1c.git

test -f configure || autoreconf -iv

sudo ./configure

sudo make 

sudo make install

# asn1c asn
asn1c -fcompound-names *.asn
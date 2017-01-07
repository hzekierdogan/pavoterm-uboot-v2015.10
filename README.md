# pavoterm_uboot_v2015_10
# mx6q/dl/s/spl pavo terminal u-boot v2015.10 
 
# Download repository
    git clone https://github.com/hzekierdogan/pavoterm-uboot-v2015.10.git
    cd pavoterm-uboot-v2015.10.git
 
# Install cross compiler
    apt-get install gcc-arm-linux-gnueabihf
 
# Setup cross compiler
    export CROSS_COMPILE=arm-linux-gnueabihf-
    export ARCH=arm
 
# Build
    make distclean
    make mx6dlsabresd_defconfig
    make


# Access-control-system-calls-modification
@author George Kokolakis csd4254 (gkokol@ics.forth.gr)


make ARCH=i386 bzImage

qemu-system-i386 -hda hy457-linux.img -append " root=/dev/hda" -kernel linux-2.6.38.1/arch/x86/boot/bzImage -curses

cd  linux-2.6.38.1
make ARCH=i386 bzImage
cd ..
qemu-system-i386 -hda hy457-linux.img -append " root=/dev/hda" -kernel linux-2.6.38.1/arch/x86/boot/bzImage -curses


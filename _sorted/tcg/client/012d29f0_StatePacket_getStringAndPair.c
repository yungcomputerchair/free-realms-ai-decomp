// addr: 0x012d29f0
// name: StatePacket_getStringAndPair
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StatePacket_getStringAndPair(void * this, void * outText, int *
   outFirstValue, int * outSecondValue) */

void __thiscall
StatePacket_getStringAndPair(void *this,void *outText,int *outFirstValue,int *outSecondValue)

{
                    /* Copies out the string at offset 0xc4 and two 32-bit values at offsets
                       0xe0/0xe4. It appears to be the getter counterpart to 012d29c0, but exact
                       field names are unknown. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (outText,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )((int)this + 0xc4),0,0xffffffff);
  *outFirstValue = *(int *)((int)this + 0xe0);
  *outSecondValue = *(int *)((int)this + 0xe4);
  return;
}


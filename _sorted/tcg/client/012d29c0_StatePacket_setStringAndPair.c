// addr: 0x012d29c0
// name: StatePacket_setStringAndPair
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StatePacket_setStringAndPair(void * this, void * text, int firstValue_,
   int secondValue_) */

void __thiscall StatePacket_setStringAndPair(void *this,void *text,int firstValue_,int secondValue_)

{
                    /* Sets a string field at offset 0xc4 and two adjacent 32-bit fields at offsets
                       0xe0/0xe4. Caller 014f4a30 serializes this state-like object into command
                       payloads, but the exact class/field names are not proven. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xc4),
             text,0,0xffffffff);
  *(int *)((int)this + 0xe0) = firstValue_;
  *(int *)((int)this + 0xe4) = secondValue_;
  return;
}


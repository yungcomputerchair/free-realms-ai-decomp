// addr: 0x0046d522
// name: FUN_0046d522
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int construct_36byte_at(void * this, int base_, int index_, undefined4 value_)
    */

int __thiscall construct_36byte_at(void *this,int base_,int index_,undefined4 value_)

{
                    /* Constructs or initializes a 0x24-byte element at base + index*0x24 through
                       FUN_0046c325, then returns the next element pointer. Could be
                       template/container support; class identity is not evident. */
  FUN_0046c325(base_,index_,value_,this);
  return index_ * 0x24 + base_;
}


// addr: 0x01524770
// name: FUN_01524770
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Vector28_pushTripleWithKey_3(uint key_, void * a, void * b, void * c) */

void __thiscall Vector28_pushTripleWithKey_3(void *this,uint key_,void *a,void *b,void *c)

{
  void *unaff_ESI;
  
                    /* Pushes one scalar key and three vector-like arguments into the same output
                       sequence. */
  FUN_0042c155(&key_);
  StdVector28_pushBack((void *)((int)this + 0x1c),a,unaff_ESI);
  StdVector28_pushBack((void *)((int)this + 0x2c),b,unaff_ESI);
  StdVector28_pushBack((void *)((int)this + 0x3c),c,unaff_ESI);
  return;
}


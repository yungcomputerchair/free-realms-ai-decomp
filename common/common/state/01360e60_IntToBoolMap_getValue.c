// addr: 0x01360e60
// name: IntToBoolMap_getValue
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool IntToBoolMap_getValue(void * this, int key_) */

bool __fastcall IntToBoolMap_getValue(void *this,int key_)

{
  bool *pbVar1;
  int *unaff_retaddr;
  
                    /* Looks up or inserts an integer key in an IntToBoolMap and returns the stored
                       boolean byte. */
  pbVar1 = IntToBoolMap_getOrInsert((void *)((int)this + 0x1cc),&stack0x00000004,unaff_retaddr);
  return *pbVar1;
}


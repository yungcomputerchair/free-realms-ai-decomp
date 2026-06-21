// addr: 0x014573f0
// name: IntPointerMap_copyCtorWrapper
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int IntPointerMap_copyCtorWrapper(int thisMap_, void * sourceMap) */

int __thiscall IntPointerMap_copyCtorWrapper(void *this,int thisMap_,void *sourceMap)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Exception-frame wrapper around the int-pointer map copy constructor. It
                       invokes the real copy initialization and returns the destination map pointer.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c2e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  IntPointerMap_copyCtor(this,(void *)thisMap_);
  ExceptionList = local_c;
  return (int)this;
}


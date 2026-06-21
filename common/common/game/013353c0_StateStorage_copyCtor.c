// addr: 0x013353c0
// name: StateStorage_copyCtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StateStorage_copyCtor(void * dst, void * src) */

void * __thiscall StateStorage_copyCtor(void *this,void *dst,void *src)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs an object by copying its leading word and constructing a
                       nested member beginning at offset +4 through 01335270. The nested helper
                       initializes additional state/storage data. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167b2eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)dst;
  FUN_01335270((int)dst + 4);
  ExceptionList = local_c;
  return this;
}


// addr: 0x01386840
// name: ReturnValueMap_copyFromEnvironment
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ReturnValueMap_copyFromEnvironment(void * this, void * source) */

void * __thiscall ReturnValueMap_copyFromEnvironment(void *this,void *source)

{
  uint uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies three words produced from source into this ReturnValueMap-like object
                       and then releases the temporary/source helper state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016832b0;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  FUN_013852b0(source);
  *(undefined4 *)((int)this + 4) = local_1c;
  *(undefined4 *)((int)this + 8) = local_18;
  *(undefined4 *)((int)this + 0xc) = local_14;
  local_4 = 0xffffffff;
  FUN_013845d0(uVar1);
  ExceptionList = local_c;
  return this;
}


// addr: 0x01457310
// name: IntPointerMap_copyCtor
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int IntPointerMap_copyCtor(void * this, void * sourceMap) */

int __thiscall IntPointerMap_copyCtor(void *this,void *sourceMap)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Initializes an int-pointer map header/sentinel, zeroes the size, and clones
                       entries from a source map. This is the real copy-constructor body used by the
                       wrapper at 014573f0. */
  local_8 = 0xffffffff;
  puStack_c = &LAB_0169c2c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_014566c0();
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  local_8 = 0;
  IntPointerMap_copyTreeFrom(this,sourceMap);
  ExceptionList = local_10;
  return (int)this;
}


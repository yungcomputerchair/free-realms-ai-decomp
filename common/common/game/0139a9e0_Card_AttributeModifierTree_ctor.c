// addr: 0x0139a9e0
// name: Card_AttributeModifierTree_ctor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Card_AttributeModifierTree_ctor(int this_) */

int __fastcall Card_AttributeModifierTree_ctor(int this_)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an empty Card attribute-modifier rb-tree by allocating a +0x21
                       sentinel header, self-linking it, and zeroing the count. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01684db8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0138dca0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)(this_ + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(this_ + 4) + 4) = *(int *)(this_ + 4);
  *(undefined4 *)*(undefined4 *)(this_ + 4) = *(undefined4 *)(this_ + 4);
  *(int *)(*(int *)(this_ + 4) + 8) = *(int *)(this_ + 4);
  *(undefined4 *)(this_ + 8) = 0;
  ExceptionList = local_c;
  return this_;
}


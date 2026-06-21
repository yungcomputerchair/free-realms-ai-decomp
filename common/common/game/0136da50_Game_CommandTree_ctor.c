// addr: 0x0136da50
// name: Game_CommandTree_ctor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Game_CommandTree_ctor(int this_) */

int __fastcall Game_CommandTree_ctor(int this_)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an empty rb-tree by allocating a header/sentinel with sentinel
                       flag at +0x25, linking it to itself, and zeroing the count. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016806f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = RbTreeNode25_allocHeader();
  *(void **)(this_ + 4) = pvVar1;
  *(undefined1 *)((int)pvVar1 + 0x25) = 1;
  *(int *)(*(int *)(this_ + 4) + 4) = *(int *)(this_ + 4);
  *(undefined4 *)*(undefined4 *)(this_ + 4) = *(undefined4 *)(this_ + 4);
  *(int *)(*(int *)(this_ + 4) + 8) = *(int *)(this_ + 4);
  *(undefined4 *)(this_ + 8) = 0;
  ExceptionList = local_c;
  return this_;
}


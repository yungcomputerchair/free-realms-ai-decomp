// addr: 0x013755d0
// name: Game_ArchivedTurnTree_ctor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Game_ArchivedTurnTree_ctor(int this_) */

int __fastcall Game_ArchivedTurnTree_ctor(int this_)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an empty rb-tree with a +0x21 sentinel-byte header and self-linked
                       root/left/right pointers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01681338;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_01352d10(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(int *)(this_ + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(this_ + 4) + 4) = *(int *)(this_ + 4);
  *(undefined4 *)*(undefined4 *)(this_ + 4) = *(undefined4 *)(this_ + 4);
  *(int *)(*(int *)(this_ + 4) + 8) = *(int *)(this_ + 4);
  *(undefined4 *)(this_ + 8) = 0;
  ExceptionList = local_c;
  return this_;
}


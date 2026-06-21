// addr: 0x006ae90e
// name: RbTree006a_insertUnique
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall RbTree006a_insertUnique(void *param_1)

{
  void *this;
  bool bVar1;
  undefined4 *extraout_EAX;
  undefined4 uVar2;
  int *unaff_EDI;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Attempts to insert a key/value pair into a red-black tree if an equivalent
                       node is not already present, returning 1 on insertion and 0 if the checked
                       iterator already matches. Evidence is iterator construction/equality checks
                       and insertion helper FUN_006ad77d. */
  this = (void *)((int)param_1 + 0x24);
  StdRbTreeInt_find_006a_alt(this,local_1c,&stack0x00000004,unaff_EDI);
  uVar2 = *extraout_EAX;
  local_8 = extraout_EAX[1];
  local_c = uVar2;
  RbTreeIterator_ctorFromNode_006a(*(undefined4 *)((int)param_1 + 0x28),this);
  bVar1 = RbTreeIterator_equalsChecked(&local_c,local_14);
  if (bVar1) {
    uVar2 = 0;
  }
  else {
    RbTreeIterator_ctorFromNode_006a(**(undefined4 **)((int)param_1 + 0x28),this);
    bVar1 = RbTreeIterator_equalsChecked(&local_c,local_14);
    if (bVar1) {
      FUN_006ad77d(local_1c,uVar2,local_8);
      BlockAllocator8192_trimFreeBlocks(param_1);
    }
    else {
      FUN_006ad77d(local_1c,uVar2,local_8);
    }
    uVar2 = 1;
  }
  return uVar2;
}


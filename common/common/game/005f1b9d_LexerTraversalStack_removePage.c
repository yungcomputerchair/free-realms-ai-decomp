// addr: 0x005f1b9d
// name: LexerTraversalStack_removePage
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint LexerTraversalStack_removePage(void * this, int key) */

uint __fastcall LexerTraversalStack_removePage(void *this,int key)

{
  void *this_00;
  bool bVar1;
  undefined4 *extraout_EAX;
  uint3 extraout_var;
  uint uVar2;
  undefined4 extraout_EAX_00;
  undefined4 uVar3;
  int *unaff_EDI;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Finds a page/key in a lexer traversal tree, removes or advances it, and
                       returns success when the key existed. */
  this_00 = (void *)((int)this + 0x24);
  StdRbTreeInt_find_nodeFlag21C_alt(this_00,local_1c,&stack0x00000004,unaff_EDI);
  uVar3 = *extraout_EAX;
  local_8 = extraout_EAX[1];
  local_c = uVar3;
  RbTreeIterator_ctorFromNode(*(undefined4 *)((int)this + 0x28),this_00);
  bVar1 = CheckedTreeIterator_equals_nodeFlag21C(&local_c,local_14);
  if (bVar1) {
    uVar2 = (uint)extraout_var << 8;
  }
  else {
    RbTreeIterator_ctorFromNode(**(undefined4 **)((int)this + 0x28),this_00);
    bVar1 = CheckedTreeIterator_equals_nodeFlag21C(&local_c,local_14);
    if (bVar1) {
      FUN_005edb41(local_1c,uVar3,local_8);
      BlockAllocator4096_trimFreeBlocks(this);
      uVar3 = extraout_EAX_00;
    }
    else {
      uVar3 = FUN_005edb41(local_1c,uVar3,local_8);
    }
    uVar2 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar2;
}


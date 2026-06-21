// addr: 0x005eab54
// name: LexerPagedSet_selectPage1000
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint LexerPagedSet_selectPage1000(void * this, int absoluteIndex, uint flags)
    */

uint __thiscall LexerPagedSet_selectPage1000(void *this,int absoluteIndex,uint flags)

{
  bool bVar1;
  undefined4 *extraout_EAX;
  uint3 extraout_var;
  int iVar2;
  uint uVar3;
  int *unaff_EDI;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Findes the page containing an absolute index, stores the page pointer,
                       page-relative offset against a 0x1000 base, and masked flags. */
  StdRbTreeInt_find_nodeFlag21C_alt((void *)((int)this + 0x24),local_1c,&absoluteIndex,unaff_EDI);
  local_c = *extraout_EAX;
  local_8 = extraout_EAX[1];
  RbTreeIterator_ctorFromNode(*(undefined4 *)((int)this + 0x28),(void *)((int)this + 0x24));
  bVar1 = CheckedTreeIterator_equals_nodeFlag21C(&local_c,local_14);
  if (bVar1) {
    uVar3 = (uint)extraout_var << 8;
  }
  else {
    iVar2 = CheckedTreeIterator_derefValue_nodeFlag21B();
    iVar2 = *(int *)(iVar2 + 4);
    *(int *)((int)this + 0x10) = iVar2;
    uVar3 = -(uint)(*(int *)((int)this + 4) != 0) & flags;
    *(int *)((int)this + 0x14) = absoluteIndex - *(int *)(iVar2 + 0x1000);
    *(uint *)((int)this + 0x1c) = uVar3;
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  return uVar3;
}


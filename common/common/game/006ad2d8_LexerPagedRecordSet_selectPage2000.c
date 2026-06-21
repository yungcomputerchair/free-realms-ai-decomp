// addr: 0x006ad2d8
// name: LexerPagedRecordSet_selectPage2000
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint LexerPagedRecordSet_selectPage2000(void * this, int absoluteIndex, uint
   flags) */

uint __thiscall LexerPagedRecordSet_selectPage2000(void *this,int absoluteIndex,uint flags)

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
  
                    /* Selects the 0x2000-sized page containing an absolute index, then stores the
                       page pointer, relative offset, and masked flags. */
  StdRbTreeInt_find_006a_alt((void *)((int)this + 0x24),local_1c,&absoluteIndex,unaff_EDI);
  local_c = *extraout_EAX;
  local_8 = extraout_EAX[1];
  RbTreeIterator_ctorFromNode_006a(*(undefined4 *)((int)this + 0x28),(void *)((int)this + 0x24));
  bVar1 = RbTreeIterator_equalsChecked(&local_c,local_14);
  if (bVar1) {
    uVar3 = (uint)extraout_var << 8;
  }
  else {
    iVar2 = RbTreeIterator_getValue_006a();
    iVar2 = *(int *)(iVar2 + 4);
    *(int *)((int)this + 0x10) = iVar2;
    uVar3 = -(uint)(*(int *)((int)this + 4) != 0) & flags;
    *(int *)((int)this + 0x14) = absoluteIndex - *(int *)(iVar2 + 0x2000);
    *(uint *)((int)this + 0x1c) = uVar3;
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  return uVar3;
}


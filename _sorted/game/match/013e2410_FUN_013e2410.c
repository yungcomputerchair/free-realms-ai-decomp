// addr: 0x013e2410
// name: FUN_013e2410
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 lookup_int_in_selected_map(int this_, undefined4 key_, char
   useSecondMap_) */

undefined4 __thiscall
lookup_int_in_selected_map(void *this,int this_,undefined4 key_,char useSecondMap_)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_8 [8];
  
                    /* Chooses one of two tree/map members at this+0x14 or this+0x20, looks up key,
                       and returns the found node's value field at +0x10 or 0 when absent. Class
                       identity is not available from this context. */
  iVar5 = (int)this + 0x20;
  if ((char)key_ == '\0') {
    iVar5 = (int)this + 0x14;
  }
  if ((iVar5 != 0) && (*(int *)(iVar5 + 8) != 0)) {
    piVar4 = (int *)FUN_013e21b0(local_8,&this_);
    iVar1 = *piVar4;
    iVar2 = piVar4[1];
    iVar3 = *(int *)(iVar5 + 4);
    if ((iVar1 == 0) || (iVar1 != iVar5)) {
      FUN_00d83c2d();
    }
    if (iVar2 != iVar3) {
      if (iVar1 == 0) {
        FUN_00d83c2d();
      }
      if (iVar2 == *(int *)(iVar1 + 4)) {
        FUN_00d83c2d();
      }
      return *(undefined4 *)(iVar2 + 0x10);
    }
  }
  return 0;
}


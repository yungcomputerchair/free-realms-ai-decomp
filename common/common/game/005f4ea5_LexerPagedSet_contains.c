// addr: 0x005f4ea5
// name: LexerPagedSet_contains
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool LexerPagedSet_contains(void * this, int value) */

bool __thiscall LexerPagedSet_contains(void *this,int value)

{
  int iVar1;
  bool bVar2;
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
                    /* Checks whether a value lies within the populated bounds of a paged set/map
                       and prepares a page-local iterator for it when present. */
  iVar1 = *(int *)((int)this + 0xc);
  if ((value < *(int *)(iVar1 + 0x1000)) || (*(int *)((int)this + 0x20) < value)) {
    bVar2 = false;
  }
  else {
    local_8 = *(int *)((int)this + 0x10);
    if ((value < *(int *)(local_8 + 0x1000)) ||
       ((*(int *)(local_8 + 0x1004) + *(int *)(local_8 + 0x1000) <= value &&
        ((*(int *)(local_8 + 0x1004) + *(int *)(local_8 + 0x1000) != value ||
         (*(int *)(local_8 + 0x1004) == 0x200)))))) {
      do {
        local_8 = iVar1;
        iVar1 = *(int *)(local_8 + 0x1008);
        if (iVar1 == 0) break;
      } while (*(int *)(iVar1 + 0x1000) <= value);
    }
    local_c = value;
    FUN_005f3cff(local_14,&local_c);
    bVar2 = true;
  }
  return bVar2;
}


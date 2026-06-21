// addr: 0x006af4af
// name: LexerPagedRecordSet_contains
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool LexerPagedRecordSet_contains(void * this, int value) */

bool __thiscall LexerPagedRecordSet_contains(void *this,int value)

{
  int iVar1;
  bool bVar2;
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
                    /* Checks whether a value is present in the 0x2000-byte paged set/map variant
                       and prepares a temporary iterator when in range. */
  iVar1 = *(int *)((int)this + 0xc);
  if ((value < *(int *)(iVar1 + 0x2000)) || (*(int *)((int)this + 0x20) < value)) {
    bVar2 = false;
  }
  else {
    local_8 = *(int *)((int)this + 0x10);
    if ((value < *(int *)(local_8 + 0x2000)) ||
       ((*(int *)(local_8 + 0x2004) + *(int *)(local_8 + 0x2000) <= value &&
        ((*(int *)(local_8 + 0x2004) + *(int *)(local_8 + 0x2000) != value ||
         (*(int *)(local_8 + 0x2004) == 0x200)))))) {
      do {
        local_8 = iVar1;
        iVar1 = *(int *)(local_8 + 0x2008);
        if (iVar1 == 0) break;
      } while (*(int *)(iVar1 + 0x2000) <= value);
    }
    local_c = value;
    FUN_006af1a3(local_14,&local_c);
    bVar2 = true;
  }
  return bVar2;
}


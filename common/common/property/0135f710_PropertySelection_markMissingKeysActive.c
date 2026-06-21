// addr: 0x0135f710
// name: PropertySelection_markMissingKeysActive
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertySelection_markMissingKeysActive(void * this) */

void __fastcall PropertySelection_markMissingKeysActive(void *this)

{
  void *pvVar1;
  int iVar2;
  int *extraout_EAX;
  bool *pbVar3;
  int *piVar4;
  int *unaff_EBP;
  int *piVar5;
  void *this_00;
  undefined4 local_20;
  int *local_1c;
  int *local_14;
  int local_c;
  undefined1 local_8 [8];
  
                    /* Iterates the selection object's pointer vector and, for entries whose
                       computed key is not present or not marked active in the map, inserts that key
                       with value 1. Evidence is the call to IntToBoolMap_getOrInsert and storing
                       byte 1 after checking a flag byte at the tree node. */
  if (*(int *)((int)this + 0x244) != 0) {
    piVar4 = *(int **)((int)this + 0x2c);
    local_1c = piVar4;
    if (piVar4 < *(int **)((int)this + 0x28)) {
      FUN_00d83c2d();
    }
    piVar5 = *(int **)((int)this + 0x28);
    if (*(int **)((int)this + 0x2c) < piVar5) {
      FUN_00d83c2d();
    }
    while( true ) {
      local_14 = piVar5;
      if (this == (void *)0xffffffdc) {
        FUN_00d83c2d();
      }
      if (piVar5 == piVar4) break;
      if (this == (void *)0xffffffdc) {
        FUN_00d83c2d();
      }
      if (*(int **)((int)this + 0x2c) <= piVar5) {
        FUN_00d83c2d();
      }
      if (*piVar5 != 0) {
        local_20 = GamePlayer_getPlayerId();
        this_00 = (void *)((int)this + 600);
        RBTreeInt_lowerBound_flag15(this_00,local_8,&local_20,unaff_EBP);
        pvVar1 = (void *)*extraout_EAX;
        local_c = *(int *)((int)this + 0x25c);
        iVar2 = extraout_EAX[1];
        if ((pvVar1 == (void *)0x0) || (pvVar1 != this_00)) {
          FUN_00d83c2d();
        }
        piVar5 = local_14;
        if (iVar2 != local_c) {
          if (pvVar1 == (void *)0x0) {
            FUN_00d83c2d();
          }
          if (iVar2 == *(int *)((int)pvVar1 + 4)) {
            FUN_00d83c2d();
          }
          piVar5 = local_14;
          if (*(char *)(iVar2 + 0x10) == '\0') {
            local_20 = GamePlayer_getPlayerId();
            pbVar3 = IntToBoolMap_getOrInsert(this_00,&local_20,unaff_EBP);
            *pbVar3 = true;
            piVar5 = local_14;
          }
        }
      }
      if (*(int **)((int)this + 0x2c) <= piVar5) {
        FUN_00d83c2d();
      }
      piVar5 = piVar5 + 1;
      piVar4 = local_1c;
    }
  }
  return;
}


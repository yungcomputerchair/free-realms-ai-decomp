// addr: 0x0135f820
// name: PropertySelection_clearMarkedKeys
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertySelection_clearMarkedKeys(void * this) */

void __fastcall PropertySelection_clearMarkedKeys(void *this)

{
  void *pvVar1;
  int iVar2;
  int *extraout_EAX;
  bool *pbVar3;
  int *unaff_EBX;
  int *piVar4;
  int *piVar5;
  void *this_00;
  undefined4 local_20;
  int *local_1c;
  int *local_14;
  int local_c;
  undefined1 local_8 [8];
  
                    /* Iterates selection entries and clears matching int-to-bool map flags from 1
                       to 0. Evidence is the same key lookup as 0135f710, the store of byte 0, and
                       caller PropertySelection_setActiveKey. */
  if (*(int *)((int)this + 0x244) != 0) {
    piVar5 = *(int **)((int)this + 0x2c);
    local_1c = piVar5;
    if (piVar5 < *(int **)((int)this + 0x28)) {
      FUN_00d83c2d();
    }
    piVar4 = *(int **)((int)this + 0x28);
    if (*(int **)((int)this + 0x2c) < piVar4) {
      FUN_00d83c2d();
    }
    while( true ) {
      local_14 = piVar4;
      if (this == (void *)0xffffffdc) {
        FUN_00d83c2d();
      }
      if (piVar4 == piVar5) break;
      if (this == (void *)0xffffffdc) {
        FUN_00d83c2d();
      }
      if (*(int **)((int)this + 0x2c) <= piVar4) {
        FUN_00d83c2d();
      }
      if (*piVar4 != 0) {
        local_20 = GamePlayer_getPlayerId();
        this_00 = (void *)((int)this + 600);
        RBTreeInt_lowerBound_flag15(this_00,local_8,&local_20,unaff_EBX);
        pvVar1 = (void *)*extraout_EAX;
        local_c = *(int *)((int)this + 0x25c);
        iVar2 = extraout_EAX[1];
        if ((pvVar1 == (void *)0x0) || (pvVar1 != this_00)) {
          FUN_00d83c2d();
        }
        piVar4 = local_14;
        if (iVar2 != local_c) {
          if (pvVar1 == (void *)0x0) {
            FUN_00d83c2d();
          }
          if (iVar2 == *(int *)((int)pvVar1 + 4)) {
            FUN_00d83c2d();
          }
          piVar4 = local_14;
          if (*(char *)(iVar2 + 0x10) == '\x01') {
            local_20 = GamePlayer_getPlayerId();
            pbVar3 = IntToBoolMap_getOrInsert(this_00,&local_20,unaff_EBX);
            *pbVar3 = false;
            piVar4 = local_14;
          }
        }
      }
      if (*(int **)((int)this + 0x2c) <= piVar4) {
        FUN_00d83c2d();
      }
      piVar4 = piVar4 + 1;
      piVar5 = local_1c;
    }
  }
  return;
}


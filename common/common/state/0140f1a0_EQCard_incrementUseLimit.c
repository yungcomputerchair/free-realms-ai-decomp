// addr: 0x0140f1a0
// name: EQCard_incrementUseLimit
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EQCard_incrementUseLimit(void * this, void * card, int actionOrEventId_)
    */

void __thiscall EQCard_incrementUseLimit(void *this,void *card,int actionOrEventId_)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int actionId_;
  char *pcVar8;
  void *local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_8 [8];
  
                    /* Increments per-card/action use-limit counters, with special handling for
                       EventUseLimit based on event emission depth. */
  uVar2 = PlayElement_getId(card);
  pcVar8 = "%d EQCard::incrementUseLimit: %d";
  pvVar3 = (void *)FUN_01340340();
  Game_logGeneral(pvVar3,pcVar8,uVar2);
  pvVar3 = Card_getActionByID(this,actionId_);
  if (pvVar3 != (void *)0x0) {
    iVar4 = FUN_01321f50();
    if (iVar4 == 0x222f6) {
      uVar2 = Game_getEventEmissionDepth();
      uVar7 = PlayElement_getId(uVar2);
      pcVar8 = "%d EQCard::incrementUseLimit: EventUseLimit %d";
      pvVar3 = (void *)FUN_01340340();
      Game_logGeneral(pvVar3,pcVar8,uVar7);
      local_18 = card;
      local_14 = uVar2;
      FUN_0138eaa0(&local_10,&local_18);
      iVar4 = *(int *)((int)this + 0x7c);
      if ((local_10 == 0) || (local_10 != (int)this + 0x78)) {
        FUN_00d83c2d();
      }
      if (local_c == iVar4) {
        puVar6 = (undefined4 *)FUN_01393e20(&local_18);
        *puVar6 = 1;
        return;
      }
      piVar5 = (int *)FUN_01393e20(&local_18);
      *piVar5 = *piVar5 + 1;
      return;
    }
    local_18 = card;
    local_14 = actionOrEventId_;
    piVar5 = (int *)FUN_0138eaa0(local_8,&local_18);
    iVar4 = *piVar5;
    iVar1 = piVar5[1];
    local_c = *(int *)((int)this + 0xf0);
    if ((iVar4 == 0) || (iVar4 != (int)this + 0xec)) {
      FUN_00d83c2d();
    }
    if (iVar1 == local_c) {
      local_14 = actionOrEventId_;
      local_18 = card;
      puVar6 = (undefined4 *)FUN_01393e20(&local_18);
      *puVar6 = 1;
      return;
    }
    if (iVar4 == 0) {
      FUN_00d83c2d();
    }
    if (iVar1 == *(int *)(iVar4 + 4)) {
      FUN_00d83c2d();
    }
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  return;
}


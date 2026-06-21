// addr: 0x00477fef
// name: FUN_00477fef
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool emit_clipped_draw_command(int renderer_, int commandType_, int * command,
   undefined4 ctx_) */

bool __thiscall
emit_clipped_draw_command(void *this,int renderer_,int commandType_,int *command,undefined4 ctx_)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined3 extraout_var;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [8];
  int local_18;
  int *local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  uint local_8;
  
                    /* Transforms a command rectangle by renderer offsets, checks clipping/coverage,
                       selects cached clip state, and dispatches the command through virtual draw
                       callbacks, creating new command batches as needed. Class identity is not
                       evident. */
  iVar2 = commandType_;
  (**(code **)(*(int *)commandType_ + 4))(&local_30,command);
  local_2c = local_2c + *(int *)((int)this + 0x94);
  local_24 = local_24 + *(int *)((int)this + 0x94);
  local_30 = local_30 + *(int *)((int)this + 0x90);
  local_28 = local_28 + *(int *)((int)this + 0x90);
  if (*(void **)((int)this + 0x98) == (void *)0x0) {
    commandType_ = 1;
  }
  else {
    cVar3 = RectRegion_classifyRectCoverage(*(void **)((int)this + 0x98),&local_30);
    commandType_ = CONCAT31(extraout_var,cVar3);
  }
  if (commandType_ == 0) {
    bVar8 = true;
  }
  else {
    local_10 = 0;
    if (*(int *)((int)this + 100) == renderer_) {
      local_8 = *(uint *)((int)this + 0x68);
    }
    else {
      piVar4 = (int *)FUN_0046ab6e(local_20,&renderer_);
      local_18 = *piVar4;
      local_14 = (int *)piVar4[1];
      FUN_0045d4ac(*(undefined4 *)((int)this + 0x5c),(int)this + 0x58);
      cVar3 = FUN_0045c791(local_c);
      if (cVar3 != '\0') goto LAB_00478143;
      iVar5 = FUN_0045d4d0();
      local_8 = *(uint *)(iVar5 + 4);
      *(int *)((int)this + 100) = renderer_;
      *(uint *)((int)this + 0x68) = local_8;
    }
    uVar7 = *(int *)((int)this + 0x50) - 1;
    local_14 = (int *)(*(int *)((int)this + 0x54) + uVar7 * 4);
    if (*local_14 == 0) goto LAB_00478143;
    iVar5 = *(int *)(*local_14 + 0x18);
    iVar1 = *(int *)(*local_14 + 0x1c);
    while (local_8 < uVar7) {
      piVar4 = (int *)(iVar1 * 0x20 + 0x10 + iVar5);
      if ((((local_2c <= piVar4[3]) && (piVar4[1] <= local_24)) && (*piVar4 <= local_28)) &&
         (local_30 <= piVar4[2])) goto LAB_00478143;
      local_14 = local_14 + -1;
      uVar7 = uVar7 - 1;
      if (*local_14 == 0) goto LAB_00478143;
      iVar5 = *(int *)(*local_14 + 0x18);
      iVar1 = *(int *)(*local_14 + 0x1c);
    }
    iVar5 = (**(code **)(*(int *)iVar2 + 0x10))
                      (iVar1 * 0x20 + iVar5,command,&local_30,(int)this + 0x90,commandType_,
                       &local_10);
    while (iVar5 == 2) {
LAB_00478143:
      iVar5 = renderer_;
      uVar6 = (*(code *)**(undefined4 **)iVar2)(renderer_);
      FUN_00477e05(&local_18,uVar6,iVar5);
      iVar5 = *(int *)((int)this + 0x50);
      piVar4 = (int *)FUN_00474a4f(&renderer_);
      *piVar4 = iVar5 + -1;
      *(int *)((int)this + 100) = renderer_;
      *(int *)((int)this + 0x68) = *(int *)((int)this + 0x50) + -1;
      iVar5 = (**(code **)(*(int *)iVar2 + 8))
                        ((int)local_14 * 0x20 + local_18,command,&local_30,(int)this + 0x90,
                         commandType_,&local_10);
    }
    bVar8 = iVar5 == 1;
  }
  return bVar8;
}


// addr: 0x007dc890
// name: AnimVisibilityController_updatePlaybackState
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool __thiscall
AnimVisibilityController_updatePlaybackState(int *param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int extraout_EAX;
  void *this;
  int extraout_EAX_00;
  float10 fVar3;
  float10 extraout_ST0;
  bool local_25;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
                    /* Updates animation visibility/playback state according to bit flags, lazily
                       obtains a runtime controller, applies transforms when needed, and
                       stops/completes playback based on elapsed time. Evidence is repeated calls
                       through the controller vtable and animation helper callees. */
  local_25 = false;
  if (((int *)param_1[0x14] == (int *)0x0) ||
     (cVar2 = (**(code **)(*(int *)param_1[0x14] + 0xc))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((param_3 >> 1 & 1) != 0) && (bVar1)) {
    (**(code **)(*(int *)param_1[0x14] + 8))(0,1);
  }
  if ((param_3 & 1) != 0) {
    if ((param_1[0x14] == 0) && (releaseMemberInterface(param_1), extraout_EAX != 0)) {
      if (param_1[0x15] == 0) {
        *(int *)(extraout_EAX + 0x56c) = *(int *)(extraout_EAX + 0x56c) + 1;
        param_1[0x15] = *(int *)(extraout_EAX + 0x56c);
      }
      this = (void *)(**(code **)(*param_1 + 0x28))(param_1[0x15]);
      param_1[0x14] = (int)this;
      if (this == (void *)0x0) {
        releaseMemberInterface(param_1);
        if ((extraout_EAX_00 != 0) && (*(char *)(extraout_EAX_00 + 0x22d) == '\0')) {
          return false;
        }
      }
      else if ((char)param_1[0x24] != '\0') {
        FUN_00773270(this,param_1[0x18],param_1 + 0x19);
        iStack_20 = param_1[0x20];
        iStack_1c = param_1[0x21];
        uStack_18 = 0;
        uStack_14 = 0;
        FUN_007cfe70(param_1 + 0x1c,&iStack_20,param_1[0x22]);
      }
    }
    if ((int *)param_1[0x14] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x14] + 4))(0);
      cVar2 = (**(code **)(*(int *)param_1[0x14] + 0x18))();
      local_25 = cVar2 == '\0';
    }
  }
  if ((param_3 >> 2 & 1) != 0) {
    (**(code **)(*param_1 + 0xc))(1);
    return false;
  }
  cVar2 = (**(code **)(*param_1 + 0x18))();
  if (cVar2 != '\0') {
    fVar3 = (float10)FUN_007e78c0();
    FUN_007e7850();
    if ((float10)(float)fVar3 <= extraout_ST0) {
      if (((int *)param_1[0x14] != (int *)0x0) &&
         (cVar2 = (**(code **)(*(int *)param_1[0x14] + 0x18))(), cVar2 != '\0')) {
        return local_25;
      }
      if ((int *)param_1[0x14] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x14] + 8))(0,0);
      }
      (**(code **)(*param_1 + 0xc))(1);
      return false;
    }
  }
  return local_25;
}


// addr: 0x01367220
// name: FUN_01367220
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void notify_action_loop_detected(void * player) */

void __thiscall notify_action_loop_detected(void *this,void *player)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int *in_stack_00000008;
  int in_stack_0000000c;
  undefined1 local_1c [4];
  int *piStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Logs/sends a message that a loop was detected and an action will be disabled
                       until another action occurs. Exact owning class is not proven. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167fb28;
  local_c = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  piVar6 = (int *)FUN_01354b10(local_1c,&player);
  iVar1 = *piVar6;
  iVar2 = piVar6[1];
  iVar3 = *(int *)((int)this + 0x2cc);
  if ((iVar1 == 0) || (iVar1 != (int)this + 0x2c8)) {
    FUN_00d83c2d(uVar5);
  }
  if (iVar2 != iVar3) {
    if (iVar1 == 0) {
      FUN_00d83c2d(uVar5);
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d(uVar5);
    }
    if ((int *)*(int *)(iVar2 + 0x10) == in_stack_00000008) {
      if (iVar2 == *(int *)(iVar1 + 4)) {
        FUN_00d83c2d(uVar5);
      }
      if (*(int *)(iVar2 + 0x14) == in_stack_0000000c) {
        if (iVar2 == *(int *)(iVar1 + 4)) {
          FUN_00d83c2d();
        }
        *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + 1;
        cVar4 = (**(code **)(*(int *)this + 0x1f0))(player,in_stack_00000008,in_stack_0000000c);
        if (cVar4 != '\0') {
          ExceptionList = local_c;
          return;
        }
        piStack_18 = (int *)0x0;
        piStack_14 = (int *)0x0;
        uStack_10 = 0;
        uStack_4 = 0;
        FUN_013630f0(local_1c);
        in_stack_00000008 = piStack_14;
        if (piStack_14 < piStack_18) {
          FUN_00d83c2d();
        }
        piVar6 = piStack_18;
        if (piStack_14 < piStack_18) {
          FUN_00d83c2d();
        }
        while( true ) {
          if (&stack0x00000000 == (undefined1 *)0x1c) {
            FUN_00d83c2d();
          }
          if (piVar6 == in_stack_00000008) break;
          if (&stack0x00000000 == (undefined1 *)0x1c) {
            FUN_00d83c2d();
          }
          if (piStack_14 <= piVar6) {
            FUN_00d83c2d();
          }
          GamePlayer_logFormattedMessage
                    (this,*piVar6,
                     "A loop has been detected. This action will no longer be available until another action takes place."
                    );
          if (piStack_14 <= piVar6) {
            FUN_00d83c2d();
          }
          piVar6 = piVar6 + 1;
        }
        uStack_4 = 0xffffffff;
        if (piStack_18 == (int *)0x0) {
          ExceptionList = local_c;
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(piStack_18);
      }
    }
  }
  piVar6 = (int *)FUN_0135d460(&player);
  *piVar6 = (int)in_stack_00000008;
  piVar6[1] = in_stack_0000000c;
  piVar6[2] = 1;
  ExceptionList = local_c;
  return;
}


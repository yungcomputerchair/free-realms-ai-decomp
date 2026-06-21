// addr: 0x01230080
// name: Win32InputService_sub_01230080
// subsystem: common/input/cursor
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Win32InputService_sub_01230080(undefined4 * param_1) */

void __fastcall Win32InputService_sub_01230080(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Is a class method with behavior inferred from its code shape. Evidence:
                       Win32InputService::vftable. */
  puStack_8 = &LAB_0165136c;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  *param_1 = Input::Win32InputService::vftable;
  local_4 = 3;
  iVar1 = *(int *)param_1[4];
  while( true ) {
    iVar2 = param_1[4];
    if (param_1 == (undefined4 *)0xfffffff4) {
      FUN_00d83c2d(uVar3);
    }
    if (iVar1 == iVar2) break;
    if (param_1 == (undefined4 *)0xfffffff4) {
      FUN_00d83c2d(uVar3);
    }
    if (iVar1 == param_1[4]) {
      FUN_00d83c2d(uVar3);
    }
    DestroyCursor(*(HCURSOR *)(iVar1 + 0x10));
    FUN_0122f900();
  }
  local_4._0_1_ = 2;
  IMouse_sub_012f6cf0(param_1 + 0x18a);
  local_4._0_1_ = 1;
  IKeyboard_sub_012f6390(param_1 + 7);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_01230010();
  local_4 = 0xffffffff;
  InputServiceBase_sub_0122f6c0();
  ExceptionList = local_c;
  return;
}


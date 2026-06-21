// addr: 0x0122f5a0
// name: Input_FRTWInputService_ctor
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Input_FRTWInputService_ctor(void * this) */

void * __fastcall Input_FRTWInputService_ctor(void *this)

{
  int iVar1;
  undefined4 local_1c;
  void *local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Input::FRTWInputService: initializes base/service state, installs
                       Input::FRTWInputService::vftable, sets the cursor state to -1, initializes
                       cursor mappings, and caches the default cursor handle. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01651208;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = this;
  FUN_012301e0(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  local_4 = 0;
  *(undefined ***)this = Input::FRTWInputService::vftable;
  *(undefined4 *)((int)this + 0x654) = 0xffffffff;
  FUN_0122e760();
  local_1c = 1;
  FUN_0122e3c0(&local_14,&local_1c);
  iVar1 = *(int *)((int)this + 0x10);
  if ((local_14 == 0) || (local_14 != (int)this + 0xc)) {
    FUN_00d83c2d();
  }
  if (local_10 != iVar1) {
    if (local_14 == 0) {
      FUN_00d83c2d();
    }
    if (local_10 == *(int *)(local_14 + 4)) {
      FUN_00d83c2d();
    }
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(local_10 + 0x10);
  }
  ExceptionList = local_c;
  return this;
}


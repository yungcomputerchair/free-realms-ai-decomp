// addr: 0x007cfd50
// name: AnimVisibilityController_createWithInitialVisibility
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall AnimVisibilityController_createWithInitialVisibility(int param_1)

{
  int iVar1;
  uint uVar2;
  void *this;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Always allocates an AnimVisibilityController using the source visibility flag
                       as the constructor argument, passes it to the callback slot, and releases the
                       temporary reference. Evidence is AnimVisibilityController_ctor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015618db;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x14);
  piVar3 = (int *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    piVar3 = AnimVisibilityController_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)(param_1 + -0x38) + 4))(piVar3,uVar2);
  LOCK();
  iVar1 = piVar3[1] + -1;
  piVar3[1] = iVar1;
  UNLOCK();
  if (iVar1 == 0) {
    (**(code **)(*piVar3 + 4))();
  }
  ExceptionList = this;
  return;
}


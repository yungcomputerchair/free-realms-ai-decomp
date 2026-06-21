// addr: 0x007cfbd0
// name: AnimVisibilityController_createIfVisibleA
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall AnimVisibilityController_createIfVisibleA(int param_1,int param_2)

{
  int iVar1;
  void *this;
  int *piVar2;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates an AnimVisibilityController only if the source visibility flag is
                       not set, passes it through a callback slot at this-0x38, and releases the
                       temporary reference. Evidence is AnimVisibilityController_ctor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156187b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)(*(int *)(param_2 + 4) + 0x68) != '\0') {
    (**(code **)(*(int *)(param_1 + -0x38) + 4))(0,DAT_01b839d8 ^ (uint)&stack0xffffffec);
    ExceptionList = unaff_ESI;
    return;
  }
  this = Mem_Alloc(0x14);
  local_4 = 0;
  if (this == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = AnimVisibilityController_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)(param_1 + -0x38) + 4))(piVar2);
  LOCK();
  iVar1 = piVar2[1] + -1;
  piVar2[1] = iVar1;
  UNLOCK();
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 4))();
  }
  ExceptionList = unaff_ESI;
  return;
}


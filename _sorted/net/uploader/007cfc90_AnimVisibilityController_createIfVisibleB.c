// addr: 0x007cfc90
// name: AnimVisibilityController_createIfVisibleB
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall AnimVisibilityController_createIfVisibleB(int param_1,int param_2)

{
  int iVar1;
  void *this;
  int *piVar2;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Variant of AnimVisibilityController_createIfVisibleA that uses the callback
                       slot at this-0x3c. It allocates an AnimVisibilityController only when the
                       source visibility flag is clear. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015618ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)(*(int *)(param_2 + 4) + 0x68) != '\0') {
    (**(code **)(*(int *)(param_1 + -0x3c) + 4))(0,DAT_01b839d8 ^ (uint)&stack0xffffffec);
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
  (**(code **)(*(int *)(param_1 + -0x3c) + 4))(piVar2);
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


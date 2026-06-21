// addr: 0x00b16cf0
// name: ClientInterpolatedMovementController_createIfEnabled
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * ClientInterpolatedMovementController_createIfEnabled
                 (undefined4 param_1,undefined4 param_2,int param_3)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates a ClientInterpolatedMovementController only when mode equals 1;
                       otherwise returns null. Constructor callee identifies the created class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015d0a4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = (void *)0x0;
  if (param_3 == 1) {
    pvVar1 = Mem_Alloc(0x50);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = ClientInterpolatedMovementController_ctor(pvVar1);
    }
  }
  ExceptionList = local_c;
  return pvVar1;
}


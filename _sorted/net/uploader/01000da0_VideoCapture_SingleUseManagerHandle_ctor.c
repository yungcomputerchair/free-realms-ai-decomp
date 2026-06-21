// addr: 0x01000da0
// name: VideoCapture_SingleUseManagerHandle_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall VideoCapture_SingleUseManagerHandle_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a VideoCapture::VideoCaptureManagerImpl_SingleUse object and stores
                       the pointer in a one-field holder. Evidence is callee 01000810 assigning
                       VideoCapture::VideoCaptureManagerImpl_SingleUse::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016317ab;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x228);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_01000810(uVar1);
  }
  *param_1 = uVar3;
  ExceptionList = local_c;
  return param_1;
}


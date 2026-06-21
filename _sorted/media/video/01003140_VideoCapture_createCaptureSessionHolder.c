// addr: 0x01003140
// name: VideoCapture_createCaptureSessionHolder
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall VideoCapture_createCaptureSessionHolder(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0xa0-byte video capture/session object via 01002e50 and stores it
                       through an output holder pointer. The exact class is unclear, but callers use
                       it as the capture-side object paired with EncoderThreadImpl. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01631d0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xa0);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = VideoCapture_EncoderContext_ctor(pvVar1);
  }
  *param_1 = pvVar1;
  ExceptionList = local_c;
  return param_1;
}

